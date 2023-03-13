#include<bits/stdc++.h>

using namespace std;
 
 class graph{
     protected:
     int n,x,y,nodes,edges;

     public:
     void input_details{
        cout << "Enter the number of vertex of the graph:";
          cin>>nodes;
          cout << "\n";
          cout << "Enter the number of edge of teh graph:";
          cin>> edges;
          cout << "\n";
          /*for(int i=0;i<edges;i++){
              cout <<"Enter the edge"<<edges[i+1];
              cout <<"start vertex:";
              cin>>x;
              cout << "end vertex:";
              cin>>y;
          }*/
     }    
 };
 
     

 class traversal : virtual public graph
{
	public:
		void create()
		{
			cout<<"\n\n traversal of the graph is:\n\n";
			input_details();
		}
		void display()
		{
			cout<<"\n\n BSF traversal of the graph:\n\n";
			input_details();
			 
		}
 int main(){
     traversal gh ;
	while(1)
	{
		 
        cout << "\n\t   Menu    \n    ";
         cout << "\n\n\t\t 1.Input New Graph";
         cout << "\n\n\t\t 2.Add a verres to the graph";
         cout << "\n\n\t\t 3.Add an edge to the graph";
         cout << "\n\n\t\t 4.Display Breadth first Traversal of graph";
         cout << "\n\n\t\t 5.display Depth first Traversal of  graph";
         cout << "\n\n\t\t 6.Exit";
         cout << "\n\n Enter your choice ";

		
		int ch;
		
		cin>>ch;
		switch(ch)
		{
			case 1:
				gh.create();
				break;
			case 2:
				gh.display();
				break;
			 
			case 3:

				goto out;
			default:
				cout<<"\n\n\t========> Invalid choice <========";
				break;
		}
	}
	out:
 
return 0;
 }