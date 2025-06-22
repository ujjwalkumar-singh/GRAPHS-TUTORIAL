#include<iostream>
#include<vector>
#include<list>
using namespace std;

vector<list<int>>graph;
//int v;//no of vertices
void add_edge(int src,int dest,bool bi_dir=true){
        graph[src].push_back(dest);
        if(bi_dir){
            graph[dest].push_back(src);
        }
}

void display(){
    for(int i=0;i<graph.size();i++){ 
        cout<<i<<" -> ";
        for(auto ele:graph[i]){
            cout<<ele<<" , ";
        }
        cout<<endl;
    }
}
 
int main(){
   int v,e;
   cout<<"enter no of vertices: ";
   cin>>v;
   graph.resize(v,list<int>());
   cout<<"enter no of edges: ";
   cin>>e;
   while(e>0){
    int s,d;
    cout<<"enter source and dest: ";
    cin>>s>>d;
    add_edge(s,d);
    e--;
   }
   cout<<"ujjwal";
   display();
  return 0;
}