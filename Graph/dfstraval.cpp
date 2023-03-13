 #include<bits/stdc++.h>
 
using namespace std;

int main()
{
     
    cout << " DFS Traversal on a Graph \n\n";

     
    int graph[10][10], i, j, k, n, e, top, vec, stac[10], visit[10], visited[10];

    cout << "Enter the number of vertices in the Graph: ";
    cin >> n;
    cout << "\nEnter the number of edges in the Graph : ";
    cin >> e;
    
for (k = 1; k <= e; k++)
    {
         cout <<"Start edges:";
         cin>>i;
         cout << "End edges:";
         cin>>j;
        graph[i][j] = 1;
    }

    cout << "\nEnter the initial vertex of the graph: ";
    cin >> vec;
    cout << "\nThe DFS traversal on the given graph is : \n";
    cout << vec << " ";

     
    visited[vec] = 1;

    k = 1;

     
    while (k < n)
    {
        for (j = n; j >= 1; j--)
        {
            if (graph[vec][j] != 0 && visited[j] != 1 && visit[j] != 1)
            {
                visit[j] = 1;

                  stac[top] = j;
                top++;
            }
        }

         vec = stac[--top];
        cout << vec << " ";
        k++;

         
        visit[vec] = 0;

       
        visited[vec] = 1;
    }

        cout << "\n\n\n";

    return 0;
}
