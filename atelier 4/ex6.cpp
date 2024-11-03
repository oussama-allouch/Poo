#include <iostream>
using namespace std;

class point {
    private:
        float x;
        float y;
    public:
        point(float x,float y);
        void deplace(float new_x,float new_y);
        void affiche();
};
point::point(float x,float y){
       this->x = x;
       this->y = y;
}
void point::deplace(float new_x,float new_y){
      x = new_x;
      y = new_y;
}
void point::affiche(){
    cout<<"les coordonnées de ce point sont : ("<<x<<","<<y<<")"<<endl;
}


int main(){
    float x,y,new_x,new_y;
    cout<<"donner les cooredonnees de ce point :";
    cin>>x;
    cin>>y;
    point p1(x,y);
    p1.affiche();
    cout<<"donnez les nouvelles coordonnées de ce point : "<<endl;
    cin>>new_x;
    cin>>new_y;
    p1.deplace(new_x,new_y);
    cout << "Coordonnées après translation : "<<endl;
    p1.affiche();
       return 0;
}