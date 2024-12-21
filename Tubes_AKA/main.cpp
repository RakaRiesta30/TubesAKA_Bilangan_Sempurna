#include "AKA.h"
#include <chrono>
using namespace std::chrono;

int main()
{
    int inp,n,hasil;
    cout << "Pilih rekursif(1) atau iteratif(2) : ";
    cin >> inp;
    cout << "Masukkan jumlah data : ";
    cin >> n;
    cout << endl;
    auto start = high_resolution_clock::now();
    switch(inp){
        case(1):
            for(int i=1;i<=n;i++){
                hasil=rekursif(i,i-1);
                if(hasil == i){
                    cout << i << " adalah bilangan sempurna" << endl;
                }
            }
            break;
        case(2):
            for(int i=1;i<=n;i++){
                hasil=iteratif(i);
                if(hasil == i){
                    cout << i << " adalah bilangan sempurna" << endl;
                }
            }
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << endl << "Waktu = " << duration.count() << " mikrodetik";
}

