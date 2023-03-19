#include<iostream>
using namespace std;

char x[50], y[50];
int anagrame(char x[50], char y[50]);

int main () {
    cin>>x; cin>>y;
    if(strlen(x)!=strlen(y))
        cout<<"Cele 2 siruri nu sunt anagrame";
    else 
        if(anagrame(x,y))
            cout<<"Cele 2 siruri sunt anagrame";
        else
            cout<<"Cele 2 siruri nu sunt anagrame";
}

int anagrame(char x[50], char y[50]) {
    char *p;
    if((strcmp(x,"")==0)&&(strcmp(y,"")==0)) return 1;
    else 
        p=strchr(y, x[0]);
        if(p) {
            strcpy(x,x+1);
            strcpy(p,p+1);
            return anagrame(x,y);
        }
        else return 0;

}