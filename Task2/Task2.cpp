/*
ужно реализовать шаблонную функцию, которая печатает содержимое контейнера.

Контейнер может быть любым:

std::set
std::vector
std::list
*/

#include "Task2.h"

int main()
{
    std::set<std::string> test_set = { "one", "two", "three", "four" };
    print_container(test_set); // four one three two. помните почему такой порядок? :)

    std::list<std::string> test_list = { "one", "two", "three", "four" };
    print_container(test_list); // one, two, three, four

    std::vector<std::string> test_vector = { "one", "two", "three", "four" };
    print_container(test_vector); // one, two, three, four

    return EXIT_SUCCESS;
}

