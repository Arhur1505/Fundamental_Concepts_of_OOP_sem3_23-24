#include "List.h"
#include <iostream>

using namespace std;


void init(slist * list)
{
  list->head = NULL;
}

void push_back(slist * list, char c)
{
  slistEl * p, * e;

  e = new slistEl;  
  e->next = NULL;   
  e->data = c;
  p = list->head;
  if( p )
  {
     while( p->next ) p = p->next;
     p->next = e;
  }
  else list->head = e;
}

slistEl * find(slist * list, char c)
{
  slistEl * p = list->head;
  while(p != NULL)
  {
  	if( p->data == c )
  	  break;
  	p = p->next;
  }
  
  return p;
}

void insert_after(slistEl * e, char c)
{
  slistEl *p;
  p = new slistEl;
  p->next = e->next;
  p->data = c;
  e->next = p;
}

void printl(slist * list)
{
  slistEl *p = list->head;
  cout << "Moja lista: <";
  while (p != NULL)
  {
    cout << p->data;
    p = p->next;
  }
  cout << ">" << endl;
}

