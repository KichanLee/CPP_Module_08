#include <iostream>
#include <set>
#include <vector>

int main() {
  std::vector<int> myvector;

    myvector.push_back(1);
  myvector.push_back(2);

  std::cout << myvector.size() << std::endl;
  std::vector<int>::iterator begin = myvector.begin();
  std::vector<int>::iterator end = myvector.end();
}
