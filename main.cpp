#include <iostream>
#include <windows.h>
using namespace std;
struct time{
    int hr , mint ,sec;
};
int main()
{
    string tim;
time value;
value.hr = 0;
value.mint =0;
value.sec =0;
  for(int i = 0; i<24 ; i++){
    if (value.hr ==23){
        value.hr =0;
    }
     if(value.hr >12){
        value.hr = value.hr - 12;
        tim = "PM";
    }
    else{
        tim = "AM";
    }
   for(int j=0;j<60; j++){
    if(value.mint == 59){
        value.mint = 0;
    }
    for(int k=0 ; k<60; k++){
        if(value.sec == 59){
          value.sec = 0;
        }
        cout<< value.hr << ":" << value.mint << ":" << value.sec << tim << endl;
        value.sec++;
        Sleep(1000);
        system("Cls");
     }
     value.mint++;
   }
   value.hr++;
  }
}
