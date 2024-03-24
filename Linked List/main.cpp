#include <iostream>
using namespace std;

class Node
{
	public:
		char id;
		Node *next;
	
	Node()
	{
		next = NULL;
	}
};

class linkedlist
{
	public :
		Node *head;
		Node *tail;
		
	linkedlist()
		{
			head = tail = NULL;
		}
};


int main(int argc, char** argv) {
	
	linkedlist *list1 = new linkedlist();
	
	Node *node1 = new Node();
	node1->id = 'A';
	
	list1->head = node1;
	list1->tail = node1;
	
	Node *node2 = new Node();
	node2->id = 'B';
	
	list1->tail->next = node2;
	list1->tail = node2;
	
	cout << list1->head->id << endl;
	cout << list1->tail->id << endl;
	
	Node *nodeX = new Node();
	nodeX->id = 'x';
	
	Node *tmp = list1->head->next;
	list1->head = nodeX;
	nodeX->next = tmp;
	
	
	cout << list1->head->id << endl;
	cout << list1->tail->id;
	return 0;
	return 0;
}