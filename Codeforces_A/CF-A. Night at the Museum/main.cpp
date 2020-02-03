#include <iostream>

using namespace std;

int main()
{
    int Ans=0,coun;
    string name;
    cin>>name;
    for(int i=0;i<name.size()-1;i++){
        if(name[i]>name[i+1]){
            coun=name[i]-name[i+1];
            if(coun>13){coun=26-coun;Ans+=coun;}
            else{Ans+=coun;}
        }
        else{
            coun=(name[i+1]-name[i]);
            if(coun>13){coun=26-coun;Ans+=coun;}
            else{Ans+=coun;}
        }
    }

    cout << Ans << endl;
    return 0;
}
