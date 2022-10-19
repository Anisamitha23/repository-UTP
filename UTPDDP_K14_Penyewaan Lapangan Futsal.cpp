 #include <iostream>
using namespace std;

struct booking{
	char nama[10][10], tgl [10][10];
	int jml, mulai[10], akhir[10], tot, menu;
}book;

void header1(){
	cout<<"\t\t\t\t\t==========================="<<endl;
	cout<<"\t\t\t\t\t PENYEWAAN LAPANGAN FUTSAL"<<endl;
	cout<<"\t\t\t\t\t==========================="<<endl<<endl;
	
}
void header2(){
	cout<<"\t\t DAFTAR PEMBOOKING "<<endl<<endl;
}

int main(){
	header1();
	cout<<"Masukan Jumlah Pembooking : ";
	cin>>book.jml;
	cout<<endl;
	for(int i = 0;i<book.jml;i++){
		cout<<"Masukan Nama\t\t\t\t : ";
		cin>>book.nama[i];
		cout<<"Masukan Dari jam\t\t\t : ";
		cin>>book.mulai[i];
		cout<<"Sampai Jam\t\t\t\t : ";
		cin>>book.akhir[i];
		cout<<"Masukan Tanggal Penyewaan (DD/MM/YY)\t : ";
		cin>>book.tgl[i];
		cout<<endl<<endl;
	}
	cout<<endl;
	system("cls");
	cout<<"#1 Lihat Daftar Pembooking"<<endl;
	cout<<"#2 keluar"<<endl;
	cout<<"Pilih Menu : ";
	cin>>book.menu;
	cout<<endl;
	if(book.menu==1){
		system("cls");
		header2();
		for(int j=0;j<book.jml;j++){
			cout<<"Nama Pembooking\t\t\t\t : "<<book.nama[j]<<endl;
			cout<<"Lama Penyewaan\t\t\t\t : "<<book.akhir[j] - book.mulai[j]<<" jam"<<endl;
			cout<<"Booking dari jam "<<book.mulai[j]<< " sampe jam "<<book.akhir[j]<<endl;
			cout<<"Tanggal Sewa\t\t\t\t : "<<book.tgl[j]<<endl;
			book.tot=75000*(book.akhir[j]-book.mulai[j]);
			cout<<"Biaya Sewa\t\t\t\t : "<<book.tot;
			cout<<endl<<endl;			
		}
				cout<<"TERIMA KASIH";
				exit(0);
	}

	else if(book.menu == 2){
		cout<<"TERIMA KASIH";
		exit(0);
		
	}
	else{
		cout<<"MENU TIDAK ADA";
	}
}
