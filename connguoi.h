#ifndef CONNGUOI_H
#define CONNGUOI_H
#include <string>


class ConNguoi{
    private:
        std :: string sName, sAdd, sPhone;
    public:
        ConNguoi();
        friend std :: istream& operator >> (std :: istream& in, ConNguoi& cn);
        friend std :: ostream& operator << (std :: ostream& out, ConNguoi& cn);
        void setTT(std :: string, std :: string, std :: string);
        void disPlay();
        ~ConNguoi();
};
#endif