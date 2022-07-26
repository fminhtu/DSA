#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;

  Node(int value) {
    data = value;
    next = nullptr;
  }
};

class LinkedList {
private:
  Node *head;
  Node *tail;

public:
  LinkedList() {
    head = nullptr;
    tail = nullptr;
  }

  Node *getHead() { return head; }

  bool isEmpty() {
    if (head != nullptr) {
      return false;
    }

    return true;
  }

  void removeHead() {
    if (isEmpty() == false) {
      Node *node = head;
      head = head->next;
      delete node;
    }
  }

  void addHead(int value) {
    Node *newNode = new Node(value);

    if (isEmpty() == true) {
      head = newNode;
      tail = newNode;
    } else {
      newNode->next = head;
      head = newNode;
    }
  }

  void show() {
    Node *node = head;
    while (node != nullptr) {
      cout << node->data << " ";
      node = node->next;
    }
    cout << endl;
  }

  void connectTailWithHead() { tail->next = head; }

  ~LinkedList() {
    Node *node = head;
    while (head != tail) {
      removeHead();
    }

    if (node == head) {
      delete head;
      head = nullptr;
    }
  }
};