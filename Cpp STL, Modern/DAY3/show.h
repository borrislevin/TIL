// show.h
#pragma once
#include <iostream>

// show �Լ� ������ ������..
template<typename T> void show(const T& v)
{
	for (auto e : v)
		std::cout << e << ", ";

	std::cout << std::endl; // ����
}

