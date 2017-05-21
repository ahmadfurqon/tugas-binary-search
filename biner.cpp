#include <iostream>

using namespace std;
int main()
{
	int n, i, arr[50], cari, awal, akhir, tengah;
	cout<<"Masukan Elemen :";
	cin>>n;
	cout<<"Masukan "<<n<<" angka :";
	for (i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Masukan angka yang di cari :";
	cin>>cari;
	awal = 0;
	akhir = n-1;
	tengah = (awal+akhir)/2;
	while (awal <= akhir)
	{
		if(arr[tengah] < cari)
		{
			awal = tengah + 1;

		}
		else if(arr[tengah] == cari)
		{
			cout<<cari<<" Ketemu di lokasi "<<tengah+1<<"\n";
			break;
		}
		else
		{
			 akhir = tengah - 1;
		}
		tengah = (awal + akhir)/2;
	}
	if(awal > akhir)
	{
		cout<<"Tidak ketemu "<<cari<<" tidak ada di daftar.";
	}
	return 0;
}