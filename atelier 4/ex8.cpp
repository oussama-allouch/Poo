#include <iostream>
using namespace std;

class Fichier {
    private:
        char* P;
        int longueur;
    public:
        Fichier(int taille);
        ~Fichier();
        void creation();
        void remplit();
        void affiche();
};

Fichier::Fichier(int taille):longueur(taille),P(nullptr){}

void Fichier::creation(){
    P = new char[longueur];
    cout<<"Mermoire de "<<longueur<<" octets allouee."<<endl;
}
void Fichier::remplit(){
    for (int i = 0 ; i <= longueur; i++)
    {
        P[i] = 'A' + (i % 26);
    }
    cout<<"Mermoire remplie avec des valeurs  arbitraites."<<endl;
}
void Fichier::affiche() {
    cout<<"le contenu de la memoire est :";
    for (int i = 0; i <= longueur; i++)
    {
        cout<<P[i]<<"  ";
    }
    cout<<endl;
}
Fichier::~Fichier(){
    delete[] P;
    cout<<"la memoire liberee."<<endl;
}

int main(){

    Fichier* fichier = new Fichier(10);
    fichier -> creation();
    fichier -> remplit();
    fichier -> affiche();
    delete fichier;
    return 0;
}