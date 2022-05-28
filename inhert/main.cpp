#include <iostream>

using namespace std;

class parent {
int x;
int y;
public:
    parent(int x1=0 ,int y1=0){
    x1 = x ;
    y1 = y;
    cout << "it's parent \n";
    }
int getx(){return x;}
int gety(){return y;}
int setx(int x1){x = x1;}
void sety(int y1){y = y1;}
int sum (){return x+y;}
};

class child : public parent
{
    int z;
public:
    child(int x1 ,int y1, int z1 =0) : parent(x1,y1){
    z =z1;
cout << "it's child\n";}

int getz(){return z;}
void setz (int z1){z = z1;}

    ///overloding
    int sum(){return getx()+ gety()+z;}
};
int main()
{
child c(10, 5 , 1);
cout<< c.sum()<<endl;


    return 0;
}
