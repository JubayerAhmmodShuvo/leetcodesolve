
#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
   
   list<float>mylist;
   list<float>::iterator it;
   mylist.push_back(1);
   mylist.push_back(11);
   mylist.push_back(111);
   mylist.push_front(1111);

    for(it=mylist.begin(); it!=mylist.end();it++){
      cout<<*it <<endl;
    }

    return 0;
}
 