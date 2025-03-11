#include<bits/stdc++.h>
using namespace std;
int reverse(int x) {
    long long num = 0;
    int a = 0;
    while (x)
    {
        num = (x%10) + num * 10;
        x = x / 10;
    }
    return (num>INT_MAX||num<INT_MIN)?0:num;	
}
int main()
{
    cout<<reverse(1234);
}