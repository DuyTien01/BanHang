#include "khachhang.h"
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>


KhachHang :: KhachHang() : ConNguoi(){}
KhachHang :: ~KhachHang(){}

std :: vector<int> KhachHang :: maList;
std :: istream& operator >> (std :: istream& in, KhachHang& kh){
    // in >> static_cast<ConNguoi&>(kh);
    std :: cout << "Nhap vao ma KH: ";
    in >> kh.maKH;
    while(kh.maKH <= 0 || kh.maKH > 99999 || std :: find(KhachHang :: maList.begin(), KhachHang :: maList.end(), kh.maKH) != KhachHang :: maList.end()){
        std :: cout << "Ma KH nhap vao khong dung, nhap lai!!!\n";
        in >> kh.maKH;
    }
    KhachHang :: maList.push_back(kh.maKH);

    int lc;
    std :: cout << "Nhap vao loai KH: ";
    do{
        std :: cout << "____MENU____\n";
        std :: cout << "1_Mua le.\n" << "2_Mua buon.\n";
        in >> lc;
        switch(lc){
            case 1:
                kh.loaiKH = "Mua le";
                break;
            case 2:
                kh.loaiKH = "Mua buon";
                break;
            default:
                std :: cout << "Lua chon loai KH khong phu hop, nhap lai!!!\n";
        }
    }while(lc > 2 || lc < 1);

    return in;
}

std :: ostream& operator << (std :: ostream& out, KhachHang& kh){
    // out << static_cast<ConNguoi&>(kh); 
    out << kh.maKH;
    out << std :: endl;
    out << kh.loaiKH;
    out << std :: endl;
} 
