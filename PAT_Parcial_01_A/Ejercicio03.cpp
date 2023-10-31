#include "Ejercicio03.h"
#include <algorithm> 

MinStack::Node::Node(int value, int minimum, Node* nxt) { //constructor de nodo
	element = value;
	minimo = minimum;
	next = nxt;
}

MinStack::MinStack()
{
	head = nullptr;
}

void MinStack::push(int value)
{
	if (head == nullptr) {
		head = new Node(value, value, nullptr);
	}
	else {
		head = new Node(value, std::min(head->minimo, value), head);
	}
}

void MinStack::pop()
{
	if (head != nullptr) {
		Node* auxiliar = head;
		head = head->next;
		delete auxiliar;
	}
}

int MinStack::top()
{
	return head->element;
}

int MinStack::getMin()
{
	return head->minimo;
}








