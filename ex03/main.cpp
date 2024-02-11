#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec(3, 10);
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  std::cout << vec.at(0) << std::endl;
  std::cout << vec.at(1) << std::endl;
  std::cout << vec[0] << std::endl;
  std::cout << vec[1] << std::endl;

  std::cout << vec.capacity() << std::endl;
}