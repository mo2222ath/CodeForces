#include <iostream>

using namespace std;

int NumProb,P,V,T,Ans=0;

int main()
{
    cin>>NumProb;
    for(int i=0; i<NumProb; i++)
    {
        cin>>P>>V>>T;
        Ans+=(P+V+T>=2);
    }
    cout<<Ans<<endl;

    return 0;
}
