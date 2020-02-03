#include <iostream>

using namespace std;

int main()
{
    int Ccapital,Csmall=0;
    string Word;
    cin>>Word;
    for(int i=0; i<Word.size(); i++)
    {
        if (Word[i]>='a' && Word[i]<='z')
            Csmall++;
    }
    Ccapital = Word.size() - Csmall;


    if(Ccapital > Csmall)
    {
        for(int i=0; i<Word.size(); i++)
        {
            if (Word[i]>='a' && Word[i]<='z')
            {
                Word[i]= char((Word[i]-'a')+'A');
            }
            cout<<Word[i];
        }
    }
    else
    {
        for(int i=0; i<Word.size(); i++)
        {
            if (Word[i]>='A' && Word[i]<='Z')
            {
                Word[i]= char((Word[i]-'A')+'a');
            }
            cout<<Word[i];
        }
    }


    return 0;
}


