#include <string>
using namespace std;
class EJMiClase {
    string Nombre;
    public:
    EJMiClase(){       
    }
    EJMiClase(string Nombre){
        this->Nombre = Nombre;
    }
    string obtenerNombre(){
        return Nombre;
    }
    friend ostream& operator << (ostream& out, const EJMiClase& mc);
};
ostream& operator << (ostream& out, const EJMiClase& mc) {
    return out << mc.Nombre;
}