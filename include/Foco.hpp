#pragma once
#include <EstadoFoco.hpp>
class Foco
{
private:
    EstadoFoco estado;

public:
    Foco() {estadoActual=false}
    ~Foco() {}
    void Encender(){}
    void apagar(){}
    void EstadoFoco(){}
};