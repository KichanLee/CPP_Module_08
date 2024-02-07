
#include "easyfind.hpp"

int main() {
  std::vector<int> vec(4);

  std::vector<int> vec(4, 10);  // 예를 들어, 모든 요소를 10으로 초기화

  // vec의 모든 요소를 출력하기 위해 정확히 반복자를 사용합니다.
  for (std::vector<int>::iterator itr = vec.begin(); itr != vec.end(); ++itr) {
    std::cout << *itr << std::endl;
  }

  // template <typename T>
  //     for (typename T::iterator itr = t1.begin(); itr != vec.end(); ++i)
  //         std::cout
  //     << vec[i] << std::endl;
  // vec.push_back(1);
  // vec.push_back(2);
  // vec.push_back(3);
  // vec.push_back(4);
  // vec.push_back(5);

  // try {
  //   // easyfind 함수를 호출합니다.
  //   int result = easyfind(vec, 1);
  //   std::cout << "Found: " << result << std::endl;
  // } catch (const std::runtime_error& e) {
  //   // std::exception 대신 std::runtime_error를 사용하고 참조로 잡습니다.
  //   std::cout << e.what() << std::endl;
  // }

  return 0;
}

// #include "easyfind.hpp"

// int main() {
//   std::vector<int> vec;

//   vec.push_back(1);
//   vec.push_back(2);
//   vec.push_back(3);
//   vec.push_back(4);
//   vec.push_back(5);

//   ::easyfind(vec, 6);

//   try {
//   } catch (std::exception e) {
//     std::cout << e.what() << std::endl;
//   }

//   return (0);
// }