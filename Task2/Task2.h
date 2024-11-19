#pragma once

#include<iostream>
#include<set>
#include<vector>
#include<list>

// Вывод в консоль контейнера
template<typename T>
void print_container(const T& cont)
{
	auto it{ cont.begin() };
	while (it != cont.end())
	{
		std::cout << *(it++) << ' ';
	}
	std::cout << '\n';
}
