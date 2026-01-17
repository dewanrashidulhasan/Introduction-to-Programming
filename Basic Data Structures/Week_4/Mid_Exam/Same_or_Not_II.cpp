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
class myQueue
{
    public:
    Node* head=NULL;
    Node* tail=NULL;
    int sz=0;
    void push(int val)
    {
        Node* newnode=new Node(val);
        sz++;
        if (head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next=newnode;
        newnode->prev=tail;
        tail=newnode;
    }
    void pop()
    {
        if (head==NULL)
        {
            return;
        }
        Node* deletenode=head;
        head=head->next;
        delete deletenode;
        sz--;
        if (head==NULL)
        {
            tail=NULL;
        }
        else
        {
            head->prev=NULL;
        }
    }
    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0;
    }
};
class myStack
{
    public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    myStack st;
    myQueue q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }
    if (st.size()!=q.size())
    {
        cout<<"NO";
        return 0;
    }
    while (!st.empty())
    {
        if (st.top()!=q.front())
        {
            cout<<"NO";
            return 0;
        }
        
        st.pop();
        q.pop();
    }
    cout<<"YES";
    return 0;
}