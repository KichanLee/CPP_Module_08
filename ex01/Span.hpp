#ifndef __SPAN_HPP
#define __SPAN_HPP

#include <algorithm>
#include <iostream>
#include <numeric>
#include <stdexcept>
#include <vector>

class Span {
 private:
  Span();
  std::vector<int> vec;
  unsigned int len;

 public:
  Span(unsigned int N);
  Span(const Span& rhs);
  Span& operator=(const Span& rhs);
  void addNumber(int num);
  long long shortestSpan();
  long long longestSpan();
  virtual ~Span();
};

#endif