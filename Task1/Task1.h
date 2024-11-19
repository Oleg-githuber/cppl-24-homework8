#pragma once

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

// Вывод в консоль контейнера
template<typename T>
void printContainer(const T& cont)
{
	auto it{ cont.begin() };
	while (it != cont.end())
	{
		std::cout << *(it++) << ' ';
	}
	std::cout << '\n';
}
