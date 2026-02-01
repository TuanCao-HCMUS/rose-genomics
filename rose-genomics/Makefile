CXX = clang++
CXXFLAGS = -std=c++20 -O2 -Wall -Wextra
INCLUDES = -Iinclude
SRC = src/main.cpp src/fasta.cpp
TARGET = build/rose

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
