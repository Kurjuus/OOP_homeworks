#ifndef CASIENTO_H_INCLUDED
#define CASIENTO_H_INCLUDED

class CAsiento{
private:
    bool available;
public:
    CAsiento();
    ~CAsiento();
    bool isFree(void);
    void printSeat(void);
};

#endif // CASIENTO_H_INCLUDED
