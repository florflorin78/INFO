//Se citesc de la tastatura doua numere naturale a si b. Sa se scrie o functie recursiva care caluleaza catul si restul impartirii intregi a lui a la b, prin scaderi repetate
#include<iostream>
using namespace std;

int a, b, c=0, r=0;
int exp(int a, int b, int &c, int &r);

int main() {
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    
    exp(a,b,c,r);
    cout<<"Catul este "<<c;
    cout<<"Restul este "<<r;
}

int exp(int a, int b, int &c, int &r) {
    if(a<b) {
        c = 0;
        r = a;
    }
    return exp(a-b,b,c,r);
    c++;
}