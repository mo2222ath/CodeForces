#include <iostream>

using namespace std;

int main()
{
    int Ans=0,Num;
    cin>>Num;
    string stone;
    cin>>stone;

    for(int i=0; i<Num; i++)
    {
        if(stone[i]==stone[i+1])
            Ans++;
    }
    cout<<Ans<<endl;
    return 0;
}
