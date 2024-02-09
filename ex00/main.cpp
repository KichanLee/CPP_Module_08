
#include "easyfind.hpp"

int main() {
  std::vector<int> vec(4, 10);

  for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
    std::cout << *itr << " ";
  }
  std::cout << "vector size is : " << vec.size() << std::endl;
  std::cout << "vector capacity is : " << vec.capacity() << std::endl;
  std::cout << "\nPush After\n";
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.push_back(5);
  for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
    std::cout << *itr << " ";
  }
  try {
    std::cout << "\nFind the vector " << std::endl;
    std::cout << easyfind(vec, 1) << std::endl;
    std::cout << "\nFind the vector " << std::endl;
    std::cout << easyfind(vec, 0) << std::endl;

  } catch (const std::runtime_error& e) {
    std::cerr << e.what() << '\n';
  }
  std::cout << "Vector Clear \n";
  vec.clear();
  std::cout << "Vector is Empty?  : " << vec.empty() << std::endl;
  std::cout << "Vector Max_size   : " << vec.max_size() << std::endl;
  std::cout << "Vector capacity :   " << vec.capacity() << std::endl;
  std::cout << "Vector capacity resize : 40 " << std::endl;
  vec.resize(40);
  std::cout << "Vector capacity :   " << vec.capacity() << std::endl;
  return 0;
}
