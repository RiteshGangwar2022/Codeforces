#include<bits/stdc++.h>
using namespace std;

int main(){
    

    string str1,str2;
    cin>>str1>>str2;

    if(str1==str2){
        cout<<-1<<endl;
    }
    else{
        cout<<max(str1.size(),str2.size())<<endl;
    }
    return 0;
}