#include <iostream>

using namespace std;

int main()
{
    int Ans=0;
    string sq;
    int calories[4];
    for(int i=0; i<4; i++)
        cin>>calories[i];

    cin>>sq;
    for(int i=0; i<sq.size(); i++)
    {
        if(sq[i]=='1')
        {
            Ans+=calories[0];
        }
        else if(sq[i]=='2')
        {
            Ans+=calories[1];
        }
        else if(sq[i]=='3')
        {
            Ans+=calories[2];
        }
        else if(sq[i]=='4')
        {
            Ans+=calories[3];
        }

    }
    cout<<Ans<<endl;
    return 0;
}
