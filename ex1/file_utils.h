#ifndef FILE_UTILS_H
#define FILE_UTILS_H

#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> create_sorted_vector(std::ifstream& file);
void vector_to_file(std::ofstream& file, const std::vector<std::string>& data);

#endif
