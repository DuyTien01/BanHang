#include <iostream>
#include <string>
#include "connguoi.h"
#include "khachhang.h"
#include "mathang.h"
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;
int main(){
    int lc;
    do{
        std :: cout << "============MENU=============\n";
        std :: cout << "1_Them mat hang moi.\n";
        std :: cout << "2_Xuat danh sach mat hang.\n";
        std :: cout << "3_Them danh sach khach hang.\n";
        std :: cout << "4_Xuat danh sach khach hang.\n";
        std :: cout << "5_Lap bang danh sach mua hang.\n";
        std :: cout << "6_Sap xep danh sach.\n";
        std :: cout << "7_Lap hoa don.\n";
        std :: cin >> lc;
        ofstream outfile; 
        ifstream infile; 
        std :: vector<MatHang> listMH;
        MatHang MH;
        int mahang, giaban;
        std :: string tenhang, nhomhang;
        std :: string line;
        switch (lc)
        {
        case 1:
            outfile.open("MH.DAT", std::ios::app); 
            cout << "Ghi du lieu toi file!" << endl; 
            std :: cin >> MH;
            outfile << MH.getMaHang() << endl;
            outfile << MH.getGiaBan() << endl;
            outfile << MH.getTenHang() << endl;
            outfile << MH.getNhomHang() << endl;
            outfile.close();
            break;
        case 2:
            listMH.clear(); // Xóa danh sách hiện tại để đọc mới
            infile.open("MH.DAT"); 
            if (!infile) {
                cerr << "Khong the mo file MH.DAT de doc du lieu." << endl;
                break;
            }
            while (std::getline(infile, line)){
                std::istringstream iss(line);
                cout << "\n===========================\n" ; 
                cout << "Doc du lieu co trong file!" << endl; 
                infile >> mahang;   
                infile >> giaban; 
                std::getline(infile, tenhang);
                std::getline(infile, tenhang);
                std::getline(infile, nhomhang);
                
                // mahang = std :: stoi(line); // Đọc mã hàng
                // getline(infile, line);
                // giaban = std :: stoi(line); // Đọc giá bán
                // std :: getline(infile, tenhang); // Đọc tên hàng
                // std :: getline(infile, nhomhang); // Đọc nhóm hàng

                MatHang ss;
                ss.setMaHang(mahang);
                ss.setGiaBan(giaban);
                ss.setTenHang(tenhang);
                ss.setNhomHang(nhomhang);
                listMH.push_back(ss);
            }
            infile.close();
            // for(const auto& mh : listMH){
            //     std :: cout << mh;    
            // }
            int n; 
            std :: cin >> n;
            std :: cout << listMH[n];
            break;

        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            
            break;
        case 7:
            
            break;
        
            
        default:
            break;
        }

    }while(lc != 0);
    return 0;
}
// using namespace std;
// int  tinnhtong() 
// { 
//     char data[100]; // mo mot file trong che do write. 
//     ofstream outfile; 
//     outfile.open("qtm.dat"); 
//     cout << "Ghi du lieu toi file!" << endl; 
//     cout << "Nhap ten cua ban: "; 
//     cin.getline(data, 100); 
//     // ghi du lieu da nhap vao trong file. 
//     outfile << data << endl; 
//     cout << "Nhap tuoi cua ban: "; 
//     cin >> data; 
//     cin.ignore(); 

//     // ghi du lieu da nhap vao trong file. 
//     outfile << data << endl; 
//     // dong file da mo. 
//     outfile.close(); 
//     //mo mot file trong che do read. 
//     ifstream infile; 
//     infile.open("qtm.dat"); 
//     cout << "\n===========================\n" ; 
//     cout << "Doc du lieu co trong file!" << endl; infile >> data; 
//     // ghi du lieu tren man hinh. 
//     cout << data << endl; 
//     // tiep tuc doc va hien thi du lieu. 
//     infile >> data; cout << data << endl; 
//     // dong file da mo. 
//     infile.close(); 
//     return 0; 
// }
