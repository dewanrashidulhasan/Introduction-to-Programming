#include<bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> pq;//max priority queue
    priority_queue<int,vector<int>,greater<int>> pq;//min priority queue
    pq.push(10);
    pq.push(20);
    pq.push(30);
    cout<<pq.top()<<endl;
    return 0;
}