#include "mathang.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

MatHang :: MatHang(){}
MatHang :: ~MatHang(){}
vector<int> MatHang :: maHangList;

istream &operator >> (istream& in, MatHang& MH){
    cout << "Nhap ma hang: ";
    in >> MH.maHang;
    while(MH.maHang <= 0 || MH.maHang > 9999 || find(MatHang :: maHangList.begin(), MatHang :: maHangList.end(), MH.maHang) != MatHang :: maHangList.end()){
        cout << "Ma Hang khong thoa ma, nhap lai!!!\n";
        in >> MH.maHang;
    }
    MatHang :: maHangList.push_back(MH.maHang);

    cout << "Nhap gia hang: ";
    in >> MH.giaBan;

    in.ignore();
    cout << "Nhap ten hang: ";
    getline(in, MH.tenHang);

    cout << "Nhap nhom hang: \n";
    int cl;
    do{
        cout << "____MENU____\n";
        cout << "1_Hang thoi trang.\n" << "2_Hang tieu dung.\n" << "3_Hang dien may.\n" << "4_Hang gia dung.\n";
        in >> cl;
        switch(cl){
            case 1:
                MH.nhomHang = "Hang thoi trang";
                break;
            case 2:
                MH.nhomHang = "Hang tieu dung";
                break;
            case 3:
                MH.nhomHang = "Hang dien may";
                break;
            case 4:
                MH.nhomHang = "Hang gia dung";
                break;
            default:
                cout << "Lua chon nhom hang khong hop le, nhap lai!!!\n";                                           
        }
    }while(cl > 4 || cl < 1);

    return in;
}
std::ostream& operator << (std::ostream& out, MatHang mh){
    out << "Ma hang: " << mh.maHang << std::endl;
    out << "Gia ban: " << mh.giaBan << std::endl;
    out << "Ten hang: " << mh.tenHang << std::endl;
    out << "Nhom hang: " << mh.nhomHang << std::endl;
    return out;
}

void MatHang :: setMaHang(int mahang){
    this-> maHang = mahang;
}
void MatHang :: setGiaBan(int giaban){
    this-> giaBan = giaban;
}

void MatHang :: setTenHang(std :: string tenhang){
    this-> tenHang = tenhang;
}
void MatHang :: setNhomHang(std :: string nhomhang){
    this-> nhomHang = nhomhang;
}
int MatHang :: getMaHang(){
    return this->maHang;
}
int MatHang :: getGiaBan(){
    return this->giaBan;
}
std :: string MatHang :: getTenHang(){
    return this->tenHang;
}
std :: string MatHang :: getNhomHang(){
    return this->nhomHang;
}
 