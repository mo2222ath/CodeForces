#include <iostream>

using namespace std;

int main()
{
    cout<<int('a')<<endl;
    int same=0,Ans;
    string Name;
    cin>>Name;
    for(int i=0;i<Name.size();i++){
        for(int j=0;j<Name.size();j++){
            if(Name[i]==Name[j+i+2])
                same++;
        }
    }
    Ans=Name.size() - same;

    if((Ans%2)==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}
