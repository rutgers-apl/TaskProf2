#include <fstream>
#include <iostream>
#include <assert.h>

size_t* primes;
size_t num_primes = 0;

bool IsPrime(size_t num) {
  if (num <= 1) return false; // zero and one are not prime
  for (size_t i=2; i*i<=num; i++) {
    if (num % i == 0) return false;
  }
  return true;
}

void check_primes(size_t range_begin, size_t range_end) {
  for (size_t i = range_begin; i < range_end; i++) {
    if (IsPrime(i)) {
      primes[num_primes] = i;
      num_primes++;
    }
  }
}

int main(int argc, char* argv[]) {
  if (argc != 3) {
    std::cout << "Format: ./detect_primes <range_begin> <range_end>" << std::endl;
    return 0;
  }

  size_t range_begin = strtoul(argv[1], NULL, 0);
  size_t range_end = strtoul(argv[2], NULL, 0);
  assert(range_end > range_begin);

  primes = new size_t[range_end-range_begin];

  check_primes(range_begin, range_end);

  std::ofstream report;
  report.open("primes.txt");
  for (size_t i = 0; i < num_primes; i++) {
    report << primes[i] << "   ";
  }
}
