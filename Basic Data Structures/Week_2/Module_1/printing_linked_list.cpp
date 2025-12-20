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
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    head->next=a;
    a->next=b;
    b->next=c;
    Node* tmp=head;
    // cout<<head->val<<" "<<head->next->val<<
    // " "<<head->next->next->val<<" "<<
    // head->next->next->next->val<<endl;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
    return 0;
}

//https://docs.google.com/document/d/1-qYaweNW-eoUbLaE5WApxBpHRqdD1VXTJSnnyAwMmT4/edit?tab=t.0#heading=h.eppwqc8hixnv