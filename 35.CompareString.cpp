#include<iostream>
#include<algorithm>
using namespace std;
bool compare(string a,string b){
    if (a.length()==b.length())
    {
        return a<b;
    }
    
    return a.length()<b.length();
}
int main(){
    int n;
    cin>>n;
    cin.get();

    string s[100];
    for(int i=0;i<n; i++){
        getline(cin,s[i]);
    }

    sort(s,s+n,compare);

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}
/*
#include<iostream>
using namespace std;
int main()
{
    string s="I am Ankit";
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s[i]<<":";
    }
    cout<<endl;
    for (auto c:s){
        cout<<c<<".";
    }    
    cout<<endl;

    
    return 0;
}
*/