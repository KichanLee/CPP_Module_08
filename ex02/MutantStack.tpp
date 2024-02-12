#include "MutantStack.hpp"

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() : std::stack<T, Container>(){};

template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack& rhs)
    : std::stack<T, Container>(rhs) {}

template <typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(
    const MutantStack& rhs) {
  if (this != &rhs) {
    std::stack<T, Container>::operator=(rhs);
  }
  return *this;
}

template <typename T, typename Container>
MutantStack<T, Container>::~MutantStack() {}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator
MutantStack<T, Container>::begin() {
  return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end() {
  return this->c.end();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator
MutantStack<T, Container>::begin() const {
  return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::const_iterator
MutantStack<T, Container>::end() const {
  return this->c.end();
}