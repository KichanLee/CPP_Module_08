#ifndef __EASYFIND_TPP
#define __EASYFIND_TPP

// #include <stdexcept>

// template <typename T>
// int easyfind(const T& t1, int parameter) {
//   typename T::const_iterator itr = std::find(t1.begin(), t1.end(),
//   parameter); if (itr != t1.end()) {
//     return *itr;
//   }
//   throw std::runtime_error("Cannot Find the parameter");
// }

// template <typename T>
// int easyfind(T& t1, int parameter) {
//   for (typename T::iterator itr = t1.begin(); itr != t1.end(); ++itr) {
//     if (*itr == parameter) return (*itr);
//   }
//   return (throw std::runtime_error("Cannot Find the parameter"));
// }

template <typename T>
int easyfind(const T& t1, int parameter) {
  for (typename T::const_iterator itr = t1.begin(); itr != t1.end(); ++itr) {
    if (*itr == parameter) {
      return (*itr);
    }
  }
  throw std::runtime_error("parameter does not exist");
}

#endif