#include <iostream>
#include <string>
using namespace std;

class Personne{
    protected:
        string nom;
        string prenom;
        string date_naissance;
    public:

    Personne(string n,string p,string d):nom("oussama"),prenom("allouch"),date_naissance("26/03/2003")
    { }
    virtual void afficher(){
        cout<<"le nom est :"<<nom<<endl<<"le prenom : "<<prenom<<endl;
        cout<<"la date de naissance est : "<<date_naissance<<endl;
    }
};
class Employe : public Personne{
        protected:
            double salaire;
        public:
            Employe(string n,string p,string d,double s):Personne(n,p,d),salaire(s){}
            void afficher(){
            Personne::afficher();
            cout<<"le salaire est :"<<salaire<<"DH"<<endl;
            }       
};

class Chef : public Employe {
        protected:
            string service;
        public:
            Chef(string n,string p,string d,double s,string ser):Employe(n,p,d,s),service(ser){}
            void afficher(){
            Employe::afficher();
            cout<<"le service de ce Chef est :"<<service<<endl;
        }
};
class Directeur : public Chef{
        protected:
            string societe;
        public:
            Directeur(string n,string p,string d,double s,string ser,string soc):Chef(n,p,d,s,ser),societe(soc){}
            void afficher(){
            Chef::afficher();
            cout<<"la societe est :"<<societe<<endl;
        }
};

int main()
{
    Directeur directeur("oussama", "allouch", "26/03/2003", 15000, "R&D", "TechCorp");
    directeur.afficher();
    return 0;
}