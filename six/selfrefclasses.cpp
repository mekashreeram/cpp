#include <iostream>

using namespace std;

class Node
{
public:
  int value;
  Node *next;
  Node(int val)
  {
    value = val;
    next = NULL;
  }
  ~Node()
  {
    delete next;
  }
};

class LinkedList
{
public:
  Node *head;
  LinkedList()
  {
    head = NULL;
  }
  ~LinkedList()
  {
    delete head;
  }
  void insert(int val)
  {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
  }
  void remove(int val)
  {
    if (head == NULL)
    {
      return;
    }
    if (head->value == val)
    {
      Node *temp = head;
      head = head->next;
      temp->next = NULL;
      delete (temp);
      return;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
      if (curr->next->value == val)
      {
        Node *temp = curr->next;
        curr->next = curr->next->next;
        delete (temp);
        return;
      }
      curr = curr->next;
    }
  }
  void print()
  {
    if (head == NULL)
    {
      cout << "No Elements to display" << endl;
    }
    Node *curr = head;
    while (curr != NULL)
    {
      cout << curr->value << " -> ";
      curr = curr->next;
    }
    cout << "NULL\n";
  }
};

int main()
{
  LinkedList list;
  list.insert(10);
  list.insert(20);
  list.insert(30);
  list.insert(40);
  list.print();
  list.remove(10);
  list.print();
  return 0;
}
