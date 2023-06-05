#include<iostream>
using namespace std;
int main()
{
    int digits=0;
    int alpha=0;
    int sp_char=0;
    int other=0;
    char ch;
    cout<<"Enter the characters:";
    ch=cin.get();
    while(ch!='$'){
        if (ch >='0' and ch<='9')
        {
            digits++;
        }
        else if ((ch >='a' and ch<='z') or (ch >='A' and ch<='Z'))
        {
            alpha++;
        }
        else if (ch == ' ' or ch =='\n' or ch =='\t')
        {
            sp_char++;
        }
        else{
            other++;
        }  
        ch=cin.get();
    }
    cout<<"digits:"<<digits<<endl;
    cout<<"alphabets:"<<alpha<<endl;
    cout<<"special Character:"<<sp_char<<endl;
    cout<<"other:"<<other<<endl;
    return 0;
}
