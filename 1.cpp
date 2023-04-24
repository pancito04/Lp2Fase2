#include<iostream>
using namespace std;
class Clase{
    private:
        int varEntera;
        float varFloat;
    public:
        Clase(){varEntera=0;varFloat=0;}
        int getVarEntera(){return this -> varEntera;}
        float getVarFlotante(){return this -> varFloat;}
        Clase& sumaEntero(int n){
            varEntera+=n;
            return *this;
        }
        Clase& sumaFlotante(float n){
            varFloat+=n;
            return *this;
        }
};
int main(){
    Clase objeto;
    int x;
    float y;
    cin>>x>>y;
    cout<<objeto.getVarEntera()<<endl<<objeto.getVarFlotante()<<endl;
    objeto.sumaEntero(x).sumaFlotante(y);
    cout<<objeto.getVarEntera()<<endl<<objeto.getVarFlotante()<<endl;
    return 0;
}