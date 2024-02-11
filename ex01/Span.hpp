#ifndef __SPAN_HPP
#define __SPAN_HPP

#include <algorithm>
#include <iostream>
#include <numeric>
#include <set>
#include <stdexcept>

class Span {
 private:
  Span();
  unsigned int len;

 public:
  std::vector<int> vec;
  Span(unsigned int N);
  Span(const Span& rhs);
  Span& operator=(const Span& rhs);
  void addNumber(int num);
  long long shortestSpan();
  long long longestSpan();
  virtual ~Span();
};

#endif