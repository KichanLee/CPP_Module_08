#ifndef __SPAN_HPP
#define __SPAN_HPP

#include <algorithm>
#include <iostream>
#include <set>
#include <stdexcept>

class Span {
 private:
  Span();
  unsigned int len;
  std::multiset<long long> mset;

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