#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int n;
  cout<<"The number of rows you want to print :\n";
  for(int i=0; i<=n; i++){
    for(int j=0; j<=i+1; j++)
       cout<<"*"<<" ";
    cout<<"\n";
  }
  
  return;
}