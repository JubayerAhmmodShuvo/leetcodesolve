#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
      int n; 
    cin >> n;
    map<string,string> phonebook;
    for(int i=0; i<n;i++){
        string name;
        string number;
        cin >> name >> number;
        phonebook.insert(pair<string,string>(name,number));
    }
    string query;
    while (cin>>query){
        map<string,string>::iterator itr;
        itr=phonebook.find(query);
        if(itr == phonebook.end())
        cout << "Not found" << endl;
        else {
        cout << itr->first<<"="<<itr->second<<endl;
        }
    }
    return 0;
}