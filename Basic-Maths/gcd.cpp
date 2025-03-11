#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
    {
        while(a>0&&b>0)
        {
            if(a>b)
                a=a%b;
            else
                b=b%a;
        }
        if(a==0)
            return b;
        else
            return a;
    }
    vector<int> lcmAndGcd(int a, int b) {
        // code here
        int ans1=gcd(a,b);
        int lcm=(a*b)/ans1;
        vector<int>ans;
        ans.push_back(lcm);
        ans.push_back(ans1);
        return ans;
    }