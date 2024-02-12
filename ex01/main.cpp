#include <iostream>
#include <vector>

#include "Span.hpp"

int main() {
  try {
    // Span sp(100);
    // sp.addNumber(3);
    // sp.addNumber(9);
    // sp.addNumber(100);

    Span sp(10000);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::vector<int> numbers;
    for (int i = 0; i < 10000 - 5; ++i) {
      numbers.push_back(i * 3);
    }

    sp.addNumbers(numbers.begin(), numbers.end());

    std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
    std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;

  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  return 0;
}
