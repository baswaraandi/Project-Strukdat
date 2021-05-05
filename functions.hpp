#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>

// CASE 1 : lINKED lIST

struct node{
  std::string data;
  node *next;
};
typedef node* pointer;
typedef pointer list;
  
void traversal(list head){
  pointer curr = head;
  while(curr != nullptr){
    std::cout << curr->data << " ";
    curr = curr -> next;
  }
  std::cout << '\n';
}

void new_element(list &pBaru, std::string Data){
  pBaru = new node;
  pBaru->data = Data;
  pBaru->next = nullptr;
}

void insert_last(list &head, std::string isi){
   pointer pBaru;
   new_element(pBaru, isi);
   pointer curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr ->next = pBaru;
}

void search(list& head, list& pBantu, std::string x) 
{ 
    pBantu = head;
    while (pBantu != nullptr) 
    { 
        if (pBantu->data == x) {
            break;
        }
        pBantu = pBantu->next; 
    } 
} 

void delete_by_key(list& head, list& p_delete, std::string key){
  search(head, p_delete, key);
    if (head == nullptr || p_delete == nullptr) {
      std::cout << "Kurma yang dicari tidak ditemukan!\n\n";
    } else {
        if (p_delete == head) {
          head = head->next;
          p_delete->next = nullptr;
        } else if (p_delete->next == nullptr) {
          pointer pre = head;
          while (pre->next != p_delete) {
            pre = pre->next;
          }
          pre->next = nullptr;
        } else {
          pointer pre = head;
          while (pre->next != p_delete) {
            pre = pre->next;
          }
          pre->next = p_delete->next;
          p_delete->next = nullptr;
        }
        delete p_delete;
    }
}

// CASE 2 : Stack

struct Node{
  int data;
  Node *next;
};

typedef Node *pNode;
typedef pNode Stack;

Stack createStack(Stack& top){
  top = nullptr;
  return top;
}

pNode new_element(int data){
  pNode newElement = new Node;
  newElement->data = data;
  newElement->next = nullptr;
  return newElement;
}

bool isEmpty(Stack top){
  return top == nullptr;
}

int peek(Stack top){
  if (isEmpty(top)){
    return 0;
  }else{
    return top->data;
  }
}

Stack push(Stack top, pNode newElement){
  if (isEmpty(top)){
    top = newElement;
  }else{
    newElement->next = top;
    top = newElement;
  }
  return top;
}

void pop(Stack &top){
  pNode target;
  if (isEmpty(top)){
    target = nullptr;
  }else if (top->next == nullptr){
    target = top;
    top = nullptr;
  }else{
    target = top;
    top = top->next;
    target->next = nullptr;
  }
  delete target;
}

bool deleteStack (Node *top){
  Node *curr;
  while (top != nullptr){
    curr = top->next;
    delete top;
    top = curr;
  }
  return 0;
}

// CASE 3 : PRIORTY QUEUE

struct Node2
    {
      int data;
      int priority;
      Node2 *next;
    };
typedef Node2* element;

struct Queue
    {
    element Head;
    element Tail;
    };
Queue Q;

void new_queue(Queue& Q){
    Q.Head = nullptr;
    Q.Tail = nullptr;
}

void createElement(element& newElement, int data, int priority){
    newElement = new Node2;
    newElement->data = data;
    newElement->priority = priority;
    newElement->next = nullptr;
}

int front(Queue Q){
    return Q.Head->data;
}

bool isEmpty(Queue Q){
    if(Q.Head == nullptr && Q.Tail == nullptr){
        return true;
    }else{
        return false;
    }
}
