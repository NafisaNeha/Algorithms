#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cout << "Enter the number of vertices = " ;
    cin >> n ;
    cout << "Enter the number of Edges = ";
    cin >> m;

    if (n<m)
        cout << "Contains Cycle" << " ";
    else{
    vector<vector<int>> adjlist(n);
    vector<int> indeg(n);

    int count = 0;

    for (int i=0; i<m; i++)
    {
        int u,v;
        cin >> u >> v;
        adjlist[u].push_back(v);
        indeg[v]++;
    }

    queue <int> q;

    for (int i =0; i<n; i++)
    {
        if (indeg[i]==0)
            q.push(i);
    }

    while(!q.empty())
    {
        count++;

        int x = q.front();
        q.pop();
        cout << x << "";

        for(auto i : adjlist[x])
        {
            indeg[i]--;
            if (indeg[i]==0)
                q.push(i);
        }

    }
    }
}
