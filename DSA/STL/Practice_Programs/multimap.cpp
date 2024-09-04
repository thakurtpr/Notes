#include<bits/stdc++.h>

using namespace std ;

int main(){

    multimap <int ,int> mm;
    cout <<"Enter the size of the multimap "<<endl;
    int size;
    cin >> size;
    for(int i=0;i<size;i++){
        int key,value;
        cout<<"Enter the key value pair for the "<<i<<"th element"<<endl;
        cin>>key>>value;
        mm.insert({key,value});
    }
    for(auto it = mm.begin();it!= mm.end();it++){
        cout<<"key:="<<it->first<<"value:="<<it->second<<endl;
    }
}