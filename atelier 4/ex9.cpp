#include <iostream>
using namespace std;

struct Element {
    int data;            
    Element* suivant;
};

class Liste {
private:
    Element* tete;       

public:
    Liste();
    void ajouterDebut(int valeur);
    void supprimerDebut();
    void afficher() const;
    ~Liste();
};

Liste::Liste():tete(nullptr) {}

void Liste::ajouterDebut(int valeur) {
        Element* nouveau = new Element;
        nouveau->data = valeur;         
        nouveau->suivant = tete;        
        tete = nouveau;                 
    }

void Liste::supprimerDebut() {
        if (tete == nullptr) { 
            cout << "La liste est deja vide." << endl;
            return;
        }
        Element* temp = tete;    
        tete = tete->suivant;    
        delete temp;             
    }

void Liste::afficher() const {
        Element* courant = tete; 
        while (courant != nullptr) {
            cout << courant->data << " ";
            courant = courant->suivant;
        }
        cout << endl;
    }

Liste::~Liste() {
        while (tete != nullptr) {
            supprimerDebut();
        }
    }
int main() {
    Liste liste;

    liste.ajouterDebut(10);
    liste.ajouterDebut(20);
    liste.ajouterDebut(30);
    cout << "Contenu de la liste apres ajout : ";
    liste.afficher();

    liste.supprimerDebut();
    cout << "Contenu de la liste apres suppression : ";
    liste.afficher();

    return 0;
}
