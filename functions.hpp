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
  
void traversal(list& head){
  pointer curr = head;
  while(curr != nullptr){
    std::cout << curr->data << "\n";
    curr = curr -> next;
  }
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

int jumlah_data(list& head) {
  pointer p_help = head;
  int jumlah = 0;
  while (p_help != nullptr) {
    p_help = p_help->next;
    jumlah++;
  }
  return jumlah;
}

// CASE 2 : Stack

struct Node_Stack{
  int data;
  Node_Stack *next;
};
typedef Node_Stack *pNode;
typedef pNode Stack;

Stack createStack(Stack top){
  top = nullptr;
  return top;
}

pNode new_element(int data){
  pNode newElement = new Node_Stack;
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

bool deleteStack(Node_Stack *top){
  Node_Stack *curr;
  while (top != nullptr){
    curr = top->next;
    delete top;
    top = curr;
  }
  return 0;
}

// CASE 3 : PRIORTY QUEUE

struct Element
    {
      int data;
      int priority;
      Element *next;
    };
    using ElementPtr = Element*;

struct Queue
    {
    ElementPtr head;
    ElementPtr tail;
    };

void new_queue(Queue &q) {
    q.head = nullptr;
    q.tail = nullptr;
}

void enqueue(Queue &q, int stock, int priority) {
  ElementPtr p_rev = nullptr;
  ElementPtr p_help = q.head;
  ElementPtr new_element = new Element;
  new_element->data = stock;
  new_element->priority = priority;
  new_element->next = nullptr;
  if (q.head == nullptr && q.tail == nullptr) 
  {
    q.head = new_element;
    q.tail = new_element;
  } 
  else 
  {
    while (new_element->priority <= p_help->priority) 
    {
      if (p_help->next == nullptr) 
      break;
      p_rev = p_help;
      p_help = p_help->next;
    }
    if (p_help == q.head && new_element->priority > p_help->priority)
    {
      new_element->next = p_help;
      q.head = new_element;
    }
    else if (p_help == q.tail && new_element->priority < p_help->priority)
    {
      p_help->next = new_element;
      q.tail = new_element;
    }
    else
    {
      p_rev->next = new_element;
      new_element->next = p_help;
    }
  }
}

int top (Queue &q) {
  return q.head->data;
}

void dequeue(Queue &q) {
  ElementPtr del_element;
  if (q.head == nullptr and q.tail == nullptr)
  {
    del_element = nullptr;
  }
  else if (q.head->next == nullptr)
  {
    del_element = q.head;
    q.head = nullptr;
    q.tail = nullptr;
  }
  else
  {
    del_element = q.head;
    q.head = q.head->next;
    del_element->next = nullptr;
  }
  delete del_element;
}

void print_queue(Queue &q) {
  ElementPtr p_help = q.head;
  if (q.head != nullptr && q.tail != nullptr)
  {
      do
      {
      std::cout << p_help->data << " : " << p_help->priority << std::endl;
      p_help = p_help->next;
      } while (p_help != nullptr);
  }
}