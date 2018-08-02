#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{

    int nasi, sate, minuman,porsi_nasi,porsi_minum,porsi_sate,banyak_nasi,banyak_minum,banyak_sate,status_pesanan;
    int harga_minuman,harga_sate,harga_nasi;
    float pajak,bayar,diskon;
    float total_harga_nasi,total_harga_minuman,total_harga_sate;
    float total_harga_awal, total_harga_akhir;
    //inisialisasi awal;

    total_harga_awal = 0;
    total_harga_akhir = 0;
    //input
    cout <<" \t\t\t-----ANGKRINGAN HOREE-----" <<endl;
    cout <<" \t\t--------Jl.Raya Slawi, Kagok-Slawi--------" <<endl;
    cout <<" \t\t==========================================="<<endl<<endl;
    cout <<"\t\t\t**[MENU MAKANAN DAN MINUMAN]**"<<endl;

    cout << "-------------------------\n";
    cout <<"     A.ANEKA NASI" <<endl;
    cout << "-------------------------\n";
    cout <<" 1.Nasi teri "<<endl;
    cout <<" 2.Nasi cumi "<<endl;
    cout <<" 3.Nasi ayam "<<endl;
    cout <<" 4.Nasi telur "<<endl;
    cout <<" 5.Nasi tempe "<<endl;
    cout << "-------------------------\n";
    cout << "Masukan Pilihan Nasi : ";
    cin  >> nasi;
    cout << "-------------------------\n";
    cout << "   Pilihan Porsi nasi\n";
    cout << "-------------------------\n";
    cout << "1. Kecil\n";
    cout << "2. Sedang\n";
    cout << "3. Besar\n";
    cout << "-------------------------\n";
    cout << "Masukan Pilihan Porsi nasi : ";
    cin  >> porsi_nasi;
    cout << "Masukan Banyak Pesanan nasi : ";
    cin  >> banyak_nasi;

     system("cls");

    cout << "-------------------------\n";
    cout <<"     B.ANEKA MINUMAN"<<endl;
    cout << "-------------------------\n";
    cout <<" 1.Jahe susu "<<endl;
    cout <<" 2.Es teh manis "<<endl;
    cout <<" 3.Es jeruk peras "<<endl;
    cout <<" 4.Teh manis panas"<<endl;
    cout <<" 5.Wedang jeruk" <<endl;
    cout << "-------------------------\n";
    cout << "Masukan Pilihan Minuman : ";
    cin  >> minuman;
    cout << "-------------------------\n";
    cout << "   Pilihan Porsi Minum\n";
    cout << "-------------------------\n";
    cout << "1. Gelas Kecil\n";
    cout << "2. Gelas Besar\n";
    cout << "-------------------------\n";
    cout << "Masukan Pilihan Porsi minum : ";
    cin  >> porsi_minum;
    cout << "Masukan Banyak Pesanan minuman : ";
    cin  >> banyak_minum;

     system("cls");

    cout << "-------------------------\n";
    cout << "     C.ANEKA SATE"<<endl;
    cout << "-------------------------\n";
    cout <<" 1.Sate usus "<<endl;
    cout <<" 2.Sate kikil "<<endl;
    cout <<" 3.Sate ayam "<<endl;
    cout <<" 4.Sate telur puyuh "<<endl;
    cout <<" 5.Sate kulit ayam"<<endl;
    cout << "-------------------------\n";
    cout << "Masukan Pilihan Sate : ";
    cin  >> sate;
    cout << "-------------------------\n";
    cout << "   Pilihan Porsi sate\n";
    cout << "-------------------------\n";
    cout << "1. Setengah kodi\n";
    cout << "2. Satu Kodi\n";
    cout << "-------------------------\n";
    cout << "Masukan Pilihan Porsi sate : ";
    cin  >> porsi_sate;
    cout << "Masukan Banyak Pesanan sate : ";
    cin  >> banyak_sate;

    system("cls");

    cout << "-------------------------\n";
    cout << "       Status Pesanan" << endl;
    cout << "--------------------------\n";
    cout << "1. Makan Ditempat\n";
    cout << "2. Dibungkus\n";
    cout << "---------------------------\n";
    cout << "Masukan Status Pesanan : ";
    cin >> status_pesanan;

    system("cls");

    {if((nasi==1)&&(porsi_nasi==1))
        harga_nasi = 2500;
    else if((nasi==1)&&(porsi_nasi==2))
        harga_nasi = 3500;
    else if((nasi==1)&&(porsi_nasi==3))
        harga_nasi = 4500;

    if((nasi==2)&&(porsi_nasi==1))
        harga_nasi = 3000;
    else if((nasi==2)&&(porsi_nasi==2))
        harga_nasi = 4000;
    else if((nasi==2)&&(porsi_nasi==3))
        harga_nasi = 5000;

    if((nasi==3)&&(porsi_nasi==1))
        harga_nasi = 3000;
    else if((nasi==3)&&(porsi_nasi==2))
        harga_nasi = 4000;
    else if((nasi==3)&&(porsi_nasi==3))
        harga_nasi = 5000;

    if((nasi==4)&&(porsi_nasi==1))
        harga_nasi = 2000;
    else if((nasi==4)&&(porsi_nasi==2))
        harga_nasi = 3000;
    else if((nasi==4)&&(porsi_nasi==3))
        harga_nasi = 4000;

    if((nasi==5)&&(porsi_nasi==1))
        harga_nasi = 2000;
    else if((nasi==5)&&(porsi_nasi==2))
        harga_nasi = 3000;
    else if((nasi==5)&&(porsi_nasi==3))
        harga_nasi = 4000;


    //minuman
     if(minuman==1)
    {
        if(porsi_minum==1)
            harga_minuman = 4000;
        else if(porsi_minum==2)
            harga_minuman = 5000;
    }

    if(minuman==2)
    {
        if(porsi_minum==1)
            harga_minuman = 2500;
        else if(porsi_minum==2)
            harga_minuman = 3500;
    }

    if(minuman==3)
    {
        if(porsi_minum==1)
            harga_minuman = 3000;
        else if(porsi_minum==2)
            harga_minuman = 4000;
    }

    if(minuman==4)
    {
        if(porsi_minum==1)
            harga_minuman = 2000;
        else if(porsi_minum==2)
            harga_minuman = 3000;
    }

    if(minuman==5)
    {
        if(porsi_minum==1)
            harga_minuman = 2500;
        else if(porsi_minum==2)
            harga_minuman = 3500;
    }



    //sate
if(sate==1)
    {
        switch(porsi_sate)
        {
            case 1:harga_sate=4000;
                break;
            case 2:harga_sate=8000;
                break;
        }
    }
    if(sate==2)
    {
        switch(porsi_sate)
        {
            case 1:harga_sate=5000;
                break;
            case 2:harga_sate=10000;
                break;
        }
    }
    if(sate==3)
    {
        switch(porsi_sate)
        {
            case 1:harga_sate=7500;
                break;
            case 2:harga_sate=15000;
                break;
        }
    }
    if(sate==4)
    {
        switch(porsi_sate)
        {
            case 1:harga_sate=5000;
                break;
            case 2:harga_sate=10000;
                break;
        }
    }
    if(sate==5)
    {
        switch(porsi_sate)
        {
            case 1:harga_sate=3000;
                break;
            case 2:harga_sate=6000;
                break;
        }
    }

    //jumlah harga
    total_harga_nasi = (harga_nasi*banyak_nasi);
    total_harga_minuman = (harga_minuman*banyak_minum);
    total_harga_sate = (harga_sate*banyak_sate);
    total_harga_awal=total_harga_nasi+total_harga_minuman+total_harga_sate;
    if (total_harga_akhir>=50000)
    diskon=0.2*total_harga_awal;
    else diskon=0;
    if(status_pesanan==1)
        pajak = 0.05*total_harga_awal;
    else pajak=0;
    total_harga_akhir =total_harga_awal+pajak;
    if (total_harga_akhir>=50000)
    diskon=0.1*total_harga_awal;
    else diskon=0;
    cout << setiosflags((ios::fixed));
    cout << "\t -------Hasil Perhitungan Pengeluaran--------\n";
    cout << "\t --------------------------------------------\n";
    cout << "Jumlah harga Nasi\t"<<banyak_nasi<<" x Rp."<<harga_nasi<<"\t: Rp."<<setprecision(2)<<setw(10)<<total_harga_nasi<<"\n";
    cout << "Jumlah harga Minuman\t"<<banyak_minum<<" x Rp."<<harga_minuman<<"\t: Rp."<<setprecision(2)<<setw(10)<<total_harga_minuman<<"\n";
    cout << "Jumlah harga Sate\t"<<banyak_sate<<" x Rp."<<harga_sate<<"\t: Rp."<<setprecision(2)<<setw(10)<<total_harga_sate<<"\n";
    cout << "-------------------------------------------------------\n";
    cout << "Total Harga\t\t\t\t: Rp."<<setprecision(2)<<setw(10)<<total_harga_awal << "\n";
    cout << "Pajak 5%\t\t\t\t: Rp."<<setprecision(2)<<setw(10)<<pajak<< "\n";
    cout << "Diskon 10%\t\t\t\t: Rp."<<setprecision(2)<<setw(10)<<diskon<< "\n";
    cout << "-------------------------------------------------------\n";
    cout << "Total Pembayaran\t\t\t: Rp."<<setprecision(2)<<setw(10)<<total_harga_akhir-diskon<<"\n";
    cout <<"Bayar \t\t\t\t\t: Rp.\t";
    cin  >>bayar; ".00";
    cout <<"Kembali \t\t\t\t: Rp."<<setprecision(2)<<setw(10)<<(bayar-(total_harga_akhir-diskon))<<endl<<endl;
    cout <<endl<<endl;
    cout <<"\t ============================================\n";
    cout <<"\t ------TERIMA KASIH ATAS KUNJUNGAN ANDA------\n";
    cout <<"\t ============================================\n";
    cout <<endl<<endl<<endl<<endl<<endl<<endl;

    return 0;
}
}

