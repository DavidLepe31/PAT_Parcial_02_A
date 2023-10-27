#include "Ejercicio03.h"
#include "Node.h"




int MinStack::getMin() {
    return minstack->value;
}
int MinStack::top() {
    
    if (datastack != nullptr) {
        return  datastack->value;
    }
    else {
        return 0;
    }
}


void MinStack::push(int value) {
    Node<int>* tmp = nullptr;
    tmp->value = value;
    // Agregar el valor a la pila de datos.
    if (headstack == nullptr) {
        headstack->value = value;
        headmin->value = value;
    }
    datastackpre = datastack;
    datastack->next = tmp;
    datastack = datastack->next;
    if (tmp->value <= minstack->value || minstack==nullptr) {
        minstackprev = minstack;
        minstack->next = tmp;
        minstack = minstack->next;
    }

}

void MinStack::pop() {
    // Asegurarse de que las pilas no estén vacías.
    if (datastack!=nullptr) {
        // Si el valor que se va a eliminar es el valor mínimo, eliminarlo de la pila de seguimiento de mínimos.
        if (top() == getMin()) {
            minstack = minstackprev;
            minstack->next = nullptr;
        }

        // Eliminar el valor de la pila de datos.
        datastack = datastackpre;
        datastack->next = nullptr;
    }
}




