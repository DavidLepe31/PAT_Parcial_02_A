#include "Ejercicio03.h"
#include "Node.h"
#include<climits>

MinStack::MinStack() {

}

void MinStack::push(int value) {
    Node<int>* tmp = new Node<int>();
    tmp->value = value;
    tmp->next = headatos;
    // Agregar el valor a la pila de datos.
    if (headatos== nullptr) {
        headatos=tmp;
        headmin = tmp;
    }
    headatos = tmp;

    if (value <= headmin->value || headmin == nullptr) {
        Node<int>* tmp2 = new Node<int>();
        tmp2->value = value;
        tmp2->next = headmin;
        headmin = tmp2;
    }

}
void MinStack::pop() {
    if (headatos = nullptr) {
        return;
    }
    
        // Si el valor que se va a eliminar es el valor mínimo, eliminarlo de la pila de seguimiento de mínimos.
        if (top() == getMin()) {
            Node<int>* node = headmin;
            headmin = headmin->next;
            delete node;
        }

        Node<int>* tmpp = headatos;
        headatos = headatos->next;
        delete tmpp;
       
    
}



int MinStack::top() {

    return headatos->value;
}

int MinStack::getMin() {
    return headmin->value;
}









