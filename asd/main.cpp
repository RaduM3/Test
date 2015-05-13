#include <iostream>

using namespace std;
int v[100];
int main()
{int n,i,s,d;
cin>>n;
for(i=1;i<n;i++)
{s=0;
for(d=1;d<=i/2;d++)
    if(i%d==0)
    s=s+d;
if(s==i)
    cout<<i<<" ";
}
    return 0;
}
