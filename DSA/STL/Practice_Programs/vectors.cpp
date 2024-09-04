#include<bits/stdc++.h>

using namespace std ;

int main(){
    int max= INT_MIN;
    vector <int> data;
    data = {3,5,23,756,89,2,9,1,182};
    for ( int i =0;i<data.size();i++){
        if (data[i]>max){
            max=data[i];
        }
    }
    cout<<"max element is :="<<max<<endl;

    return 0 ;
}