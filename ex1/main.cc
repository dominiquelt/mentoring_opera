#include <iostream>

#include "file_utils.h"

int main(int argc, char* argv[]) {
  if (argc < 3) {
    std::cout << "Not enough arguments" << std::endl;
    return 1;
  }

  std::ifstream file1(argv[1]);

  std::ofstream file2(argv[2]);

  vector_to_file(file2, create_sorted_vector(file1));

  std::cout
      << "Words in the input file got sorted and written into the output file"
      << std::endl;

  return 0;
}
