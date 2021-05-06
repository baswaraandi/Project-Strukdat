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

struct Node1{
  int data;
  Node1 *next;
};
typedef Node1 *pNode1;
typedef pNode1 Stack1;

Stack1 createStack1(Stack1 top){
  top = nullptr;
  return top;
}

pNode1 new_element1(int data){
  pNode1 newElement = new Node1;
  newElement->data = data;
  newElement->next = nullptr;
  return newElement;
}

bool isEmpty1(Stack1 top){
  return top == nullptr;
}

int peek1(Stack1 top){
  if (isEmpty1(top)){
    return 0;
  }else{
    return top->data;
  }
}

Stack1 push1(Stack1 top, pNode1 newElement){
  if (isEmpty1(top)){
    top = newElement;
  }else{
    newElement->next = top;
    top = newElement;
  }
  return top;
}

void pop1(Stack1 &top){
  pNode1 target;
  if (isEmpty1(top)){
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

bool deleteStack1 (Node1 *top){
  Node1 *curr;
  while (top != nullptr){
    curr = top->next;
    delete top;
    top = curr;
  }
  return 0;
}

struct Node2{
  int data;
  Node2 *next;
};
typedef Node2 *pNode2;
typedef pNode2 Stack2;

Stack2 createStack2(Stack2 top){
  top = nullptr;
  return top;
}

pNode2 new_element2(int data){
  pNode2 newElement = new Node2;
  newElement->data = data;
  newElement->next = nullptr;
  return newElement;
}

bool isEmpty2(Stack2 top){
  return top == nullptr;
}

int peek2(Stack2 top){
  if (isEmpty2(top)){
    return 0;
  }else{
    return top->data;
  }
}

Stack2 push2(Stack2 top, pNode2 newElement){
  if (isEmpty2(top)){
    top = newElement;
  }else{
    newElement->next = top;
    top = newElement;
  }
  return top;
}

void pop2(Stack2 &top){
  pNode2 target;
  if (isEmpty2(top)){
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

bool deleteStack2(Node2 *top){
  Node2 *curr;
  while (top != nullptr){
    curr = top->next;
    delete top;
    top = curr;
  }
  return 0;
}

struct Node3{
  int data;
  Node3 *next;
};
typedef Node3 *pNode3;
typedef pNode3 Stack3;

Stack3 createStack3(Stack3 top){
  top = nullptr;
  return top;
}

pNode3 new_element3(int data){
  pNode3 newElement = new Node3;
  newElement->data = data;
  newElement->next = nullptr;
  return newElement;
}

bool isEmpty3(Stack3 top){
  return top == nullptr;
}

int peek3(Stack3 top){
  if (isEmpty3(top)){
    return 0;
  }else{
    return top->data;
  }
}

Stack3 push3(Stack3 top, pNode3 newElement){
  if (isEmpty3(top)){
    top = newElement;
  }else{
    newElement->next = top;
    top = newElement;
  }
  return top;
}

void pop3(Stack3 &top){
  pNode3 target;
  if (isEmpty3(top)){
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

bool deleteStack3(Node3 *top){
  Node3 *curr;
  while (top != nullptr){
    curr = top->next;
    delete top;
    top = curr;
  }
  return 0;
}

// CASE 3 : PRIORTY QUEUE

struct Node4
    {
      int data;
      int priority;
      Node4 *next;
    };
typedef Node4* element;

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
    newElement = new Node4;
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