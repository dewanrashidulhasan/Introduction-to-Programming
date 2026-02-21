#include<bits/stdc++.h>
using namespace std;
int main()
{
    // priority_queue<int> pq;//max priority queue
    // priority_queue<int,vector<int>,greater<int>> pq;//min priority queue
    // pq.push(10);
    // pq.push(20);
    // pq.push(30);
    // cout<<pq.top()<<endl;

    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;//min priority queue
    pq.push({10,1});
    pq.push({5,2});
    cout<<pq.top().first<<" "<<pq.top().second<<endl;
    return 0;
}