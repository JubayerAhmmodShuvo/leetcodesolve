//Given n email addresses of different domains, please send an email to the first address(in alphabetical order) of each domain. Please assume a function sendmail() to send the emails
//Input Array = ['ghi@hotmail.com', 'def@yahoo.com', 'ghi@gmail.com', 'abc@channelier.com', 'abc@hotmail.com', 'def@hotmail.com', 'abc@gmail.com', 'abc@yahoo.com', 'def@channelier.com','jkl@hotmail.com', 'ghi@yahoo.com', 'def@gmail.com'].
/*Expected Output - Below is the  order of address in which sendmail function is going to send mail.
                                abc@channelier.com
                                abc@yahoo.com
                                abc@gmail.com
                                abc@hotmail.com*/
#include <bits/stdc++.h>
using namespace std;

vector<string> sendMail(vector<string> mails) {
    map<string, set<string>> mp;

    for(int i=0; i<mails.size(); i++) {
        string s = mails[i];

        string domain = "";
        bool domainStarted = false;
        for(int j=0; j<s.size(); j++) {
            if(s[j] == '@') 
                domainStarted = true;
            if(domainStarted) 
                domain += s[j];
        }

        mp[domain].insert(s);
    }

    vector<string> ans;
    for(auto it : mp) 
        ans.push_back(*(it.second.begin()));

    return ans;

}
int main(){
   int n;
    cin>>n;
    vector<string> mails(n);
    for(int i=0;i<n;i++){
        cin>>mails[i];
    }
    vector<string> ans = sendMail(mails);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}
