#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
void insertion_at_beginning(node* &head, int newdata)
{
    node*  newnode =new node();
    newnode->data = newdata;
    newnode->next=head;
    head =newnode;
}
void insertion_at_end(node* &head, int newdata)
{
    node * newnode = new node();
   newnode -> data = newdata;
   newnode -> next =nullptr;
   
   if(head == nullptr)
   {
        head = newnode;
        return;
   }
   
   node* last = head;
   while(last->next != nullptr)
   {
        last = last->next;
   }
    last->next = newnode;
}
void display(node* temp)
{
    while(temp!=nullptr)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout << "Null" << endl;
}
int main()
{
    node* head = nullptr;
    insertion_at_beginning(head,0);
    insertion_at_beginning(head,10);
    insertion_at_end(head,20);
    insertion_at_end(head,30);
    insertion_at_end(head,40);
    insertion_at_end(head,50);
    cout<<"Linked list \n ";
    display(head);
    return  0;
}