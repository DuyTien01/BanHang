#include "connguoi.h"
#include <string>
#include <iomanip>
#include <iostream>


ConNguoi :: ConNguoi(){
    sName = sAdd = sPhone = " ";
}
ConNguoi :: ~ConNguoi(){}
std :: istream& operator >> (std :: istream& in, ConNguoi& cn){
    std :: cout << "Nhap vao ten: ";
    std :: getline(in, cn.sName);
}
std :: ostream& operator << (std :: ostream& out, ConNguoi& cn){
    out << "In ra ten: " << cn.sName;
}
void ConNguoi :: setTT(std :: string name, std :: string add, std :: string phone){
    this-> sName = name;
    this-> sAdd = add;
    this-> sPhone = phone;
}

void ConNguoi :: disPlay(){
    std ::cout << std :: left << std :: setw(20) << "Name" << std :: setw(20) << "Add" << std :: setw(20) << "Phone" << std :: endl;
    std :: cout << std :: left << std :: setw(20) << sName << std :: setw(20) << sAdd << std :: setw(20) << sPhone << std :: endl;
}
