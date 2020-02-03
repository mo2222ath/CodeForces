#include <iostream>

using namespace std;

int main()
{
    int k,r,c,Ans=0,k2;
    cin>>k>>r;
    k2=k;
    while (c!=0 && c!=r)
    {
        c=k%10;
        k+=k2;
        Ans++;
    }
    cout<<Ans<<endl;


    return 0;
}
