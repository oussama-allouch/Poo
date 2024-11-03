#include <iostream>
#include <string>
using namespace std;

class DateHeure {
        private:
    string dateHeureStr;
    string jour;
    string mois;
    string annee;
    string heure;
    string minute;
        public:
    DateHeure(const string& dateHeureStr) : dateHeureStr(dateHeureStr) {}
    void extraireChamps() {
        jour = dateHeureStr.substr(0, 2);       
        mois = dateHeureStr.substr(2, 2);       
        annee = dateHeureStr.substr(4, 4);      
        heure = dateHeureStr.substr(8, 2);      
        minute = dateHeureStr.substr(10, 2);    
    }
    void afficherChamps() const {
        cout << "Jour   : " << jour << endl;
        cout << "Mois   : " << mois << endl;
        cout << "Annee  : " << annee << endl;
        cout << "Heure  : " << heure << endl;
        cout << "Minute : " << minute << endl;
    }
};

int main() {
    string dateHeureInput;
    cout << "Entrez la date et l'heure sous la forme JJMMAAAAHHNN (ex : 010920091123) : ";
    cin >> dateHeureInput;
    DateHeure dh(dateHeureInput);
    dh.extraireChamps();
    dh.afficherChamps();
    return 0;
}
