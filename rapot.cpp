#include <iostream>
#include <windows.h>
#include <ctime>
#include <string>
 using namespace std;
  int main(){
  	
  	  system("COLOR 2");
  	  
  	  cout<<"SISTEM PENENTU KENAIKAN SISWA"<<endl;
  	   for (int j = 0; j < 3; j++) {
  	   	 cout<<".";
  	   	 sleep(1);
		 }
  	  
		int kkm;
  	  cout<<"\n mohon masukan nilai kkm = "<<endl;
  	  cin>> kkm;
  	  
  	  
  	  for (int b = 0; b < 4; b++) {
		
  	  cout<<".";
  	  sleep(1);
  	  
  }
  
  	  
  	  string nama;
  	  cout<<"\n masukan nama siswa = "<<endl;
  	  cin>> nama;
  	  
  	  int nilai;
  	  while (true) {
  	  cout<<"masukan nilai siswa = "<<endl;
  	  cin>> nilai;
  	  
  	 cout<<"menentukan........\n"<<endl;
  	 for (int i = 0; i < 5; i++) {
    cout << ".";
    Sleep(200);
    }
    
    
    if ( nilai >= kkm) {
    	cout<< nama << " SELAMAT DI NYATAKAN NAIK KELAS!!"<<endl;
    	
	}
	  else if ( nilai == kkm){
	  	cout<< nama << " DI NYATAKAN NAIK  KELAS!!"<<endl;
	  	cout<< "anda berada di kkm pas. terus belajar!!"<<endl;
	  }
	  
	  else if ( nilai != kkm){
	  	cout<< nama << " DI NYATAKAN TINNGAL KELAS!!"<<endl;
	  	cout<< " belajar yang rajin :)"<<endl;
    }
	   else  {
	   	cout<<"EROR 455 RETRY AGAIN"<<endl;
	   }
	  
	  sleep(10);
	  system("CLS");
	  
	  cout<<"\nSoftware ini di buat oleh CaitroniaDev. Free open-scoure 2024"<<endl;
	  
	  return 0;
  }
}
