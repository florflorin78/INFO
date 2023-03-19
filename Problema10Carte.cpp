//Scrieti o functie recursiva care determina elementul minim dintr-un vector cu n numere reale citite de la tastatura.
#include<iostream>
using namespace std;

int n, v[100], i;
int minv(int v[], int n);

int main() {
    cout<<"n="; cin>>n;
    for(i=1;i<=n;i++) cin>>v[i];
    cout<<"Elementul minim este "<<minv(v,n);;
}

int minv(int v[], int n) {
    if(n==1) return v[0];
    else {
        double minim = minv(v, n-1);
        if(v[n-1]<minim) return v[n-1];
        else return minim;
    }

}