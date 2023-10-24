#include "Ejercicio02.h"
#include <vector>

int Ejercicio02::countStudents(std::vector<char>*& students, std::vector<char>*& sandwiches)
{
    int j = 0;
    while (i < students->size() && j < sandwiches->size()) {
        if (students->at(i) == sandwiches->at(j)) {
            students->erase(students->begin() + i);
            sandwiches->erase(sandwiches->begin() + j);
            i = 0;
            j = 0;
        }
        else {
            i++;
        }
    }
    return students->size();
}



