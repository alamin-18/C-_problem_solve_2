#include <bits/stdc++.h>

using namespace std;


class myStact{
    public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
class myQuery{
    public:
    vector<int>v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        v.pop_back();
    }
    int front()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStact s;
    myQuery q;
    int n,m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.push(x);
    }

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    //  while (!q.empty())
    // {
    //     cout << q.front() << endl;
    //     q.pop();
    // }
    //  while (!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }
    if(s.size()==q.size()){
        myQuery newQ;
        while (!q.empty()){
        newQ.push(q.front());
        q.pop();
     }
    //   while (!newQ.empty())
    // {
    //     cout << newQ.front() << endl;
    //     newQ.pop();
    // }
    //  while (!s.empty())
    // {
    //     cout << s.top() << endl;
    //     s.pop();
    // }
        while (!s.empty()){
        if(s.top()!=newQ.front()){
        cout<<"NO"<<endl;
        return 0;
        }
        s.pop();
        newQ.pop();
        
        }
        cout<<"YES"<<endl;
        }
    else{
        cout<<"NO"<<endl;
    }
   
   
    return 0;
}