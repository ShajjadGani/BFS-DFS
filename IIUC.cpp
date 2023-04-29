#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
int visited[N];
vector<int> adj_set[N];

// void dfs (int node)
// {
//     cout<<node<<" ";
//     visited[node]=1;

//     for(auto aj: adj_set[node])
//     {
//         if(visited[aj]==0)
//             dfs(aj);
//     }
// }

void bfs(int node)
{
    queue<int> q;
    //cout<<node<<" ";
    visited[node]=1;
    q.push(node);

    while(!q.empty())
    {
        int head = q.front();
        q.pop();

        cout<<head<<" ";

        for(auto b: adj_set[head])
        {
            if(visited[b]==0)
            {
                visited[b]=1;
                q.push(b);
            }
        }
    }
}

int main()
{
    int n,e,i;
    cin>>n>>e;
    for(i =0;i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        adj_set[u].push_back(v);
        adj_set[v].push_back(u);
    }
    
    int src = 0;
    //dfs(src);
    bfs(src);
return 0;
}