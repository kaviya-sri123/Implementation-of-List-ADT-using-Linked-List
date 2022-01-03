#include <iostream>
#include <cstdlib>
using namespace std;
class Node
{
    public:
        int ticket_number,age;
        string name,travel_class;
        Node *next;
};
class List
{
    public:
        Node *head;
        void insertAtFirst(string na,int a,int tn,string tc);
        void insertAtLast(string na,int a,int tn,string tc);
        void insertByPos(string na,int a,int tn,string tc,int after);
        void deleteAtFirst();
        void deleteAtLast();
        void deleteByPos(int tn);
        void search(int tn);
        void display();
};