#include "Ejercicio02.h"
#include <vector>

int Ejercicio02::countStudents(std::vector<char>& students, std::vector<char>& sandwiches)
{
        int n = students.size();
        int i = 0;  // Índice de estudiantes
        int j = 0;  // Índice de sándwiches

        while (i < n) {
            if (students[i] == sandwiches[j]) {
                // El estudiante toma el sándwich
                i++;
                j++;
            }
            else {
                // El estudiante no prefiere el sándwich actual, lo dejamos en la pila
                j++;
            }

            if (j == n) {
                // Reiniciamos la pila de sándwiches si llegamos al final
                j = 0;
            }
        }

        return n - i;  // Estudiantes restantes que no pueden comer
    }


