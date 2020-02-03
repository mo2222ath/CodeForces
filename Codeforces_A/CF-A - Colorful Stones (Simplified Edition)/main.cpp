#include <iostream>

using namespace std;

int main()
{
    int Ans=1;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<t.size();i++){
        if(s[Ans-1]==t[i]){
            Ans++;
        }
    }
    cout << Ans << endl;
    return 0;
}
