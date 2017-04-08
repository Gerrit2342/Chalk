//
//  main.cpp
//  Chalk
//
//  Created by Gerrit Albert on 06.04.17.
//  Copyright © 2017 Gerrit Albert. All rights reserved.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;


class Display {
    private: int xRes, yRes;
    float diagSize; // Diagonale in Zoll
    string aspect;
    
public:
    Display(int,int,float,string);
    Display(int,int,float);
    ~Display();
    void setxRes(int);
    void setyRes(int);
    void setdiagSize(float);
    void setAspect(string);
    
    string returnRes();
    string returnAspect();
    float DPI();
    
};

Display::Display (int x,int y,float size, string ratio){
    xRes=x;
    yRes=y;
    diagSize=size;
    aspect=ratio;
    
}

Display::Display (int x,int y,float size){
    xRes=x;
    yRes=y;
    diagSize=size;
    
}
Display::~Display () {
    
}

float Display::DPI() {
    
    return (sqrt((xRes*xRes)+(yRes*yRes)))/diagSize;
}



int main(int argc, const char * argv[]) {
    Display *dis;
    
    int x,y;
    float size;
    
    cout<<"Bitte Maße eingeben"<<endl;
    
    cin>>x;
    cin>>y;
    cin>>size;
    
    
    dis= new Display(x,y,size);
   
    
    cout<<"DPI is "<<round(dis->DPI())<<endl;
    
    return 0;
}




