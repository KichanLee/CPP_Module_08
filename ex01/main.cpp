#include "Span.hpp"

int main() {
  Span sp(10);
  sp.addNumber(1147483677);
  sp.addNumber(2);
  sp.addNumber(7);
  sp.addNumber(1110);
  sp.addNumber(1111111);
  sp.addNumber(232222);
  sp.addNumber(50333);
  for (std::vector<int>::iterator itr = sp.vec.begin(); itr != sp.vec.end() - 1;
       ++itr)
    std::cout << "itr val : " << *itr << " ";
  std::cout << "\n";
  std::cout << "longest Span : " << sp.longestSpan() << std::endl;
  std::cout << "Shortest Span : " << sp.shortestSpan() << std::endl;
}
