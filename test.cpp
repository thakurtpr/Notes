// Write a C++ program to create a queue, enqueue elements into it,
// and then dequeue and print the elements


#include<bits/stdc++.h>
using namespace std;

int main(){
    queue <int> keu;
    keu.push(45);
    keu.push(10);
    keu.push(20);
    keu.push(30);

    while (!keu.empty()) {
        cout << "Popped " << keu.front() << endl;
        keu.pop();
    }



    return 0 ;
}