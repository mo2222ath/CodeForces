#include <iostream>

using namespace std;

int main()
{
    int num,Ans=0,i,j;
    cin>>num;
    int team[num*2];
    for(i=0; i<num*2; i++)
    {
        cin>>team[i];
    }
    for(i=0; i<num*2; i+=2)
    {
        for(j=1; j<num*2; j+=2)
        {
            if(team[i]==team[j])
                Ans++;
        }
    }

    cout << Ans << endl;
    return 0;
}
