#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<bool> vec;
vector<vector<int>> g;

void bfsTraversal(int b)
{
     
    queue<int> q;

     
    q.push(b);

     
    vec[b] = true;

    cout << "\n\nThe BFS Traversal is:  ";

    while (!q.empty())
    {
        int a = q.front();
        q.pop();  

        for (auto k = g[a].begin(); k != g[a].end(); k++)
        {
            if (!vec[*k])
            {
                vec[*k] = true;
                q.push(*k);
            }
        }
        cout << a << "  ";
    }
}

void makeEdge(int a, int b)
{
    g[a].push_back(b);  
}

int main()
{
    
    cout << "  Breadth First Search Algorithm \n\n";

    

    int n, e;

    cout << "Enter the number of vertices: ";

    cin >> n;

    cout << "\n\nEnter the number of edges: ";

    cin >> e;

    vec.assign(n, false);
    g.assign(n, vector<int>());

    int a, b, i;

    cout << "Enter the edges with source and target vetex: \n ";

    for (i = 0; i < e; i++)
    {
         
        
             
        cout << "start vertes:\n";

        cin >> a ;
        cout << "End vertes:\n";
        cin>>b;
        
        makeEdge(a, b);
    }

    for (i = 0; i < n; i++)
    {
        
        if (!vec[i])
        {
            bfsTraversal(i);
        }
    }

    cout << "\n\n\n";

    return 0;
}
