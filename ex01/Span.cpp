#include "Span.hpp"

Span::Span(unsigned int N) : len(N) { vec.reserve(N); }
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
  std::vector<long long> reVector(vec.size());
  std::adjacent_difference(vec.begin(), vec.end(), reVector.begin());
  long long reVal = *std::min_element(reVector.begin() + 1, reVector.end());
  return reVal;
}
