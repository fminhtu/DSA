#include <LinkedList.h>
#include <iostream>
using namespace std;

bool detectLoop(LinkedList &linkedlist) {
  Node *slowPointer = linkedlist.getHead();
  Node *fastPointer = linkedlist.getHead();

  while (slowPointer != nullptr && fastPointer != nullptr &&
         fastPointer->next != nullptr) {
    slowPointer = slowPointer->next;
    fastPointer = fastPointer->next->next;

    if (slowPointer == fastPointer) {
      cout << "Detect loop at value: " << slowPointer->data << endl;
      return true;
    }
  }

  return false;
}