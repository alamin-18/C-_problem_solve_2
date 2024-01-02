#include <bits/stdc++.h>

using namespace std;



int main()
{
    
    int t;
   cin>>t;
   while(t--){
    stack<char>s;
    string ss;
    cin>>ss;
    
    for(char c:ss){
        if(!s.empty() && c=='1' && s.top() == '0'){
            s.pop();
        }
        else{
            s.push(c);
        }
    }
    if(!s.empty()){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
   }
    return 0;
}