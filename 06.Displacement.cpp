#include<iostream>
using namespace std;
int main() 
{
    char ch;
    cout<<"Enter the directions:";
    ch=cin.get();
    int x=0;
    int y=0;
    while (ch!='\n')
    {
        if(ch=='N' or ch=='n'){
            y++;
        }
        else if(ch=='S' or ch=='s'){
            y--;
        }
        else if(ch=='W' or ch=='w'){
            x--;
        }
        else if(ch=='E' or ch=='e'){
            x++;
        }
        else{
            cout<<"Enter the appropriate direction(N,S,W,E)\n";
        }
        ch=cin.get();
    }
    cout<<"Displacement:"<<x<<' '<<y<<endl;
    return 0;
}
