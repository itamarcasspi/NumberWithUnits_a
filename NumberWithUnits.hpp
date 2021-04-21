#pragma once
#include <iostream>
#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>


using namespace std;

namespace ariel{

        class NumberWithUnits{

            private:

            double value;
            string unit;

            public:

            NumberWithUnits(double val ,string uni){
                value = val;
                unit = uni;
            }

            static void read_units(ifstream& file_name);
//6 arithmetic operators
            friend NumberWithUnits& operator+(const NumberWithUnits& a , const NumberWithUnits& b);

            friend NumberWithUnits& operator+=(NumberWithUnits& a , const NumberWithUnits& b);

            friend NumberWithUnits& operator+(const NumberWithUnits& a);

            friend NumberWithUnits& operator-( const NumberWithUnits& a, const NumberWithUnits& b);
           
            friend NumberWithUnits& operator-=(NumberWithUnits& a , const NumberWithUnits& b);
            
            friend NumberWithUnits& operator-(const NumberWithUnits& a);

//6 comparisment operators

            friend bool operator>(const NumberWithUnits& a , const NumberWithUnits& b );

            friend bool operator>=(const NumberWithUnits& a , const NumberWithUnits& b );

            friend bool operator<(const NumberWithUnits& a , const NumberWithUnits& b );

            friend bool operator<=(const NumberWithUnits& a , const NumberWithUnits& b);

            friend bool operator==(const NumberWithUnits& a , const NumberWithUnits& b);

            friend bool operator!=(const NumberWithUnits& a , const NumberWithUnits& b);
             
//increment decrement operators 

            friend NumberWithUnits& operator++( NumberWithUnits& a);  //prefix

            friend NumberWithUnits& operator++( NumberWithUnits& a, int);//postfix

            friend NumberWithUnits& operator--( NumberWithUnits& a); //prefix
                     
            friend NumberWithUnits& operator--( NumberWithUnits& a, int);  //postfix
            
//multiplication operator

            friend NumberWithUnits& operator*(NumberWithUnits& a ,double b);  
            friend NumberWithUnits& operator*(double b ,NumberWithUnits& a );
          

//Input output operators

            friend ostream& operator<<(ostream& os , const NumberWithUnits& a);

            friend istream& operator>>(istream& is , NumberWithUnits& a);

            
        


    };    
    
}