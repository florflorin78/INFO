//Scrieti o functie recursiva care are ca parametru un nr intreg n<300000 si returneaza 1 daca n este nr prim si 0 daca nu;
#include<iostream>
using namespace std;

int n, i=2;
int EstePrim(int n, int i);



int main() {
    cout<<"n="; cin>>n;
    if(EstePrim(n,i))
        // return 1;
        cout<<"Este prim";
    else 
        // return 0;
        cout<<"Nu este prim";
}

int EstePrim(int n, int i) {
    if(n%i==0) return 0;
    return EstePrim(n, i+1);
}