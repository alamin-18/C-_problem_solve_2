#include <bits/stdc++.h>

using namespace std;



// bool same_or_not()

int main()
{
    stack<int>st;
    queue<int>que;
     int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        que.push(x);
    }
    // while (!st.empty()){
    //     // if(st.top()==newQue.front()){
    //     //     st.top();
        
    //     // } 
    //     cout << st.top() << endl;
    //     st.pop();
    //     // newQue.pop();
    // }
    if(st.size()==que.size()){
        queue<int>newQue;
        while (!que.empty()){
        newQue.push(que.front());
        que.pop();
     }
        while (!st.empty()){
        if(st.top()==newQue.front()){
        st.pop();
        newQue.pop();
        }
        
        }
        cout<<"YES"<<endl;
        }
    else{
        cout<<"NO"<<endl;
    }
   
   
    return 0;
}