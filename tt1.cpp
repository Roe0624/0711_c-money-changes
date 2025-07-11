#include<iostream>
    int main(){
    //販賣機找零，328元，分別100/50/10/5/1零錢:

        int cgs =328;
        int h = cgs/100;
        int h2 = cgs%100;
        int t = h2/10;
        int fifty = t/5;
        int d2 = h2%10;
        int five = d2/5;
        int d =d2-5;

        std::cout<<"100*"<<h<<",50*"<<fifty<<",10*"<<t<<",5*"<<five<<",1*"<<d<<std::endl;
       
        return 0;
    }