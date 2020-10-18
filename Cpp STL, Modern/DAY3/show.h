// show.h
#pragma once
#include <iostream>

// show 함수 복사해 오세요..
template<typename T> void show(const T& v)
{
	for (auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl; // 개행
}

