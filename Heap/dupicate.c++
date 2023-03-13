// CPP program for the above approach
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	Node* next;
	Node()
	{
		data = 0;
		next = NULL;
	}
};

/* Function to insert a node at
the beginning of the linked
* list */
void push(Node** head_ref, int new_data)
{
	
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off
	the new node */
	new_node->next = (*head_ref);

	/* move the head to point
	to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes
in a given linked list */
void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

// Function to remove duplicates
void removeDuplicatesElement(Node* head)
{
	unordered_map<int, bool> track;
	Node* temp = head;
	while (temp) {
		if (track.find(temp->data) == track.end()) {
			cout << temp->data << " ";
		}
		track[temp->data] = true;
		temp = temp->next;
	}
}

// Driver Code
int main()
{
	Node* head = NULL;

	/* Created linked list will be
	11->11->11->13->13->20 */
	push(&head, 40);
	push(&head, 40);
	push(&head, 40);
	push(&head, 18);
	push(&head, 160);
	push(&head, 85);

	cout << "Linked list before duplicate removal ";
	printList(head);

	cout << "\nLinked list after duplicate removal ";
	removeDuplicatesElement(head);

	return 0;
}

// This code is contributed by yashbeersingh42
