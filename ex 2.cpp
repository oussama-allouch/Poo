#include <iostream>
#include <string>
using namespace std;

class Animal{
   protected:
    string nom;
    int age;
   public:
   void set_value(string n, int a){
          nom = n;
          age = a;
   }
};

class Zebra : public Animal{
        public:
          void affiche(){
            cout<<"le nom de ce Zebra est :"<<nom<<endl;
            cout<<"l'age de ce animal est :"<<age<<"ans"<<endl;
            cout<<"l'origine : savane africane."<<endl;
          }
};
class Dolphin : public Animal{
        public:
          void affiche(){
            cout<<"le nom de ce Dolphin est :"<<nom<<endl;
            cout<<"l'age de ce animal est :"<<age<<"ans"<<endl;
            cout<<"l'origine : Océans et mers tropicales."<<endl;
          }
};

int main()
{
    Zebra z;
    z.set_value("Flash",8);
    z.affiche();
    Dolphin d;
    d.set_value("Luna",7);
    d.affiche();

    return 0;
}