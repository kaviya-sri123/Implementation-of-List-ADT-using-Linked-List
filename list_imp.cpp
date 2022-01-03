#include "list_header.h"
void List::insertAtFirst(string na,int a,int tn,string tc)
{
    Node *n = new Node();
    n->name = na;
    n->age = a;
    n->ticket_number = tn;
    n->travel_class = tc;
    n->next = NULL;
    if(head == NULL)
    {
        head = n;
    }
    else
    {
        n->next = head;
        head = n;
    }
    cout<<"\nPassenger details inserted at front.\n\n";
}
void List::insertAtLast(string na,int a,int tn,string tc)
{
    Node *n = new Node();
    n->name = na;
    n->age = a;
    n->ticket_number = tn;
    n->travel_class = tc;
    n->next = NULL;
    if(head == NULL)
    {
        head = n;
    }
    else
    {
        Node *temp = head;
        while(temp->next != NULL)
            temp = temp->next;
        temp->next = n;
    }
    cout<<"\nPassenger details inserted at last.\n\n";
}
void List::insertByPos(string na,int a,int tn,string tc,int after)
{
    Node *n = new Node();
    n->name = na;
    n->age = a;
    n->ticket_number = tn;
    n->travel_class = tc;
    n->next = NULL;
    if(head == NULL)
    {
        head = n;
    }
    else
    {
        Node *temp = head;
        int flag = 0;
        while(temp->ticket_number != after)
        {
            if(temp->next != NULL)
                temp = temp->next;
            else
                flag = 1;
        }
        if(flag == 1)
            cout<<"Position not found.\n";
        else
            n->next = temp->next;
            temp->next = n;
            cout<<"\nDetails inserted after Ticket Number "<<after<<"\n\n";
    }
}
void List::deleteAtFirst()
{
    if(head == NULL)
        cout<<"List is empty.\n";
    else
    {
        Node *temp = head;
        head = head->next;
        cout<<"\nFirst Node Deleted.\n\n";
        free(temp);
    }
}
void List::deleteAtLast()
{
    if(head == NULL)
        cout<<"List is empty.\n";
    else if(head->next == NULL)
        deleteAtFirst();
    else
    {
        Node *temp = head;
        Node *p;
        while(temp->next->next != NULL)
            temp = temp->next;
        p = temp->next;
        cout<<"\nLast Node Deleted.\n\n";
        temp->next = NULL;
        free(p);
    }
}
void List::deleteByPos(int tn)
{
    if(head == NULL)
        cout<<"List is empty.\n";
    else if(head->ticket_number == tn)
        deleteAtFirst();
    else
    {
        Node *curr = head;
        Node * prev = curr;
        while(curr->ticket_number != tn)
        {
            prev = curr;
            curr = curr->next;
            if(curr == NULL)
            {
                cout<<"\nTicket Number not found.\n\n";
                return;
            }
        }
        prev->next = curr->next;
        cout<<"\nDetails of Passenger "<<curr->name<<" deleted.\n\n";
        free(curr);
    }
}
void List::search(int tn)
{
    if(head == NULL)
        cout<<"List is empty.\n";
    else
    {
        Node *temp = head;
        int flag;
        while(temp != NULL)
        {
            if(temp->ticket_number == tn)
            {
                cout<<"\nPassenger found.\n\n";
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
            temp = temp->next;
        }
        if(flag == 1)
            cout<<"\nPassenger not found.\n\n";
    }
}
void List::display()
{
    if(head == NULL)
        cout<<"\nList is empty.\n\n";
    else
    {
        cout<<"\n=======PASSENGER DETAILS=======\n\n";
        Node *temp = head;
        while(temp!=NULL)
        {
            cout<<"Passenger Name : "<<temp->name<<endl;
            cout<<"Passenger Age : "<<temp->age<<endl;
            cout<<"Ticket Number : "<<temp->ticket_number<<endl;
            cout<<"Travel Class : "<<temp->travel_class<<"\n\n";
            temp = temp->next;
        }
        cout<<"===============================\n\n";
    }
}