#include <iostream>

using namespace std;


int I,J;
int BeautMatr[5][5];

int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>BeautMatr[i][j];
            if (BeautMatr[i][j]==1)
                I=i-2,J=j-2;
        }
    }
    if(I<0)
        I*=(-1);
    if(J<0)
        J*=(-1);

    cout<<I+J<<endl;
    return 0;
}
