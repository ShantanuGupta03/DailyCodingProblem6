#include <iostream>
#include <cstdlib>
using namespace std;

struct Node{
int data;
Node* npx;
}*head;

class xor_list{
public:
    Node* XOR(struct Node *a, struct Node *b );
    void insert(struct Node **head_ref, int data);
    void display(struct Node* head);
    xor_list(){
    head=NULL;
    }
};
int main(){
xor_list xl;
int choice, item;
while(1){
    cout<<"\n--------------"<<endl;
    cout<<"Operations on XOR Linked List"<<endl;
    cout<<"\n--------------"<<endl;
    cout<<"1. Insert new element at First"<<endl;
    cout<<"2. Display List"<<endl;
    cout<<"3. Quit"<<endl;
    for (long i=0; i<100000000; i++);
    cout<"Enter your choice: ";
    cin>>choice;
    switch(choice){
case 1:
    cout<<"Enter value to be inserted: ";
    cin>>item;
    xl.insert(&head, item);
    break;
case 2:
    xl.display(&head);
    break;
case 3:
    exit(1);
    break;
default:
    cout<<"Wrong Choice :/"<<endl;
    }
}
return 0;
}
Node* xor_list::XOR(struct Node *a, struct Node *b){
return (node*)((unsigned int)(a) ^ (unsigned int)(b));
}

Node* xor_list::insert(struct Node **head, int data){
Node *new_node=new (struct node);
new_node->data = data;
new_node->npx= XOR(*head_ref, NULL);
if(*head_ref!= NULL) {
    Node *next=XOR((*head_ref)->npx, NULL);
    (*head_ref)->npx = XOR(new_node, next);
}
*head_ref=new_node;
}

void xor_list::display(struct node *head)
{
   Node *curr = head;
    Node *prev = NULL;
    Node *next;
    cout<<"Elements of XOR Linked List: "<<endl;
    while (curr != NULL)
    {
        cout<<curr->data<<" ";
        next = XOR (prev, curr->npx);
        prev = curr;
        curr = next;
    }
cout<<endl;
}
