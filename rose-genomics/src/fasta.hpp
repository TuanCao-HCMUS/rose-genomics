#ifndef FASTA_HPP
#define FASTA_HPP

#include <string>
#include <vector>

struct FastaRecord {
    std::string header;
    std::string sequence;
};

std::vector<FastaRecord> read_fasta(const std::string& filename);

#endif // FASTA_HPP
