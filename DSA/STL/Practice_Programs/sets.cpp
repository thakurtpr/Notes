#include<bits/stdc++.h>

using namespace std ;

int main(){

    set <int > sets;

    sets.insert(45);
    sets.insert(3);
    sets.insert(5);
    sets.insert(8);
    sets.insert(2);
    sets.insert(1);
    sets.insert(9);
    sets.insert(12);
    sets.insert(32);


    for(auto it = sets.begin();it !=sets.end();it++){
        cout<<*it<<endl;
    }
    return 0 ;
}