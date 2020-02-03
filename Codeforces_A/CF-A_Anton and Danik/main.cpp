#include <iostream>

using namespace std;

int NumGame,D=0,A=0;
char WhoWin;

int main()
{
    cin>>NumGame;
    for (int i=0;i<NumGame;i++){
        cin>>WhoWin;
        if(WhoWin=='D')
            D+=1;
        else
            A+=1;
    }
    if (D>A)
        cout<<"Danik"<<endl;
    else if (A>D){
        cout<<"Anton"<<endl;
    }
    else
        cout<< "Friendship"<<endl;

    return 0;
}
