#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<int>a;
  int n, p, d, temp;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>temp;
    a.push_back(temp);
  }
  cin>>p>>d;
  while(p){
    if(d){
      temp = a[0];
      for(int i=0; i<n-1; i++){
        a[i] = a[i+1];
      }
      a[n-1] = temp;
    }
    else{
      temp = a[n-1];
      for(int i=n-1; i>0; i--){
        a[i] = a[i-1];
      }
      a[0] = temp;
    }
    p--;
  }
  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
  }
  return 0;
}