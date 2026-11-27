#include <cstddef>
#include <iostream>
#include <string>

typedef struct Node {
	int val;
	struct Node *next;
} Node;

Node *top = nullptr;
size_t size = 0;
void insert(int val) {
	Node *tmp = new Node;
	if (tmp == nullptr) {
		std::cout << "err";
	}
	tmp->val = val;
	tmp->next = top;
	top = tmp;
	size++;
}

int remove(int *val) {
	if (top == nullptr or size == 0) {
		std::cout << "stack empty";
	}
	Node *aux = top;
	*val = aux->val;
	top = aux->next;
	free(aux);
	size--;
	return 1;
}

void print() {
	if (top == nullptr or size == 0) {
		std::cout << "stack empty";
	}
	Node *curr = top;
	while (curr != nullptr) {
		std::cout << curr->val << "\n";
		curr = curr->next;
	}
}

int main() {
	int val;
	int ss = 0;
	insert(10);
	insert(20);
	insert(30);
	print();

	return 0;
}
