#include<iostream>
#include<string>
#include<cstdio>
using namespace std;

int main(){
    float avg_rainMeskerem, avg_rainTikimt, avg_rainHidar, avg_rainTahsas, avg_rainTir, avg_rainYekatit, avg_rainMegabit, avg_rainMiazya, avg_rainGunbot, avg_rainSene, avg_rainHamle, avg_rainNehase, avg_yrly; 
    int choice;
    string month1 = "Meskerem";
    string month2 = "Tikimt";
    string month3 = "Hidar";
    string month4 = "Tahsas";
    string month5 = "Tir";
    string month6 = "Yekatit";
    string month7 = "Megabit";
    string month8= "Miazya";
    string month9 = "Gunbot";
    string month10 = "Sene";
    string month11 = "Hamle";
    string month12= "Nehase";
    //string choice;the month choosen by the user

    cout<<"Enter 1  for \t Meskerem"<<endl;
    cout<<"Enter 2  for \t Tikimt"<<endl;
    cout<<"Enter 3  for \t Hidar"<<endl;
    cout<<"Enter 4  for \t Tahsas"<<endl;
    cout<<"Enter 5  for \t Tir"<<endl;
    cout<<"Enter 6  for \t Yekatit"<<endl;
    cout<<"Enter 7  for \t Megabit"<<endl;
    cout<<"Enter 8  for \t Miazya"<<endl;
    cout<<"Enter 9  for \t Gunbot"<<endl;
    cout<<"Enter 10 for \t Sene"<<endl;
    cout<<"Enter 11 for \t Hamle"<<endl;
    cout<<"Enter 12 for \t Nehase"<<endl;

    cout<<"\nEnter the current month: ";
    cin>>choice;

    /*if(choice == "Meskerem" || choice == "meskerem"){
    string month2 = "Tikimt";
    string month3 = "Hidar";
    string month4 = "Tahsas";
    string month5 = "Tir";
    string month6 = "Yekatit";
    string month7 = "Miazya";
    string month8= "Miazya";
    string month9 = "Gunbot";
    string month10 = "Sene";
    string month11 = "Hamle";
    string month12= "Nehase";
    }
cout<<month1;*/

    if(choice == 1){
        cout<<"Enter the monthly rainfall for Meskerem: ";
        cin>>avg_rainMeskerem;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<month12<<": ";
        cin>>avg_rainNehase;
        cout<<endl<<month11<<": ";
        cin>>avg_rainHamle;
        cout<<endl<<month10<<": ";
        cin>>avg_rainSene;
        cout<<endl<<month9<<": ";
        cin>>avg_rainGunbot;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
        cout<<endl<<month5<<": ";
        cin>>avg_rainTir;
        cout<<endl<<month4<<": ";
        cin>>avg_rainTahsas;
        cout<<endl<<month3<<": ";
        cin>>avg_rainHidar;
        cout<<endl<<month2<<": ";
        cin>>avg_rainTikimt;
    }

    else if(choice == 2){
        cout<<"Enter the monthly rainfall for Tikimt: ";
        cin>>avg_rainTikimt;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<endl<<month1<<": ";
        cin>>avg_rainMeskerem;
        cout<<endl<<month12<<": ";
        cin>>avg_rainNehase;
        cout<<endl<<month11<<": ";
        cin>>avg_rainHamle;
        cout<<endl<<month10<<": ";
        cin>>avg_rainSene;
        cout<<endl<<month9<<": ";
        cin>>avg_rainGunbot;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
        cout<<endl<<month5<<": ";
        cin>>avg_rainTir;
        cout<<endl<<month4<<": ";
        cin>>avg_rainTahsas;
        cout<<endl<<month3<<": ";
        cin>>avg_rainHidar;
    }    

    else if(choice == 3){
        cout<<"Enter the monthly rainfall for Hidar: ";
        cin>>avg_rainHidar;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<endl<<month2<<": ";
        cin>>avg_rainTikimt;
        cout<<endl<<month1<<": ";
        cin>>avg_rainMeskerem;
        cout<<endl<<month12<<": ";
        cin>>avg_rainNehase;
        cout<<endl<<month11<<": ";
        cin>>avg_rainHamle;
        cout<<endl<<month10<<": ";
        cin>>avg_rainSene;
        cout<<endl<<month9<<": ";
        cin>>avg_rainGunbot;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
        cout<<endl<<month5<<": ";
        cin>>avg_rainTir;
        cout<<endl<<month4<<": ";
        cin>>avg_rainTahsas;
    }    

    else if(choice == 4){
        cout<<"Enter the monthly rainfall for Tahsas: ";
        cin>>avg_rainTahsas;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<endl<<month3<<": ";
        cin>>avg_rainHidar;
        cout<<endl<<month2<<": ";
        cin>>avg_rainTikimt;
        cout<<endl<<month1<<": ";
        cin>>avg_rainMeskerem;
        cout<<endl<<month12<<": ";
        cin>>avg_rainNehase;
        cout<<endl<<month11<<": ";
        cin>>avg_rainHamle;
        cout<<endl<<month10<<": ";
        cin>>avg_rainSene;
        cout<<endl<<month9<<": ";
        cin>>avg_rainGunbot;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
        cout<<endl<<month5<<": ";
        cin>>avg_rainTir;
    }    

    else if(choice == 5){
        cout<<"Enter the monthly rainfall for Tir: ";
        cin>>avg_rainTir;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<endl<<month4<<": ";
        cin>>avg_rainTahsas;
        cout<<endl<<month3<<": ";
        cin>>avg_rainHidar;
        cout<<endl<<month2<<": ";
        cin>>avg_rainTikimt;
        cout<<endl<<month1<<": ";
        cin>>avg_rainMeskerem;
        cout<<endl<<month12<<": ";
        cin>>avg_rainNehase;
        cout<<endl<<month11<<": ";
        cin>>avg_rainHamle;
        cout<<endl<<month10<<": ";
        cin>>avg_rainSene;
        cout<<endl<<month9<<": ";
        cin>>avg_rainGunbot;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
}

  else if(choice == 6){
        cout<<"Enter the monthly rainfall for Yekatit: ";
        cin>>avg_rainYekatit;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<endl<<month5<<": ";
        cin>>avg_rainTir;
        cout<<endl<<month4<<": ";
        cin>>avg_rainTahsas;
        cout<<endl<<month3<<": ";
        cin>>avg_rainHidar;
        cout<<endl<<month2<<": ";
        cin>>avg_rainTikimt;
        cout<<endl<<month1<<": ";
        cin>>avg_rainMeskerem;
        cout<<endl<<month12<<": ";
        cin>>avg_rainNehase;
        cout<<endl<<month11<<": ";
        cin>>avg_rainHamle;
        cout<<endl<<month10<<": ";
        cin>>avg_rainSene;
        cout<<endl<<month9<<": ";
        cin>>avg_rainGunbot;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
}  

else if(choice == 7){
        cout<<"Enter the monthly rainfall for Megabit: ";
        cin>>avg_rainMegabit;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
        cout<<endl<<month5<<": ";
        cin>>avg_rainTir;
        cout<<endl<<month4<<": ";
        cin>>avg_rainTahsas;
        cout<<endl<<month3<<": ";
        cin>>avg_rainHidar;
        cout<<endl<<month2<<": ";
        cin>>avg_rainTikimt;
        cout<<endl<<month1<<": ";
        cin>>avg_rainMeskerem;
        cout<<endl<<month12<<": ";
        cin>>avg_rainNehase;
        cout<<endl<<month11<<": ";
        cin>>avg_rainHamle;
        cout<<endl<<month10<<": ";
        cin>>avg_rainSene;
        cout<<endl<<month9<<": ";
        cin>>avg_rainGunbot;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
} 

    else if(choice == 8){
        cout<<"Enter the monthly rainfall for Miazya: ";
        cin>>avg_rainMiazya;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
        cout<<endl<<month5<<": ";
        cin>>avg_rainTir;
        cout<<endl<<month4<<": ";
        cin>>avg_rainTahsas;
        cout<<endl<<month3<<": ";
        cin>>avg_rainHidar;
        cout<<endl<<month2<<": ";
        cin>>avg_rainTikimt;
        cout<<endl<<month1<<": ";
        cin>>avg_rainMeskerem;
        cout<<endl<<month12<<": ";
        cin>>avg_rainNehase;
        cout<<endl<<month11<<": ";
        cin>>avg_rainHamle;
        cout<<endl<<month10<<": ";
        cin>>avg_rainSene;
        cout<<endl<<month9<<": ";
        cin>>avg_rainGunbot;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
} 

else if(choice == 9){
        cout<<"Enter the monthly rainfall for Gunbot: ";
        cin>>avg_rainGunbot;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
        cout<<endl<<month5<<": ";
        cin>>avg_rainTir;
        cout<<endl<<month4<<": ";
        cin>>avg_rainTahsas;
        cout<<endl<<month3<<": ";
        cin>>avg_rainHidar;
        cout<<endl<<month2<<": ";
        cin>>avg_rainTikimt;
        cout<<endl<<month1<<": ";
        cin>>avg_rainMeskerem;
        cout<<endl<<month12<<": ";
        cin>>avg_rainNehase;
        cout<<endl<<month11<<": ";
        cin>>avg_rainHamle;
        cout<<endl<<month10<<": ";
        cin>>avg_rainSene;
} 

else if(choice == 10){
        cout<<"Enter the monthly rainfall for Sene: ";
        cin>>avg_rainSene;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<endl<<month9<<": ";
        cin>>avg_rainGunbot;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
        cout<<endl<<month5<<": ";
        cin>>avg_rainTir;
        cout<<endl<<month4<<": ";
        cin>>avg_rainTahsas;
        cout<<endl<<month3<<": ";
        cin>>avg_rainHidar;
        cout<<endl<<month2<<": ";
        cin>>avg_rainTikimt;
        cout<<endl<<month1<<": ";
        cin>>avg_rainMeskerem;
        cout<<endl<<month12<<": ";
        cin>>avg_rainNehase;
        cout<<endl<<month11<<": ";
        cin>>avg_rainHamle;
}

    else if(choice == 11){
        cout<<"Enter the monthly rainfall for Hamle: ";
        cin>>avg_rainHamle;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<endl<<month10<<": ";
        cin>>avg_rainSene;
        cout<<endl<<month9<<": ";
        cin>>avg_rainGunbot;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
        cout<<endl<<month5<<": ";
        cin>>avg_rainTir;
        cout<<endl<<month4<<": ";
        cin>>avg_rainTahsas;
        cout<<endl<<month3<<": ";
        cin>>avg_rainHidar;
        cout<<endl<<month2<<": ";
        cin>>avg_rainTikimt;
        cout<<endl<<month1<<": ";
        cin>>avg_rainMeskerem;
        cout<<endl<<month12<<": ";
        cin>>avg_rainNehase;
}

    else if(choice == 12){
        cout<<"Enter the monthly rainfall for Nehase: ";
        cin>>avg_rainNehase;
        cout<<"Enter the monthly rainfall for the the previous months"<<endl;
        cout<<endl<<month11<<": ";
        cin>>avg_rainHamle;
        cout<<endl<<month9<<": ";
        cin>>avg_rainGunbot;
        cout<<endl<<month8<<": ";
        cin>>avg_rainMiazya;
        cout<<endl<<month7<<": ";
        cin>>avg_rainMegabit;
        cout<<endl<<month6<<": ";
        cin>>avg_rainYekatit;
        cout<<endl<<month5<<": ";
        cin>>avg_rainTir;
        cout<<endl<<month4<<": ";
        cin>>avg_rainTahsas;
        cout<<endl<<month3<<": ";
        cin>>avg_rainHidar;
        cout<<endl<<month2<<": ";
        cin>>avg_rainTikimt;
        cout<<endl<<month1<<": ";
        cin>>avg_rainMeskerem;
}

    avg_yrly = (avg_rainMeskerem + avg_rainTikimt + avg_rainHidar + avg_rainTahsas + avg_rainTir + avg_rainYekatit + avg_rainMegabit + avg_rainMiazya + avg_rainGunbot + avg_rainSene + avg_rainHamle + avg_rainNehase ) / 12;

}