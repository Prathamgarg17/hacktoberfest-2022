#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string str)
    {
        stack<int> s;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>47&&str[i]<=57)
            {
                s.push(str[i]-'0');
            }
            else
            {   int b=s.top();
                s.pop();
                int a = s.top();
                s.pop();
                switch(str[i])
                {
                    case '+': s.push(a+b);
                            break;
                    case '-': s.push(a-b);
                            break;
                    case '*': s.push(a*b);
                            break;
                    case '/': s.push(a/b);
                            break;
                }
            }
        }
        return s.top();
    
    }
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
	    cin>>s;
    cout<<evaluatePostfix(s)<<endl;
    }
return 0;
}
