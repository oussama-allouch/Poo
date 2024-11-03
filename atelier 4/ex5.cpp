#include <iostream>
using namespace std;

class Test{
    private:
        static int cpt;
    public:
        void call(){
        cpt++;
        cout<<"la fonction call a été appelée "<<cpt<<" fois."<<endl;
        }
};
    int Test::cpt=0;
int main()
{
    Test t1,t2;
    t1.call();
    t2.call();
    t1.call();
    t2.call();
}