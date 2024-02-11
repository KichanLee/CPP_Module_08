#include "Span.hpp"

Span::Span(unsigned int N) : len(N) {}
Span::Span(const Span& rhs) : len(rhs.len), vec(rhs.vec) { *this = rhs; }
Span::~Span() {}
Span& Span::operator=(const Span& rhs) {
  if (this != &rhs) {
    this->len = rhs.len;
    this->vec = rhs.vec;
  }
  return (*this);
}
void Span::addNumber(int num) {
  if (this->vec.size() >= len)
    throw std::runtime_error("Over the Maximum Size");
  vec.push_back(num);
}

long long Span::longestSpan() {
  if (vec.size() < 2)
    throw std::logic_error("Not enough elements for span Calculation");
  std::sort(vec.begin(), vec.end());

  return (static_cast<long long>(vec.back()) -
          static_cast<long long>(vec.front()));
}

long long Span::shortestSpan() {
  if (vec.size() < 2)
    throw std::logic_error("Not enough elements for span Calculation");
  std::sort(vec.begin(), vec.end());

  long long reVal = LLONG_MAX;
  std::vector<long long>::iterator begin = vec.begin();
  std::vector<long long>::iterator end = vec.end();
  while (begin < end) {
    if (*(begin + 1) - (*begin) == 0) return (0);
    if (*(begin + 1) - (*begin) == 1)
      return (1);
    else if (*(begin + 1) - (*begin) > reVal)
      reVal = *(begin + 1) - (*begin);
    begin++;
  }
  return (reVal);
}
