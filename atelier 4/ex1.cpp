#include <iostream>
#include <string>
using namespace std;

class complex{
  private:
    float img;
    float reel;
  public:
    complex();
    complex(float im,float re);
    complex operator + (const complex& valeur) const;
    complex operator - (const complex& valeur) const;
    complex operator * (const complex& valeur) const;
    complex operator / (const complex& valeur) const;
    bool operator == (const complex& valeur) const;

    void afficher();
};
complex::complex():img(0),reel(0){}
complex::complex(float im,float re):img(im),reel(re){}
void complex::afficher(){
    cout<<reel<<"+ i"<<img<<endl;
}
complex complex::operator + (const complex& valeur) const {
        return complex (reel + valeur.reel,img + valeur.img);
}
complex complex::operator - (const complex& valeur) const {
        return complex (reel - valeur.reel , img - valeur.img);
}
complex complex::operator * (const complex& valeur) const{
        double new_reel = reel * valeur.reel - img *valeur.img;
        double new_img  = reel * valeur.img + valeur.reel * img;
        return complex(new_reel, new_img);
}
complex complex::operator / (const complex& valeur) const{
        double denominateur = valeur.img * valeur.img + valeur.reel * valeur.reel;
        double new_reel = (reel * valeur.reel + img * valeur.img) / denominateur;
        double new_img = (img * valeur.reel - reel * valeur.img) / denominateur;
        return complex(new_reel ,new_img);
}
bool complex::operator == (const complex& valeur) const {
        return (reel == valeur.reel && img == valeur.img);
}

int main(){
    float img1,img2,rel1,rel2;
    int choix;
    cout<<"entrer la premier partie reel du premier nombre :"<<endl;
    cin>>rel1;
    cout<<"entrer la deuxieme partie imaginaire du premier nombre :"<<endl;
    cin>>img1;
    cout<<"enter la premier partie reel du deuxieme nombre :"<<endl;
    cin>>rel2;
    cout<<"enter la deuxieme partie imaginaire du deuxieme nombre :"<<endl;
    cin>>img2;
    complex obj1(rel1,img1);
    complex obj2(rel2,img2);
    cout<<"choisissez l'operation a effectue :"<<endl;
    cout<<"1 - l'addition "<<endl;
    cout<<"2 - soustraction "<<endl;
    cout<<"3 - multiplication "<<endl;
    cout<<"4 - division "<<endl;
    cout<<"5 - verifier l'egalite "<<endl;
    cout<<"enter vorte choix : "<<endl;
    cin>>choix;
    switch (choix){
    case 1 :{
        complex resultat = obj1 + obj2;
        cout<<"le resultat de l'addition est :";
        resultat.afficher();
        break;
    }
    case 2 :{
        complex resultat = obj1 - obj2;
        cout<<"le resultat de la soustraction est :";
        resultat.afficher();
        break;
    }
    case 3 :{
        complex resultat = obj1 * obj2;
        cout<<"le resultat de la multiplication est :";
        resultat.afficher();
        break;
    }
    case 4 :{
        if (obj2 == complex(0,0))
        {
            cout<<"la division par zero est impossilbe!"<<endl;
        }
            else{
                complex resultat = obj1 / obj2;
                cout<<"le resultat de la division est :";
                resultat.afficher();
            }
        break;    
    }
    case 5 :{
        if (obj1 == obj2){
         cout<<"les deux nombres sont egaux."<<endl;
    }else{
         cout<<"les deux nombres sont differents"<<endl;
    }
    break;
    }
    default:
         cout<<"le choix invalide !"<<endl;
    }

    return 0;
}