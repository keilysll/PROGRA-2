#pragma once
#include "Conferencia.h"
#include "ModParticipante.h"
#include "Participante.h"
#include "Estudiante.h"
#include "Docente.h"
class ConferenciaPresencial :
    public Conferencia
{
private:
    string lugar;
public: 
    ConferenciaPresencial(int nro, int fecha,string lugar);
    ~ConferenciaPresencial();
    string getLugar();
    string toJson();


};

