#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next; 
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
    
};
void duplicate_val(Node* &head,bool &d_val)
{
    unordered_set<int> s;
    Node* temp = head;

    while (temp != NULL)
    {
        if (s.count(temp->val))
        {
            d_val = true;
            return;
        }
        s.insert(temp->val);
        temp = temp->next;
    }
}

int main()
{
    Node* head=new Node(2);
    Node* a=new Node(1);
    Node* b=new Node(5);
    Node* c=new Node(3);
    Node* d=new Node(4);
    Node* e=new Node(5);
    Node* f=new Node(9);
    bool d_val=false;
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    
    duplicate_val(head,d_val);
    if (d_val==false)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
    return 0;
}