#include "Ejercicio03.h"
#include "Node.h"

MinStack::MinStack() {


}


int MinStack::getMin() {
    int s = 0;
    s = minstack->value;
    return s;
}
int MinStack::top() {
    
    if (datastack != nullptr) {
        int r=0;
        r = datastack->value;
        return r;
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




