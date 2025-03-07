#include <iostream>
#include <cmath>
#include <cstdlib>
int  main(){
using namespace std;
int a=0, b=0;
cout << "Vvedite dlinu  ";
cin >> a;
cout << "Vvedite shirinu  ";
cin >> b;
if (a>0 && b>0){
cout << "perimetr= " << 2*(a+b) << endl;
cout << "ploshad= " << a*b << endl;
cout << "dlina diagonali= "<< sqrt(a*a+b*b)<<endl;
}else cout<<"error"<<endl;
}
