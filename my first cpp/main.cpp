//
//  main.cpp
//  my first cpp
//
//  Created by Rafi Izzatul Rizqu Faris on 17/07/21.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
//    int a1;
//    int a2;
//    std::cout << "Masukkan angka 1" << std::endl;
//    std::cin >> a1;
//    std::cout << "Masukkan angkan 2" << std::endl;
//    std::cin >> a2;
//    std::cout << "Hasil" << std::endl;
//    std::cout << a1 + a2;
    
//    int inputAngka;
//
//    std::cout << "Masukkan angka" << std::endl;
//    std::cin >> inputAngka;
//
//    int sisaBagi = inputAngka % 2;
//
//    if (sisaBagi > 0) {
//        std::cout << "Bilangan Prima";
//    } else {
//        std::cout << "Bukan Bilangan prima";
//    }
    
//    int n;
//    bool angka_prima = true;
//
//    std::cout << "Masukkan angka: ";
//    std::cin >> n;
//
//    if (n == 0 || n == 1) {
//        angka_prima = false;
//    } else {
//        for (int i = 2; i <= n / 2; i++) {
//            std::cout << i << std::endl;
//            if (n % i == 0) {
//                angka_prima = false;
//                break;
//            }
//        }
//      }
//
//    std::cout << std::endl;
//    if (angka_prima){
//        std::cout << n << " adalah angka prima";
//    } else {
//        std::cout << n << " bukan angka prima";
//    }
//    std::cout << std::endl;
    
    int panjang, lebar, tinggi;
    
    std::cout << "Masukkan panjang : ";
    std::cin >> panjang;
    std::cout << "Masukkan lebar : ";
    std::cin >> lebar;
    std::cout << "Masukkan tinggi : ";
    std::cin >> tinggi;
    std::cout << "Volume balok adalah " << panjang * lebar * tinggi;
    
//    for (int i = 1; i < 11; i++) {
//        if (i % 2 == 0) {
//            std::cout << i << " bilangan genap" << std::endl;
//        } else {
//            std::cout << i << " bilangan ganjil" << std::endl;
//        }
//    }
//
//    std::cout << std::max(2, 6);
    return 0;
}
