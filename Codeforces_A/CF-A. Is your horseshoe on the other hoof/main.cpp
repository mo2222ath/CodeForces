#include <iostream>

using namespace std;

int main()
{
    int shoes[4];
    int Ans=0;
    for(int i=0; i<4; i++)
    {
        cin>>shoes[i];
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(shoes[i]==shoes[j+1]){
                Ans+=1;}
                break;
        }
    }
    cout << Ans << endl;
    return 0;
}
