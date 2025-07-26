#include <iostream>
using namespace std;
int main (){
 /*
int x=0;
int i;
int sum ;
cout << " enter how many term you want";
cin >>x;

for ( i=0; i<x;i++){
    sum+=1\pow( i+1 ;i+1);

}
cout <<" sum of series is "<<sum<< ;
*/



int quntity ,cost ;
int totalcost ;
cout <<"enter your quntity "<< endl ;
cin >> quntity ;

cost =100;
totalcost =quntity *cost ;

cout <<" cost for all your units equal " <<totalcost << endl;

if(totalcost>=1000){

   cout <<"the shop will give you 10% discount " << totalcost/10;

}

else {
    cout <<" total cost without discount"<< totalcost;
}


/*
int year ;
cout <<" enter the year";
cin >>year ;


if ( year>= '1' && year>='100')
cout <<" you are in the first century";

if ( year>= '101' &&year >='200')
cout <<" you are in the scound century";
if ( year>='201'&& year >='300')
cout <<" you are in the thirdth century";

if ( year>= '301'&& year >= '400')
cout <<" you are in the fourth century";

if ( year>= '401' && year >= '500')
cout <<" you are in the fifth century";




*/




return 0;
}
