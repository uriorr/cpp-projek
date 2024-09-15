#include <iostream>
#include <cmath>

using namespace std;

int main() {
	//
	//
		// MENGHITUNG BIDANG RUANG 2D
	cout << "--------------------------------------\n";
	cout << "----- MENGHITUNG BIDANG RUANG 2D -----\n";
	cout << "--------------------------------------\n\n";

	//
		// mendeklarasikan variabel
	string bidang, lk, luas, keliling;
	int state;
	float luas1, keliling1;
	float r, s1, s2, s3, s4, d1, d2, alas, tinggi;
	float panjang, lebar;
	double pi;
	// mendklarasikan syarat untuk for loop
	cout << "ingin menghitung?\n";
	cout << "ketik 1 untuk melanjutkan = ";
	cin >> state;
	cout << "\n\n";

	// looping for
	for (state; state == 1;) {

		// input user bidang ruang 2d 
		cout << "_______________________________\n";
		cout << "bidang yang tersedia:\n";
		cout << "1. persegi     |   3. persegi panjang\n";
		cout << "2. segitiga    |   4. jajar genjang\n";
		cout << "3. trapesium   |   7. belah ketupat\n";
		cout << "4. lingkaran   |   8. layang-layang\n";

		cout << "nomor bidang yang ingin dihitung = ";
		cin >> bidang;
		cout << "\n";

		// logika if statement
		/* persegi   */if (bidang == "1") {
			cout << "ingin menghitung apa?\n";
			cout << "luas / keliling = ";
			cin >> lk;
			cout << "\n";

			// logika pemilihan if 
			if (lk == "luas") {
				// input user nilai variabel
				cout << "sisi = ";
				cin >> s1;

				luas1 = pow(s1, 2);
				// mengeluarkan nilai
				cout << "luas persegi = " << luas1 << "\n\n";
			}
			else if (lk == "keliling") {
				// input user nilai variabel
				cout << "sisi 1 = ";
				cin >> s1;

				keliling1 = 4 * s1;
				// mengluarkan nilai
				cout << "keliling persegi = " << keliling1 << "\n\n";
			}
			else {
				cout << "invalid" << "\n\n";
			}
		}
		/* segitiga  */else if (bidang == "2") {
			cout << "ingin menghitung apa?\n";
			cout << "luas / keliling = ";
			cin >> lk;
			cout << "\n";

			// logika pemilihan if 
			if (lk == "luas") {
				// input user nilai variabel
				cout << "alas = ";
				cin >> alas;
				cout << "tinggi = ";
				cin >> tinggi;

				luas1 = alas * tinggi / 2;
				// mengeluarkan nilai
				cout << "luas segitiga = " << luas1 << "\n\n";
			}
			else if (lk == "keliling") {
				// input user nilai variabel
				cout << "sisi 1 = ";
				cin >> s1;
				cout << "sisi 2 = ";
				cin >> s2;
				cout << "sisi 3 = ";
				cin >> s3;

				keliling1 = s1 + s2 + s3;
				// mengluarkan nilai
				cout << "keliling segitiga = " << keliling1 << "\n\n";
			}
			else {
				cout << "invalid" << "\n\n";
			}
		}
		/* trapesium */else if (bidang == "3") {
			cout << "ingin menghitung apa?\n";
			cout << "luas / keliling = ";
			cin >> lk;
			cout << "\n";

			// logika pemilihan if 
			if (lk == "luas") {
				// input user nilai variabel
				cout << "sisi 1 = ";
				cin >> s1;
				cout << "sisi 2 = ";
				cin >> s2;
				cout << "tinggi = ";
				cin >> tinggi;

				luas1 = (s1 + s2) * tinggi / 2;
				// mengluarkan nilai
				cout << "luas trapesium = " << luas1<< "\n\n";
			}
			else if (lk == "keliling") {
				// input user nilai variabel
				cout << "sisi 1 = ";
				cin >> s1;
				cout << "sisi 2 = ";
				cin >> s2;
				cout << "sisi 3 = ";
				cin >> s3;
				cout << "sisi 4 = ";
				cin >> s4;


				keliling1 = s1 + s2 + s3 + s4;
				// mengeluarkan nilai
				cout << "keliling trapesium = " << keliling1 << "\n\n";
			}
			else {
				cout << "invalid" << "\n\n";
			}
		}
		/* lingkaran */else if (bidang == "4") {
			cout << "ingin menghitung apa?\n";
			cout << "luas / keliling = ";
			cin >> lk;
			pi = 3.14;

			// logika pemilihan switch
			if (lk == "luas") {
				//nilai pi
				cout << "pi = " << pi << "\n";
				//input user nilai variabel
				cout << "jari-jari = ";
				cin >> r;

				luas1 = pi * pow(r, 2);
				// mengeluarlkan nilai
				cout << "luas lingkaran = " << luas1 << "\n\n";

			}
			else if (lk == "keliling") {
				// input user nilai variabel
				cout << "pi = " << pi << "\n";
				cout << "jari-jari = ";
				cin >> r;

				keliling1 = 2 * pi * r;
				// mengeluarkan nilai
				cout << "keliling lingkaran= " << keliling1 << "\n\n";
			}
			else {
				cout << "invalid" << "\n\n";
			}
		}
		/* persegi panjang */else if (bidang == "5") {
			cout << "ingin menghitung apa?\n";
			cout << "luas / keliling = ";
			cin >> lk;
			cout << "\n";

			// logika pemilihan switch
			if (lk == "luas") {
				//input user nilai variabel
				cout << "panjang = ";
				cin >> panjang;
				cout << "lebar = ";
				cin >> lebar;

				luas1 = panjang * lebar;
				// mengeluarlkan nilai
				cout << "luas persegi panjang = " << luas1 << "\n\n";

			}
			else if (lk == "keliling") {
				// input user nilai variabel
				cout << "panjang = ";
				cin >> panjang;
				cout << "lebar = ";
				cin >> lebar;

				keliling1 = 2 * (panjang + lebar);
				// mengeluarkan nilai
				cout << "keliling persegi panjang = " << keliling1 << "\n\n";
			}
			else {
				cout << "invalid" << "\n\n";
			}
		}
		/* jajar genjang   */else if (bidang == "6") {
			cout << "ingin menghitung apa?\n";
			cout << "luas / keliling = ";
			cin >> lk;
			cout << "\n";

			// logika pemilihan switch
			if (lk == "luas") {
				//input user nilai variabel
				cout << "alas = ";
				cin >> alas;
				cout << "tinggi = ";
				cin >> tinggi;

				luas1 = alas * tinggi;
				// mengeluarlkan nilai
				cout << "luas jajar genjang = " << luas1 << "\n\n";

			}
			else if (lk == "keliling") {
				// input user nilai variabel
				cout << "panjang = ";
				cin >> panjang;
				cout << "lebar = ";
				cin >> lebar;

				keliling1 = 2 * (panjang + lebar);
				// mengeluarkan nilai
				cout << "keliling jajar genjang = " << keliling1 << "\n\n";
			}
			else {
				cout << "invalid" << "\n\n";
			}
		}
		/* belah ketupat   */else if (bidang == "7") {
			cout << "ingin menghitung apa?\n";
			cout << "luas / keliling = ";
			cin >> lk;
			cout << "\n";

			// logika pemilihan switch
			if (lk == "luas") {
				//input user nilai variabel
				cout << "diameter 1 = ";
				cin >> d1;
				cout << "diameter 2 = ";
				cin >> d2;

				luas1 = d1 * d2 / 2;
				// mengeluarlkan nilai
				cout << "luas belah ketupat = " << luas1 << "\n\n";

			}
			else if (lk == "keliling") {
				// input user nilai variabel
				cout << "sisi = ";
				cin >> s1;

				keliling1 = 4 * s1;
				// mengeluarkan nilai
				cout << "keliling belah ketupat = " << keliling1 << "\n\n";
			}
			else {
				cout << "invalid" << "\n\n";
			}
		}
		/* layang - layang */else if (bidang == "8") {
			cout << "ingin menghitung apa?\n";
			cout << "luas / keliling = ";
			cin >> lk;
			cout << "\n";

			// logika pemilihan switch
			if (lk == "luas") {
				//input user nilai variabel
				cout << "diameter 1 = ";
				cin >> d1;
				cout << "diameter 2 = ";
				cin >> d2;

				luas1 = d1 * d2 / 2;
				// mengeluarlkan nilai
				cout << "luas layang-layang = " << luas1 << "\n\n";

			}
			else if (lk == "keliling") {
				// input user nilai variabel
				cout << "panjang = ";
				cin >> panjang;
				cout << "lebar = ";
				cin >> lebar;

				keliling1 = 2 * (panjang + lebar);
				// mengeluarkan nilai
				cout << "keliling layang-layang = " << keliling1 << "\n\n";
			}
			else {
				cout << "invalid" << "\n\n";
			}
		}
		else {
			cout << "invalid" << "\n\n";
		}
		cout << "ingin menghitung?\n";
		cout << "ketik 1 untuk melanjutkan = ";
		// cout << "[y/n] = ";
		cin >> state;

	}
	cin.get();
	return 0;
}