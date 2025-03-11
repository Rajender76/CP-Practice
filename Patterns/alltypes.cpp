#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //Type -2

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //Type-3

//     1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 

int n;
cin>>n;
int k=1;
for(int i=0;i<n;i++)
{
    k=1;
    for(int j=0;j<=i;j++)
    {
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
}

// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 

for(int i=0;i<n;i++)
    {
        //k=1;
        for(int j=0;j<=i;j++)
        {
            cout<<i+1<<" ";
           // k++;
        }
        cout<<endl;
    }

    // * * * * * 
    // * * * * 
    // * * * 
    // * * 
    // * 

    for(int i=n;i>=0;i--)
    {
        //k=1;
        for(int j=1;j<=i;j++)
        {
            cout<<"*"<<" ";
           
        }
        cout<<endl;
    }

//       * 
//     * * * 
//    * * * * * 
//   * * * * * * * 
//  * * * * * * * * * 

for(int i=0;i<n;i++)
{
    //k=1;
    for(int k=i;k<n-1;k++)
    {
        cout<<" ";
    }
    for(int j=1;j<=2*i+1;j++)
    {
        cout<<"*"<<" ";
       
    }
    cout<<endl;
}

// * * * * * * * * * 
//  * * * * * * * 
//  * * * * * 
//   * * * 
//    * 
for(int i=n-1;i>=0;i--)
{
    //k=1;
    for(int k=i;k<n-1;k++)
    {
        cout<<" ";
    }
    for(int j=1;j<=2*i+1;j++)
    {
        cout<<"*"<<" ";
       
    }
    cout<<endl;
}

// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
int k=1;

    for(int i=1;i<=n;i++)
    {
        //k=1;
        if(i%2==0)
            k=0;
        else
            k=1;
       
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k=!k;
           
        }
        cout<<endl;
    }

// 1      1
// 12    21
// 123  321
// 12344321

    for(int i=1;i<=n;i++)
    {
       
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
// ABCDE
// ABCD
// ABC
// AB
// A
for(int i=1;i<=n;i++)
    {
        char k='A';
        for(int j=i;j<=n;j++)
        {
            cout<<k;
            k++;
        }
        
        cout<<endl;
    }
//     A
//     ABA
//    ABCBA
//   ABCDCBA

    for(int i=1;i<=n;i++)
    {
         
        for(int j=1;j<=(n-i);j++)
            cout<<" ";
        char k='A';
        for(int j=1;j<=i;j++)
        {
            cout<<k;
            k++;
        }
        k--;
        k--;
        for(int j=1;j<=i-1;j++)
        {
            cout<<k;
            k--;
        } 
        cout<<endl;
    }
// E
// DE
// CDE
// BCDE
// ABCDE
    for(int i=1;i<=n;i++)
    {
         
        char k='A'+n-i;
        for(int j=1;j<=i;j++)
        {
            cout<<k;
            k++;
        }
        
        cout<<endl;
    }

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********
    int temp=n;

    for(int i=1;i<=2*n;i++)
    {
        if(i<=n)
        {
            for(int j=i;j<=n;j++)
            {
                cout<<"*";
                //k++;
            }
            for(int j=1;j<=2*(i-1);j++)
            {
                cout<<" ";
            }
            for(int j=i;j<=n;j++)
            {
                cout<<"*";
            }
        }
        else
        {
            temp=i-n;
            for(int j=1;j<=temp;j++)
            {
                cout<<"*";
                //k++;
            }
            for(int j=2*(n-temp);j>0;j--)
            {
                cout<<" ";
            }
            for(int j=1;j<=temp;j++)
            {
                cout<<"*";
            }
            
        }
        
        cout<<endl;
    }
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

    for(int i=0;i<2*n-1;i++)
    {
         for(int j=0;j<2*n-1;j++)
            {
                int left=j;
                int right=2*n-2-j;
                int top=i;
                int bottom=2*n-i-2;
                int x=min(min(left,right),min(top,bottom));
                cout<<n-x;
                //k++;
            }
            cout<<endl;
        }



}
