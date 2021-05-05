#include <iostream>
#include <string>
#include <windows.h>
#include <iomanip>

// CASE 1 : lINKED lIST

struct node{
    int data;
    node *next;
};
typedef node* pointer;
typedef pointer list;
  
void traversal(list head){
   pointer curr = head;
    while(curr != nullptr){
        std::cout << curr->data << ' ';
        curr = curr -> next;
    }
    std::cout << '\n';
}
void new_element(list &pBaru){
    pBaru = new node;
    std::cin>>pBaru->data;
    pBaru->next = nullptr;
}
void insert_first(list &head){
   pointer pBaru;
    new_element(pBaru);
    if(head ==nullptr){
        head = pBaru;
    }else{
        pBaru ->next = head;
        head = pBaru;
    }
}
void insert_last(list &head){
   pointer pBaru;
    new_element(pBaru);
   pointer curr = head;
    while(curr->next != nullptr){
        curr = curr->next;
    }
    curr ->next = pBaru;
}

void insert_between(list& head, int target){
    bool founditem = false;
   pointer prev;
   pointer curr = head;
    while (!founditem && curr != NULL){
        if(prev->data == target){
           pointer pBaru;
            new_element(pBaru);
            pBaru -> next = curr;
            prev -> next = pBaru;
            founditem = true;
        } else {
            prev = curr;
            curr = curr ->next;
        }
    }
    if(!founditem)
        std::cout << "Input Salah!" << '\n';
}

void delete_target(list head, int n){
   pointer target;
    if (head == nullptr) {
    target = nullptr;
    } else if (head->data == n) {
   pointer prev = head;
   pointer curr = head->next;
    head = curr;
    delete prev;
    } else {
   pointer prev, after, curr = head;
    while (curr->data != n && curr != nullptr) {
      prev = curr;
      curr = curr->next;
      after = curr->next;
    }
    target = curr;
    prev->next = after;
  }
  delete target;
}

// CASE 2 : Stack

struct Node{
  int data;
  Node *next;
};

typedef Node *pNode;
typedef pNode Stack;

Stack createStack(){
  Stack top = nullptr;
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

// For Main

void loading()
{
  system("cls");
  char a = 177, b = 219;
  std::cout << "LOADING\t";
  for (int i = 0; i <= 23; i++)
    std::cout << a;
    
  std::cout << "\r";
  std::cout << "\t";
  
  for (int i = 0; i <= 23; i++) {
    std::cout << b;
    Sleep(100);
  }
  system("cls");
}

void tampilan_1() {
  std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
  std::cout << "\t TOKO KURMA BAROKAH AL-SWAGGIYAH" << std::endl;
  std::cout << '=' << std::setw(48) << std::setfill('=') << '=' << std::endl;
  std::cout << "Daftar Kurma\n1. Kurma A\n2. Kurma B\n3. Kurma C" << std::endl;
  std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
  std::cout << "Daftar Menu\n1. Edit Data Kurma\n2. Cek Stock Kurma\n3. Penjualan Kurma" << std::endl;
  std::cout << '+' << std::setw(48) << std::setfill('-') << '+' << std::endl;
}