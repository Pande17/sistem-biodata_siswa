#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string nama, kelamin, kelas, hobi, cita, alamat, asal, lahir, tanggal;
    int absen, nis;
    
    system("cls");

    cout<<"Nama : ";
    getline(cin, nama);
    cout<<"NIS : ";
    cin>> nis;
    cin.ignore();
    cout<<"No. Absen : ";
    cin>> absen;
    cin.ignore();
    cout<<"Kelas : ";
    getline (cin, kelas);
    cout<<"Jenis Kelamin (Pria/Wanita) : ";
    cin>> kelamin;
    cin.ignore();
    cout<<"Hobi : ";
    getline (cin, hobi);
    cout<<"Cita - Cita : ";
    getline (cin, cita);
    cout<<"Alamat : ";
    getline (cin, alamat);
    cout<<"Daerah Asal : ";
    getline (cin, asal);
    cout<<"Tempat Lahir: ";
    getline (cin, lahir);
    cout<<"Tanggal Lahir: ";
    cin>> tanggal;

    system("cls");

    cout<<"Biodata Siswa :";
    cout<<"\nNama : " << nama;
    cout<<"\nNIS : " << nis;
    cout<<"\nNo. Absen : " << absen;
    cout<<"\nKelas : " << kelas;
    cout<<"\nJenis Kelamin : " << kelamin;
    cout<<"\nHobi : " << hobi;
    cout<<"\nCita - Cita : " << cita;
    cout<<"\nAlamat : " << alamat;
    cout<<"\nDaerah Asal : " << asal;
    cout<<"\nTempat Lahir : " << lahir;
    cout<<"\nTanggal Lahir : " << tanggal <<endl;
    
    return 0;
}
