//Se citeste de la tastatura un sir de cuvinte, apoi se citeste un cuvant. Sa se numere de cate ori apare cuvantul respectiv in sirul dat folosind o functie recursiva.
#include<iostream>
#include<cstring>
using namespace std;

char s[250], c;
int CautariCuvant(char s[], char c);

int main() {
    cout<<"Propozitie: "; cin.get(s, 250);
    cout<<"Cuvantu: ";  cin>>c;
    int nrr = CautariCuvant(s,c);
    cout<<"Cuv. apare de "<<nrr<" ori";

}

int CautariCuvant(char s[], char c) {
    if(s[0]=='\0') return 0;
    else if(strstr(s,c)!=NULL) return 1 + CautariCuvant(strstr(s,c)+strlen(c), c);
    else return CautariCuvant(s+1,c);
}