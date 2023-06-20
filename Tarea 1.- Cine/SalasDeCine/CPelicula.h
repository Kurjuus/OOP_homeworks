#ifndef CPELICULA_H_INCLUDED
#define CPELICULA_H_INCLUDED
#include <string>

class CPelicula{
private:
    std::string sName;
    std::string sSchedules;
public:
    CPelicula();
    ~CPelicula();
    std::string getName();
    void setName(std::string);
    std::string getSchedule();
    void setSchedule(std::string);
};

#endif // CPELICULA_H_INCLUDED
