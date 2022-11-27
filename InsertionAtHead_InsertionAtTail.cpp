#include <bits/stdc++.h>
using namespace std;

class doublyNode
{
public:
    int value;
    doublyNode *prev;
    doublyNode *next;
    doublyNode(int val)
    {
        value = val;
        prev = NULL;
        next = NULL;
    }
};
void insertatTail(doublyNode *&head, int val)
{
    doublyNode *newnode = new doublyNode(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    doublyNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}
void insertatHead(doublyNode *&head, int val)
{
    doublyNode *newnode = new doublyNode(val);
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}
void display(doublyNode *n)
{
    while (n != NULL)
    {
        if((n->value)%2==0){
            n->value=-1;

        }
         cout << n->value << " ";

        if (n->next != NULL)
        {
            cout << "->";
        }
        n = n->next;
    }
}
void displayReverse(doublyNode* &head){
    doublyNode *temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    while(temp!=NULL){
        cout<<temp->value;
       if(temp->prev!=NULL) cout<<"---->";
       temp = temp->prev;


    }
}

int countoflength(doublyNode *&head)
{
    int count = 0;
    doublyNode *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

int main()
{
    doublyNode *head = NULL;
    int value, pos;
    cout << "choice 1: InsertionatHead:" << endl
         << "choice 2: InsertionatTail:" << endl
         << "choice 3: Reverse linked list" << endl
         << "choice 0: Exit"
         << endl
         << endl;
    cout << "Next choice:";
    int choice;
    cin >> choice;
    while (choice != 0)
    {

        switch (choice)
        {
        case 1:
            cout << "Enter the value:";
            cin >> value;
            insertatHead(head, value);

            break;
        case 2:
            cout << "Enter the value:";
            cin >> value;
            insertatTail(head, value);
            break;
        case 3:
        displayReverse(head);
        break;

        default:
            break;
        }

        cout << "Next choice:";
        cin >> choice;
    }
    display(head);
    cout << endl;
    cout << "length :" << countoflength(head) << endl;
    return 0;
}
