#ifndef MATHANG_H
#define MATHANG_H
#include <string>
#include <vector>

using namespace std;
class MatHang{
    private:
        int maHang, giaBan;
        string tenHang, nhomHang;
    public:
        MatHang();
        friend istream &operator >> (istream&, MatHang&);
        friend ostream &operator << (ostream&, MatHang);

        void setMaHang(int mahang);
        void setGiaBan(int giaban);
        void setTenHang(std :: string tenhang);
        void setNhomHang(std :: string nhomhang);

        int getMaHang();
        int getGiaBan();
        std :: string getTenHang();
        std :: string getNhomHang();
        
        static vector<int>maHangList;
        ~MatHang();
};

#endif