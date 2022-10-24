
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
   
   map<string, int>m;
   map<string, int>::iterator it;
  m["shuvo"]=11;
  m["novo"]=9;
   m.insert(make_pair("huvo", 1));
   it=m.begin();

   cout<< it->first<<endl;

   for(it=m.begin(); it!=m.end();it++){
     cout<<it->first << " " << it->second <<endl; }

    return 0;
}
 