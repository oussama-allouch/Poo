#include <iostream>
#include<string>
using namespace std;

class voiture {
    private:
        std::string marque;
        std::string modele;
        int annee;
        float kilometrage;
        float vitesse;
    public:
        voiture();
        voiture(string marq,string mod,int an,float kil,float vit);
        float accelerer(float valeur);
        float freiner(float valeur);
        float avancer(float distance);
        void afficherinfos();
        ~voiture();
};

    voiture::voiture():marque("BMW"),modele("Berline"),annee(2024),kilometrage(1000),vitesse(200){}

    voiture::voiture(string marq,string mod,int an,float kil,float vit):marque(marq),modele(mod),annee(an),kilometrage(kil),vitesse(vit){}

    float voiture::accelerer(float valeur){
    vitesse+=valeur;
    return vitesse;
    }

    float voiture::freiner(float valeur){
    vitesse-=valeur;
    return vitesse;
    }

    float voiture::avancer(float distance){
    kilometrage+=distance;
    return kilometrage;
    }

    voiture::~voiture(){
    cout<<"la voiture est détruite. "<<endl;
    }

    void voiture::afficherinfos(){
    cout<<"la marque de la voiture est :"<<marque<<endl;
    cout<<"le modèle de la voiture est :"<<modele<<endl;
    cout<<"l'annee de la voiture est :"<<annee<<endl;
    cout<<"le kilometrage de la voiture est :"<<kilometrage<<endl;
    cout<<"la vitesse de la voiture est :"<<vitesse<<endl;
 }

 int main()
{
    voiture v1;
    v1.afficherinfos();

    voiture v2("BMW","Berline",2022,1111,190);
    v2.afficherinfos();

    cout << "Après accélération : " << v2.accelerer(37) << " km/h" << endl;

    cout << "Après le freinage : " << v2.freiner(15) << "km/h"<< endl;

    cout << "le kilometrage devient :"<<v2.avancer(50)<<endl;


    return 0;
}

