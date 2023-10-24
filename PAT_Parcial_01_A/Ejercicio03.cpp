#include "Ejercicio03.h"

#include "Ejercicio03.h"

MinStack::MinStack() {
    // Constructor: No se necesita inicialización especial.
}

void MinStack::push(int value) {
    // Agregar el valor a la pila de datos.
    dataStack.push(value);

    // Actualizar la pila de seguimiento de valores mínimos.
    if (minStack.empty() || value <= minStack.top()) {
        minStack.push(value);
    }
}

void MinStack::pop() {
    // Asegurarse de que las pilas no estén vacías.
    if (!dataStack.empty()) {
        // Si el valor que se va a eliminar es el valor mínimo, eliminarlo de la pila de seguimiento de mínimos.
        if (dataStack.top() == minStack.top()) {
            minStack.pop();
        }

        // Eliminar el valor de la pila de datos.
        dataStack.pop();
    }
}

int MinStack::top() {
    // Obtener el elemento superior de la pila de datos.
    return dataStack.top();
}

int MinStack::getMin() {
    // Obtener el elemento superior de la pila de seguimiento de mínimos, que contiene el valor mínimo actual.
    return minStack.top();
}
