#pragma once
class MinStack
{

private:
	struct Node {
		int element;
		int minimo;
		Node* next;

		Node(int value, int minimum, Node* nxt);
	};

	Node* head;

public:
	MinStack();

	void push(int value);

	void pop();

	int top();

	int getMin();
};

