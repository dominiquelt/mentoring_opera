#include "file_utils.h"

#include <algorithm>
#include <iostream>

std::vector<std::string> create_sorted_vector(std::ifstream& file) {
  if (!file.is_open()) {
    std::cerr << "Error: Cannot open file: " << std::endl;
    return {};
  }
  std::vector<std::string> lines;
  std::string bufor;

  while (std::getline(file, bufor)) {
    for (char& x : bufor) {
      x = std::tolower(x);
    }
    lines.push_back(bufor);
  }

  file.close();

  std::sort(lines.begin(), lines.end());

  return lines;
}
void vector_to_file(std::ofstream& file, const std::vector<std::string>& data) {
  if (!file.is_open()) {
    std::cerr << "Error: File could not be opened" << std::endl;
    return;
  }

  for (int i = 0; i < data.size(); i++) {
    file << data[i] << "\n";
  }

  file.close();
}
