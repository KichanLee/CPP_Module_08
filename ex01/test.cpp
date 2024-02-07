#include <exception>
#include <iostream>
#include <string>
#include <vector>

template <typename T>
class easyfind {
 public:
  static int find(T& t1, int parameter) {
    for (auto itr = t1.begin(); itr != t1.end(); ++itr) {
      if (*itr == parameter) {
        return *itr;
      }
    }
    throw std::exception();  // C++ 표준 예외 사용, 메시지를 추가하려면
                             // std::runtime_error 등을 고려
  }
};

int main() {
  std::vector<int> vec;

  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  try {
    int found = easyfind<vec>::find(vec.begin(), 3);
    std::cout << "Found: " << found << std::endl;
  } catch (const std::exception& e) {
    std::cout << "Cannot find the parameter" << std::endl;
  }

  return 0;
}
