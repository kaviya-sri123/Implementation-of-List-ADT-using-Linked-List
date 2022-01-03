#include "list_header.h"
int main()
{
    List *l = new List();
    int ch;
    int a,tn,p;
    string na,tc;
    do
    {
        cout<<"\t==========MENU==========\n";
        cout<<"\t1.Insert at first\n";
        cout<<"\t2.Insert at last\n";
        cout<<"\t3.Insert by position\n";
        cout<<"\t4.Delete at first\n";
        cout<<"\t5.Delete at last\n";
        cout<<"\t6.Delete by position\n";
        cout<<"\t7.Search\n";
        cout<<"\t8.Display\n";
        cout<<"\t9.Exit\n";
        cout<<"\t========================\n";
        cout<<"\nEnter your choice : ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"\nEnter the Passenger Name : ";
                cin>>na;
                cout<<"Enter the Passenger Age : ";
                cin>>a;
                cout<<"Enter the ticket number : ";
                cin>>tn;
                cout<<"Enter the travelling class : ";
                cin>>tc;
                l->insertAtFirst(na,a,tn,tc);
                break;
            case 2:
                cout<<"\nEnter the Passenger Name : ";
                cin>>na;
                cout<<"Enter the Passenger Age : ";
                cin>>a;
                cout<<"Enter the ticket number : ";
                cin>>tn;
                cout<<"Enter the travelling class : ";
                cin>>tc;
                l->insertAtLast(na,a,tn,tc);
                break;
            case 3:
                cout<<"Enter the ticket number after which it must be inserted : ";
                cin>>p;
                cout<<"Enter the Passenger Name : ";
                cin>>na;
                cout<<"Enter the Passenger Age : ";
                cin>>a;
                cout<<"Enter the ticket number : ";
                cin>>tn;
                cout<<"Enter the travelling class : ";
                cin>>tc;
                l->insertByPos(na,a,tn,tc,p);
                break;
            case 4:
                l->deleteAtFirst();
                break;
            case 5:
                l->deleteAtLast();
                break;
            case 6:
                cout<<"Enter the Ticket Number to be deleted : ";
                cin>>p;
                l->deleteByPos(p);
                break;
            case 7:
                cout<<"Enter the Ticket Number to search : ";
                cin>>p;
                l->search(p);
                break;
            case 8:
                l->display();
                break;
            default:
                cout<<"Enter a valid choice.\n";
                break;
        }
    }while(ch != 9);
    return 0;
}