#include <bits/stdc++.h>
using namespace std;

class Node
{
	public:
	int key;
	Node* next;
};

void push(Node** head_ref, int new_key)
{
	Node* new_node = new Node();
	new_node->key = new_key;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

bool search(Node* head, int x)
{
	Node* current = head; 
	while (current != NULL)
	{
		if (current->key == x)
			return true;
		current = current->next;
	}
	return false;
}

int main()
{

	Node* head = NULL;
	int x = 7;

	push(&head, 3);
	push(&head, 8);
	push(&head, 12);
	push(&head, 17);
	push(&head, 10);

	cout << "Apakah 7 ada di linked list? " << endl;
	search(head, 7)? cout<<"Ya" : cout<<"Tidak";
	
	return 0;
}

