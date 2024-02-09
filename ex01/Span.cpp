#include "Span.hpp"

Span::Span(unsigned int N) : len(N) {}
Span::Span(const Span& rhs) { *this = rhs; }
Span::~Span() {}
Span& Span::operator=(const Span& rhs) {
  if (this != rhs) {
    this->len = rhs.len;
    this->mset = rhs.mset;
  }
  return (*this);
}
void Span::addNumber(int num) {
  if (this->mset.size() + 1 > len)
    throw std::runtime_error("Over the Maximum Size");
  mset.insert(num);
}

long long Span::shortestSpan() {
  if (mset.size() < 2)
    throw std::logic_error("Not enough elements for span Calculation");

  std::multiset<long long>::iterator prev = mset.begin();
  std::multiset<long long>::iterator next = prev++;

  long long minVal = LLONG_MAX;

  while (next != mset.end()) {
    if (*prev == *next) {
      next++;
      prev++;
      return (0);
    } else if (*next - *prev < minVal) {
      minVal = *next - *prev;
      if (minVal == 1) return (1);
    }
    return (minVal);
  }
}

/**
 * long long Span::shortestSpan() {
    if (mset.size() < 2) {
        throw std::logic_error("Not enough elements for span calculation");
    }

    long long minSpan = LLONG_MAX; 

    for (std::multiset<long long>::iterator prev = mset.begin(), next =
++mset.begin(); next != mset.end();
         ++prev, ++next) {
        long long span = *next - *prev;
        if (span < minSpan) {
            minSpan = span;
        }
    }

    return minSpan;
}


long long Span::longestSpan() {
  if (mset.size() < 2)
    throw std::logic_error("Not enough elements for span Calculation");
  std::multiset<long long>::iterator begin = mset.begin();
  std::multiset<long long>::iterator last = --mset.end();

  return (*last - *begin);
}
