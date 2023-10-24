#include "Ejercicio01.h"

Node<char>* Ejercicio01::remove(Node<char>* head, char value)
{
    //declaracion de apuntadores
    Node<char>* headf = head;
    Node<char>* tmp = head;
    Node<char>* tmp2 = headf;
    //comprobando que no este vacia
    if (head == nullptr) {
        return nullptr;
    }
    //recorriendo la lista enlazada original
    while (tmp && tmp->next) {
        //ingreando el nuevo head
        if (headf->value == value) {
            headf = headf->next;
            tmp = headf;
        }
        tmp2 = tmp->next;
        //recorriendo hasta encontrar un valor repetido
        while (tmp2 && tmp2->value == value) {
            tmp2 = tmp2->next;
        }
        //eliminando el nodo repetido
        tmp->next = tmp2;
        tmp = tmp->next;
    }
    //situando el headf en su lugar
    if (headf->next && headf->value == value && headf->next->value != value) {
        headf = headf->next;
        return headf;
    }
    //validando que no sea una lista igual en todos sos nudos
    if (headf->value == value) {
        return nullptr;
    }

    return headf;
    return nullptr;
}
