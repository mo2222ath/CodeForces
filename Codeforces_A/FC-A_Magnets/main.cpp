#include <iostream>

using namespace std;

int main()
{
    int Ans=1,Num;
    string Mag1,Mag2;
    cin>>Num;
    cin>>Mag1;
    for(int i=1;i<Num;i++){
        cin>>Mag2;
        if(Mag1!=Mag2){
            Ans++;
            Mag1=Mag2;
        }
    }
    cout<<Ans<<endl;
    return 0;
}
