#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
cin>>n;
int a[n];
int al= sizeof(a)/sizeof(a[0]);
for(int i=0; i<n; i++){
cin>>a[i];
}
int sum=0;
for(int i=0; i<n; i++){
sum+=a[i];
}
double avg = sum/al;


cout<<avg;
}
    
