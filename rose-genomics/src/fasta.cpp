#include "fasta.hpp"
#include <fstream>
#include <stdexcept>

std::vector<FastaRecord> read_fasta(const std::string& filename) {
    std::ifstream infile(filename);
    if (!infile) {
        throw std::runtime_error("Could not open FASTA file");
    }

    std::vector<FastaRecord> records;
    std::string line, header, sequence;

    while (std::getline(infile, line)) {
        if (line.empty()) continue;

        if (line[0] == '>') {
            if (!header.empty()) {
                records.push_back({header, sequence});
                sequence.clear();
            }
            header = line.substr(1);
        } else {
            sequence += line;
        }
    }

    if (!header.empty()) {
        records.push_back({header, sequence});
    }

    return records;
}
