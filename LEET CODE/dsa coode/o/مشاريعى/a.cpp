#include <iostream>
using namespace std ;
int main (){
int n;
int*x=new int [n];

cout <<" enter array size " <<endl ;
cin >>n;
for ( int i=0;i<n;i++)
    {
    cout <<"array[ " <<i<<"] \n";
for ( int j=0;j<i;j++)
{
 int largest =arr[0] ;
if(arr[j]>largest){
    largest=arr[i];
    cout <<" largest is "<< largest ;

}
}
}











return 0;
}
