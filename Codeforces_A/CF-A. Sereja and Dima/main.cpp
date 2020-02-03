#include <iostream>

using namespace std;

int main()
{
    int s=0,d=0,Min,Num;
    cin>>Num;
    int card[Num];
    for(int i=0; i<Num; i++)
    {
        cin>>card[i];
    }
    for (int i=0; i<Num; i++)
    {
        for(int j=0; j<Num; j++)
        {
            if(card[i]<card[j])
                swap(card[j],card[i]);
        }
    }
    if(Num%2==0){
        for (int i=0; i<Num; i++){
            if(i%2!=0)
                s+=card[i];
            else
                d+=card[i];
        }
    }
    else
    {
        for (int i=0; i<Num; i++){
            if(i%2!=0)
                d+=card[i];
            else
                s+=card[i];
        }
    }
    cout<<s<<" "<<d<<endl;

    return 0;
}
