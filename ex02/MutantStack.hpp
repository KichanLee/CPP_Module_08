#ifndef __MUTANTSTACK_HPP
#define __MUTANTSTACK_HPP

#include <deque>
#include <iostream>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
 public:
  MutantStack();
  MutantStack(const MutantStack& rhs);
  MutantStack& operator=(const MutantStack& rhs);
  virtual ~MutantStack();

  typedef typename Container::iterator iterator;
  typedef typename Container::const_iterator const_iterator;

  iterator begin();
  iterator end();
  const_iterator begin() const;
  const_iterator end() const;
};

#include "MutantStack.tpp"

#endif
