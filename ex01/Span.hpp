#ifndef __SPAN_HPP
#define __SPAN_HPP

#include <algorithm>
#include <iostream>
#include <numeric>
#include <stdexcept>
#include <vector>

class Span {
 private:
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

  template <typename Iterator_input>
  void addNumbers(Iterator_input first, Iterator_input last) {
    if (static_cast<size_t>(std::distance(first, last)) >
        this->len - this->vec.size()) {
      throw std::runtime_error(
          "Adding these numbers would exceed the Span's capacity.");
    }
    std::copy(first, last, std::back_inserter(this->vec));
  }
};

#endif
