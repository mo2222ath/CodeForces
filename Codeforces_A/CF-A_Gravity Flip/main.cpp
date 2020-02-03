#include <iostream>

using namespace std;


int main()
{
    int Coun;
    cin>>Coun;
    int Cobe[Coun];
    for (int i=0; i<Coun; i++)
        cin>>Cobe[i];
    for (int i=0; i<Coun; i++)
    {
        for(int j=0; j<Coun; j++)
        {
            if(Cobe[i]<Cobe[j])
                swap(Cobe[j],Cobe[i]);
        }
    }
    for (int i=0; i<Coun; i++)
        cout<<Cobe[i]<<" ";


    return 0;
}
