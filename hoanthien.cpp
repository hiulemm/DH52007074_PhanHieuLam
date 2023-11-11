#include iostream
using namespace std;
int kiemtrasohoanthien(int n){
    if(sqrt(n)*sqrt(n)==n)
    return 0;
    else return 1;
}
void main (){
    int n;
    cout<< "nhap n";
    cin>>n;
    if(kiemtrasohoanthien == 0)
    {
        return cout<< "la so hoanthien";
    }
    else {
        return cout<< "khong phai hoan thien";
    }
    
}