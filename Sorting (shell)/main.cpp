#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	 int limit[100];
    int i, n, t;
    cout << endl;
    cout << "\t\t\t Pengurutan Menggunakan Metode Shell Sort \n\n\n";
    cout << "Masukan Jumlah Data Yang Ingin Diurutkan : ";
    cin >> n;
    cout << endl;

    for (i = 0; i < n; i++) {
        cout << "Nilai Ke-" << i + 1 << " : ";
        cin >> limit[i];
    }


    for (int w = n / 2; w > 0; w = w / 2) {
        for (int x = w; x < n; x++) {
            for (int y = x - w; y >= 0; y -= w) {
                if (limit[y + w] < limit[y]) {
                    t = limit[y + w];
                    limit[y + w] = limit[y];
                    limit[y] = t;
                }
            }
        }
    }

    cout << "Data Yang Telah Diurutkan Dengan Shell Sort\n";
    cout << endl;
    for (i = 0; i < n; i++) {
        cout << limit[i] << " ";
    }
    return 0;
}
