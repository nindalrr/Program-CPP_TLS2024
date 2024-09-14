#include <iostream>
#include <iomanip>

int main() {
    // Harga per Liter Pertamax
    const double harga_per_liter = 12950;

    // Deklarasi variabel untuk uang
    double uang;

    // Meminta input jumlah uang dari pengguna
    std::cout << "Masukkan jumlah uang yang Anda miliki: Rp ";
    std::cin >> uang;

    // Mengecek apakah uang lebih besar dari 0
    if (uang > 0) {
        // Menghitung berapa liter Pertamax yang bisa didapatkan
        double liter_pertamax = uang / harga_per_liter;

        // Menampilkan hasil dengan dua angka di belakang koma
        std::cout << "Dengan uang Rp " << uang << ", Anda bisa mendapatkan "
                  << std::fixed << std::setprecision(2) << liter_pertamax << " liter Pertamax." << std::endl;
    } else {
        // Menampilkan pesan jika uang yang dimasukkan tidak valid (kurang dari atau sama dengan 0)
        std::cout << "Masukkan jumlah uang yang valid (lebih dari 0)." << std::endl;
    }

    return 0;
}
