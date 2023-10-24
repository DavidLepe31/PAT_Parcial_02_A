#include "Ejercicio02.h"
#include <vector>

int Ejercicio02::countStudents(std::vector<char>& students, std::vector<char>& sandwiches)
{
        int n = students.size();
        int i = 0;  // �ndice de estudiantes
        int j = 0;  // �ndice de s�ndwiches

        while (i < n) {
            if (students[i] == sandwiches[j]) {
                // El estudiante toma el s�ndwich
                i++;
                j++;
            }
            else {
                // El estudiante no prefiere el s�ndwich actual, lo dejamos en la pila
                j++;
            }

            if (j == n) {
                // Reiniciamos la pila de s�ndwiches si llegamos al final
                j = 0;
            }
        }

        return n - i;  // Estudiantes restantes que no pueden�comer
    }


