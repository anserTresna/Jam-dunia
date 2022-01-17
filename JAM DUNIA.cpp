#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	time_t now = time(0);
	tm * ltm = localtime(&now);
	int negara;
	cout<<"\n\n\n\n-----PROGRAM SEDERHANA JAM DUNIA-----\n\n\n\n"<<endl;
		system("pause");
		system("cls");
	pilih:
	cout<<"=========================================="<<endl;
	cout<<"\t\tDaftar Negara		 |"<<endl;
	cout<<"=========================================="<<endl;
	cout<<"1. | Korea Selatan	|14.| Samoa	 |"<<endl;
	cout<<"2. | Jepang		|15.| Arab Saudi |"<<endl;
	cout<<"3. | Inggris		|16.| Singapura	 |"<<endl;
	cout<<"4. | Indonesia		|17.| Mesir	 |"<<endl;
	cout<<"5. | Rusia		|18.| Italia	 |"<<endl;
	cout<<"6. | Portugal		|19.| Malta	 |"<<endl;
	cout<<"7. | Hongkong		|20.| Serbia 	 |"<<endl;
	cout<<"8. | Bangladesh		|21.| Turki	 |"<<endl;
	cout<<"9. | China		|22.| Finlandia	 |"<<endl;
	cout<<"10.| Bahrain		|23.| Ukraina	 |"<<endl;
	cout<<"11.| Jerman		|24.| Irak	 |"<<endl;
	cout<<"12.| Qatar		|25.| Kenya	 |"<<endl;
	cout<<"13.| Romania		|26.| Pakistan	 |"<<endl;
	cout<<"=========================================="<<endl;
	cout<<endl;
	cout<<"\nMasukkan pilihan Negara (1..26): ";
	cin>>negara;
	system ("cls");
	switch(negara)
	{
		case 1:
		cout <<"\n\t=================== WAKTU DI Korea Selatan =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< +2 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 2:
		cout <<"\n\t=================== WAKTU DI JEPANG =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< +2 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 3:
		cout <<"\n\t=================== WAKTU DI INGGRIS =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -7 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 4:
		cout <<"\n\t=================== WAKTU DI INDONESIA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< 0 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
		case 5:
		cout <<"\n\t=================== WAKTU DI RUSIA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -4 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 6:
		cout <<"\n\t=================== WAKTU DI PORTUGAL =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -7 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 7:
		cout <<"\n\t=================== WAKTU DI HONGKONG =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< +1 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 8:
		cout <<"\n\t=================== WAKTU DI BANGLADESH =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -1 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 9:
		cout <<"\n\t=================== WAKTU DI CHINA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<< -1 + ltm->tm_mday << endl;
   		cout << " Time	: "<< +1 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 10:
		cout <<"\n\t=================== WAKTU DI BAHRAIN =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -4 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 11:
		cout <<"\n\t=================== WAKTU DI JERMAN =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -6 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 12:
		cout <<"\n\t=================== WAKTU DI QATAR =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -4 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 13:
		cout <<"\n\t=================== WAKTU DI RUMANIA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -5 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 14:
		cout <<"\n\t=================== WAKTU DI SAMOA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< +6 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 15:
		cout <<"\n\t=================== WAKTU DI ARAB SAUDI =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -4 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 16:
		cout <<"\n\t=================== WAKTU DI SINGAPURA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< +1 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		
   		break;case 17:
		cout <<"\n\t=================== WAKTU DI MESIR =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -5 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break; 
   		 
   		case 18:
		cout <<"\n\t=================== WAKTU DI ITALIA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -6 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break; 
   		
   		case 19:
		cout <<"\n\t=================== WAKTU DI MALTA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -6 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break; 
   		 
   		case 20:
		cout <<"\n\t=================== WAKTU DI SERBIA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -6 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 21:
		cout <<"\n\t=================== WAKTU DI TURKI =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -4 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 22:
		cout <<"\n\t=================== WAKTU DI FINLANDIA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -5 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 23:
		cout <<"\n\t=================== WAKTU DI UKRAINA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -5 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 24:
		cout <<"\n\t=================== WAKTU DI IRAK =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -4 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 25:
		cout <<"\n\t=================== WAKTU DI KENYA =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -4 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		case 26:
		cout <<"\n\t=================== WAKTU DI PAKISTAN =================== "<<endl;
   		cout << "\n Tahun 	: " << 1900 + ltm->tm_year<<endl;
   		cout << " Bulan	: "<< 1 + ltm->tm_mon<< endl;
   		cout << " Hari	: "<<  ltm->tm_mday << endl;
   		cout << " Time	: "<< -2 + ltm->tm_hour << ":";
   		cout << 0 + ltm->tm_min << ":";
   		cout << 1 + ltm->tm_sec << endl;
   		break;
   		
   		default:
   		cout << "Mohon maaf pilihan yang dimasukkan tidak tersedia [pilih 1-26]\n"<<endl;
   		break;
		   }
		system ("pause");
		system ("cls");
		goto pilih;
	}

