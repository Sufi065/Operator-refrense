#include<iostream>
using namespace std;
class complex{
    private:
            int real;
            int imag;
    public:
           void print(){
               cout<<this->real<<" "<<" + "<<this->imag<<" i "<<endl;
           }
           void setvalues(int x,int y){
               this->real=x;
               this->imag=y;
           }
           complex(){
               real=0;
               imag=0;
               
           }
           complex(int a){
               real=imag=a;
           }
           complex(int a,int b){
               real=a;
               imag=b;
           }
           complex add(complex t){
               complex temp;   
               temp.real=real+t.real;
               temp.imag=imag+t.imag;
               return temp;
           }
           complex operator *(complex p){
               complex temp;
               temp.real=real + p.real;
               temp.imag=imag + p.imag;
               return temp;
           }
           complex operator *(int x){
               complex t;
               t.real=real*x;
               t.imag=imag*x;
               return t;
           }
           complex& operator ++(){
               real=real+1;
               imag=imag+1;
               return *this;
           }
};
int main(){

int i=5,j;
j=++(++i);
cout<<i<<" "<<j<<endl;
complex c1,c2,c3,c4;
c1.setvalues(2,3);
// c2.setvalues(4,5);
// // c3=c1+c2;
// // c3=c1.operator *(c2);
// c3=c1*5;
c1.print();
// c2.print();
// c3.print();
c2=++c1;
++(++c1);
c1.print();
c2.print();
return 0;
}
