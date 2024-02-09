#ifndef __EASYFIND_HPP
#define __EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>

// easyfind 함수 템플릿 선언
template <typename T>
int easyfind(const T& t1, int parameter);

#include "easyfind.tpp"  // 템플릿 구현 포함

#endif
