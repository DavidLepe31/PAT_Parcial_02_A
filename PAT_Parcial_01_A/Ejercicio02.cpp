#include "Ejercicio02.h"
#include <vector>

int Ejercicio02::countStudents(std::vector<char>& students, std::vector<char>& sandwiches)
{
    int studentsWithoutPreferredSandwich = 0;

    for (int i = 0; i < students.size(); ++i) {
        char preferredSandwich = students[i];
        bool foundPreferredSandwich = false;

        for (int j = 0; j < sandwiches.size(); ++j) {
            if (sandwiches[j] == preferredSandwich) {
                sandwiches.erase(sandwiches.begin() + j);
                foundPreferredSandwich = true;
                break;
            }
        }

        if (!foundPreferredSandwich) {
            studentsWithoutPreferredSandwich = students.size() - i;
            break;
        }
    }

    return studentsWithoutPreferredSandwich;
}; }
