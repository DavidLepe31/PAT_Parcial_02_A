#include "Ejercicio01.h"

Node<char>* Ejercicio01::remove(Node<char>* head, char value)
{
    Node<char>* headf = head;
    Node<char>* tmp = head;
    Node<char>* tmp2 = headf;
    if (head == nullprtr) {
        return nullptr;
    }

    while (tmp && tmp->next) {
        if (headf->value == value) {
            headf = headf->next;
            tmp = headf;
        }
        tmp2 = tmp->next;
        while (tmp2 && tmp2->value == value) {
            tmp2 = tmp2->next;
        }
        tmp->next = tmp2;
        tmp = tmp->next;
    }
    if (headf->next && headf->value == value && headf->next->value != value) {
        headf = headf->next;
        return headf;
    }
    if (headf->value == value) {
        return nullptr;
    }

    return headf;
    return nullptr;
}
