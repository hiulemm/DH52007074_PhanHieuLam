#include iostream
using namespace std;
int kiemtrasochinhphuong(int n){
    if(sqrt(n)*sqrt(n)==n)
    return 0;
    else return 1;
}
void main (){
    int n;
    cout<< "nhap n";
    cin>>n;
    if(kiemtrasochinhphuong == 0)
    {
        return cout<< "la so chinh phuong";
    }
    else {
        return cout<< "khong phai chinh phuong";
    }
    
}