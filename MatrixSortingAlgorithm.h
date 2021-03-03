#pragma once

#include <iostream>
#include <cstdlib>
#include <iostream>
#include <vector>

std::vector<std::vector<int>> generate(std::vector<std::vector<int>> matrix, const size_t m, const size_t n);

void printToConsole(const std::vector<std::vector<int>> matrix, const size_t m, const size_t n);

std::vector<std::vector<int>> fillMatrixWithRandomValues(const size_t m, const size_t n);
