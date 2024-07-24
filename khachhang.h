#ifndef KHACHHANG_H
#define KHACHHANG_H
#include "connguoi.h"
#include <vector>


class KhachHang : public ConNguoi{
    private:
        int maKH;
        std :: string loaiKH;
    public:
        KhachHang();
        ~KhachHang();
        friend std :: istream& operator >> (std :: istream& in, KhachHang& kh);
        friend std :: ostream& operator << (std :: ostream& out, KhachHang& kh);
        static std :: vector<int> maList;
};

#endif