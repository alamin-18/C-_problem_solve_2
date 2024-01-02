#include <bits/stdc++.h>

using namespace std;



int main()
{
    queue<string>s;
   int t;
   cin>>t;
   while(t--){
    
    int cmd;
    cin>>cmd;
    if(cmd==0){
        string str;
        cin>>str;
        s.push(str);
    }
    
    else if(cmd==1){
        if(!s.empty()){
           cout<<s.front()<<endl;
            s.pop();
        }
        else{
            
             cout<<"Invalid"<<endl;
        }

    }
    // while (!s.empty())
    // {
    //     cout << s.front() << endl;
    //     s.pop();
    // }


   }
    return 0;
}