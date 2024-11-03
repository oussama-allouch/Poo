#include <iostream>
using namespace std;

class pile{
  private:
    int size;
    int* stack;
    int top; 
  public:
    pile(int capacite = 10);
    void push(int a);
    int pop();
    void display();
};

pile::pile(int capacite){
    size = capacite;          
    stack = new int[size];   
    top = -1;
}
void pile::push(int valeur){
        if (top == size - 1){
            cout<<"Le pile est pleine.";
        }else{
            top++;
            stack[top]=valeur;
        }
}
int pile::pop(){
    if (top == -1)
    {
        cout<<"le pile est vide !"<<endl;
        return -1;
    }else{
        return stack[top--];
    }
}
void pile::display(){
        if (top == -1)
        {
            cout<<"le pile est vide"<<endl;
        }else{
            cout << "Éléments dans la pile : " << endl;
            for(int i=top ;i >=0 ;i--){
                cout<<stack[i]<<endl;
            }
        }
}


int main(){
    pile p1,p2;
    cout << "Empilement de valeurs dans p1 : 1, 10, 16" <<endl;
    p1.push(1);
    p1.push(10);
    p1.push(16);
    cout << "Empilement de valeurs dans p2 : 3, 5" <<endl;
    p2.push(3);
    p2.push(5);
    cout << "Dépilement de p1 : ";
    p1.pop();
    cout << "Dépilement de p2 : ";
    p2.pop();
    cout << "Éléments restants dans p1 : " << endl; 
    p1.display();
    cout << "Éléments restants dans p2 : " << endl;
    p2.display();

        return 0;
}