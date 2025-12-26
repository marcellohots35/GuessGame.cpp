#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main (){
    int angkaRahasia;
    int level,tebakan;
    int jumlahKesempatan;
    int percobaan = 0;

    srand(time(0));

    angkaRahasia = rand() % 100 + 1;
    cout << "Selamat datang di game tebak angka!\n";
    cout << "Aku akan berfikir angka diantara 1 - 100.\n";
    cout << "Kamu hanya mempunyai sedikit kesempatan untuk menebak angkanya.\n\n";

    cout << "Silahkan memilih level:\n";
    cout << "1.Mudah  (10 Kesempatan)\n";
    cout << "2.Sedang (5 Kesempatan)\n";
    cout << "3.Susah  (3 Kesempatan)\n";

    cout << "Masukkan pilihanmu (1-3):";
    cin >> level;

    if (level == 1) {
        jumlahKesempatan =10;
        cout << "Oke!Kamu memilih level mudah\n";
    } else if (level == 2) {
        jumlahKesempatan = 5;
        cout << "Oke!Kamu memilih level sedang.\n";
    } else if (level == 3) {
        jumlahKesempatan = 3;
        cout << "Oke!Kamu memilih level sulit.\n";
    }else{
        cout << "Pilihan tidak valid!!!\n";
        return 0;}

        cout << "Mari kita mulai permainannya!!!\n";

        while (jumlahKesempatan > 0){
            cout << "Masukkan angka yang anda tebak:";
            cin >> tebakan;
            percobaan++;

            if (tebakan == angkaRahasia){
                cout << "Selamat!,kamu berhasil menebak angka dalam " << percobaan << "percobaan.";
            }else if (tebakan < angkaRahasia){
                cout << "Salah,angka rahasia lebih besar dari " << tebakan << "." << endl;
                jumlahKesempatan--;
            }else if (tebakan > angkaRahasia){
                cout << "Salah,angka rahasia lebih kecil dari " << tebakan << "." << endl;
                jumlahKesempatan--;
            }

        }if (jumlahKesempatan == 0){
            cout << "Game selesai!!!,anda tidak dapat menebak angka." << endl;
            cout << "Angka rahasianya adalah:" << angkaRahasia;
        }

    }

