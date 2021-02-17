/* Copyright 2021 CSCE 240 
 * Adapted by William Hobbs */

#include <exam1/problem5.h>
#include <exam1/problem5.h>  // test correct header constuction
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>


/**
 * Converts array of ints into space-delimited string value for ease of
 * printing and comparison.
 */
const std::string ToString(const int kInts[], size_t size);


int main(int argc, char* argv[]) {
  std::cout << "Problem 5" << std::endl;
  assert(kTestVal == 'C');  // test correct header construction
  assert(_GLIBCXX_ALGORITHM == -1);

  const std::string kFileName = "integers.txt";
  const std::string keyFileName = "keyFile.txt";
  int kExpected_max;
  int kExpected_min;
  int kExpected_sum;
  double kExpected_avg;

  // read in keyfile with expected values
  std::ifstream keyFile;
  keyFile.open(keyFileName);
  keyFile >> kExpected_max;
  keyFile >> kExpected_min;
  keyFile >> kExpected_sum;
  keyFile >> kExpected_avg;

  // test Max
  const int kActual_max = Max(kFileName);
  std::cout << "  Max(" << kFileName << ")" << std::endl;
  std::cout << "    Expected: " << kExpected_max << ", Actual: " << kActual_max
    << std::endl;

  // test Min
  const int kActual_min = Min(kFileName);
  std::cout << "  Min(" << kFileName << ")" << std::endl;
  std::cout << "    Expected: " << kExpected_min << ", Actual: " << kActual_min
    << std::endl;

  // test Min
  const int kActual_sum = Sum(kFileName);
  std::cout << "  Sum(" << kFileName << ")" << std::endl;
  std::cout << "    Expected: " << kExpected_sum << ", Actual: " << kActual_sum
    << std::endl;

  // test Min
  const double kActual_avg = Avg(kFileName);
  std::cout << "  Avg(" << kFileName << ")" << std::endl;
  std::cout << "    Expected: " << kExpected_avg << ", Actual: " << kActual_avg
    << std::endl;

  // test Sort
  // const std::string kExpected_ints = "-71 15 34 42";
  // const size_t kSize = 4;
  // int actual_ints[kSize];
  // Sort(kFileName, actual_ints);
  // std::cout << "  Sort(" << kFileName << ")" << std::endl;
  // std::cout << "    Expected: " << kExpected_ints
  //   << ", Actual: " << ToString(actual_ints, kSize)
  //   << std::endl;

  return 0;
}


const std::string ToString(const int kInts[], size_t size) {
  std::stringstream sout;

  for (size_t i = 0; i < size; ++i) {
    sout << kInts[i];
    if (i != size - 1)
      sout << ' ';
  }

  return sout.str();
}
