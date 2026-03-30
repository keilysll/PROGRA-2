#pragma once
#include "Conferencia.h"
#include "ModParticipante.h"
#include "Participante.h"
#include "Estudiante.h"
#include "Docente.h"
class ConferenciaVirtual :
    public Conferencia
{
private:
    string link;
public:
    ConferenciaVirtual(int nro, int fecha, string link);
    ~ConferenciaVirtual();
    string getLink();
    string toJson();
};

