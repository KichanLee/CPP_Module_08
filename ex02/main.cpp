#include <list>

#include "MutantStack.hpp"

int main() {
  // MutantStack<int> mstack;
  // mstack.push(5);
  // mstack.push(17);
  // std::cout << mstack.top() << std::endl;
  // mstack.pop();
  // std::cout << mstack.size() << std::endl;
  // mstack.push(3);
  // mstack.push(5);
  // mstack.push(737);
  // mstack.push(0);
  // MutantStack<int>::iterator it = mstack.begin();
  // MutantStack<int>::iterator ite = mstack.end();
  // ++it;
  // --it;
  // while (it != ite) {
  //   std::cout << *it << std::endl;
  //   ++it;
  // }
  // std::stack<int> s(mstack);

  // std::cout << "Stack s is empty? " << s.empty() << std::endl;

  MutantStack<int, std::list<int>> mlist;

  mlist.push(3);
  mlist.push(5);
  mlist.push(10);

  MutantStack<int, std::list<int>>::iterator it = mlist.begin();
  MutantStack<int, std::list<int>>::iterator end = mlist.end();

  while (it != end) {
    std::cout << *it << std::endl;
    ++it;
  }

  return 0;
}