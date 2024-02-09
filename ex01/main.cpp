#include <iostream>
#include <set>

int main() {
  std::multiset<int> myMultiset;

  myMultiset.insert(1);
  myMultiset.insert(2);
  myMultiset.insert(5);
  myMultiset.insert(3);
  myMultiset.insert(3);
  myMultiset.insert(3);

  return 0;
}
