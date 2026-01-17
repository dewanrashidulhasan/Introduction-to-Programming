#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next; 
    Node* prev; 
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
    
};
class queriesAgain
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    bool insertAtIndx(int indx,int val)
    {
        if (indx<0||indx>sz)
        {
            return false;
        }
        Node* newnode=new Node(val);
        if (indx==0)
        {
            if (head==NULL)
            {
                head=newnode;
                tail=newnode;
            }
            else
            {
                newnode->next=head;
                head->prev=newnode;
                head=newnode;
            }
            
        }
        else if (indx==sz)
        {
            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
        else
        {
            Node* temp = head;
            for (int i = 0; i < indx - 1; i++)
            {
                temp = temp->next;
            }

            Node* nxt = temp->next;
            temp->next = newnode;
            newnode->prev = temp;
            newnode->next = nxt;
            nxt->prev = newnode;
        }
        sz++;
        return true;
    }
    void printLeftToRight()
    {
        cout<<"L -> ";
        Node* temp=head;
        while (temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void printRightToLeft()
    {
        cout<<"R -> ";
        Node* temp=tail;
        while (temp!=NULL)
        {
            cout<<temp->val<<" ";
            temp=temp->prev;
        }
        cout<<endl;
    }
};
int main()
{
    int q;
    cin>>q;
    queriesAgain obj;
    while (q--)
    {
        int x,v;
        cin>>x>>v;
        if (!obj.insertAtIndx(x,v))
        {
            cout<<"Invalid"<<endl;
        }
        else
        {
            obj.printLeftToRight();
            obj.printRightToLeft();
        }
        
    }
    
    return 0;
}