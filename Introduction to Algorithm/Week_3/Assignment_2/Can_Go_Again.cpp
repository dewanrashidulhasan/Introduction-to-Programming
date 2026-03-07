#include <bits/stdc++.h>
using namespace std;
using ll=long long;
const ll INF=LLONG_MAX/2;
class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

ll dis[1005];
vector<Edge> edge_list;
int n, e;

bool bellman_ford(int src)
{
    for (int i = 1; i <=n; i++)
        dis[i]=INF;
    dis[src]=0;
    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != INF && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    bool cycle = false;
    for (auto ed : edge_list)
    {
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if (dis[a] != INF && dis[a] + c < dis[b])
        {
            cycle = true;
            break;
        }
    }
    if (cycle)
        return true;
    else
        return false;
}
int main()
{
    cin >> n >> e;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }
    int src;
    cin>>src;
    int t;
    cin>>t;
    vector<int> query(t);
    for (int i = 0; i < t; i++)
        cin>>query[i];

    if(bellman_ford(src))
        cout<<"Negative Cycle Detected"<<endl;
    else
    {
        for (int i = 0; i < t; i++)
        {
            int d=query[i];
            if(dis[d]==INF)
            cout<<"Not Possible"<<endl;
            else cout<<dis[d]<<endl;
        }
        
    }
    

    return 0;
}