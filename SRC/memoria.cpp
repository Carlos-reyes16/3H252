#include <iostream>
using namespace std;

class Empleado{
    private://  nacen de la relacion tiene
        char nombre[10];//10 bytes
        int edad;//4 bytes
        char direccion[255];//255 bytes
        int telefono;//4 bytes
    public: // nace de la relacion usa
        int LeerEdad(){
            return;
        }

}; //273 bytes

int main(int argc, char const *argv[])
{
    //Enteros
    cout << "Tamaño de int " << sizeof(int) << endl;
    cout << "Tamaño de  long " << sizeof(long) << endl;
    //punto flotante
    cout << "Tamaño de float " << sizeof(float) << endl;
    cout << "Tamaño de double " << sizeof(double) << endl;
    //Bytes
    cout << "Tamaño de char " << sizeof(char) << endl;
    cout << "Tamaño de byte " << sizeof(byte) <<endl;
    cout <<"Tamaño de bool " << sizeof(bool) << endl;
    cout << "Tamaño puntero" << sizeof(int*) << endl;

    Empleado empleados[10]; // <--- 2730 bytes
    cout << "Tamaño  Empleado" << sizeof(Empleado) << endl;
    cout << "Empleados " << empleados [0].LeerEdad() << endl;

    //Casteos
    int a = 64;
    char b = (char) a;
    cout << b << endl;

    return 0;
}