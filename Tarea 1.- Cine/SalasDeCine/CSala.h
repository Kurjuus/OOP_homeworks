#ifndef CSALA_H_INCLUDED
#define CSALA_H_INCLUDED
#include <vector>
#include "CAsiento.h"
#include "CPelicula.h"

class CSala{
private:
    std::vector<CPelicula> movies;
    int rowSeating, columnSeating;
    CAsiento **sizeCinema;
public:

};

#endif // CSALA_H_INCLUDED
