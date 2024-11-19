/*
Нужно реализовать функцию, которая удаляет все дубликаты, а не только подряд идущие, из std::vector.
*/

#include "Task1.h"

int main()
{
    std::vector<int> v1{ 1, 1, 2, 5, 6, 1, 2, 4 };      // Начальный вектор

    std::cout << "Before erasing of duplicates:\n";
    printContainer(v1);

    // Алгоритм удаления дубликатов с сохранением исходного порядка
    std::unordered_set<int> s1{ v1.begin(), v1.end() };     // Создание множества (set) без дубликатов
    std::vector<int> v2{ s1.begin(), s1.end() };      // Преобразование множества в новый вектор
    
    std::cout << "\nAfter erasing of duplicates without sorting:\n";
    printContainer(v2);
    
    // Алгоритм удаления дубликатов после сортировки
    std::vector<int> v3{ v1.begin(), v1.end() };    // Создание нового вектора
    std::sort(v3.begin(), v3.end());    // Сортировка
    std::vector<int>::iterator it{ std::unique(v3.begin(), v3.end()) }; // Перемещение дубликатов в отсортированном векторе
    v3.erase(it, v3.end()); // Удаление дубликатов, перемещенных в конец вектора

    std::cout << "\nAfter erasing of duplicates with sorting:\n";
    printContainer(v3);

    return EXIT_SUCCESS;
}

