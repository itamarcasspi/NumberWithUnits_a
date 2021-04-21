#include "NumberWithUnits.hpp"
using namespace std;

namespace ariel{

            NumberWithUnits t(0,"0");
            void NumberWithUnits::read_units(ifstream& file_name)
            {

            }
//6 arithmetic operators
             NumberWithUnits& operator+(const NumberWithUnits& a , const NumberWithUnits& b)
            {
                return t;
            }

             NumberWithUnits& operator+=(NumberWithUnits& a , const NumberWithUnits& b)
            {
                return t;
            }

             NumberWithUnits& operator+(const NumberWithUnits& a)
            {
                return t;
            }

             NumberWithUnits& operator-(const NumberWithUnits& a, const NumberWithUnits& b)
            {
                return t;
            }
           
             NumberWithUnits& operator-=(NumberWithUnits& a , const NumberWithUnits& b)
            {
                return t;
            }
            
             NumberWithUnits& operator-(const NumberWithUnits& a)
            {
                return t;
            }

//6 comparisment operators

             bool operator>(const NumberWithUnits& a , const NumberWithUnits& b )
            {
                return false;
            }

             bool operator>=(const NumberWithUnits& a , const NumberWithUnits& b )
            {
                return false;
            }

             bool operator<(const NumberWithUnits& a , const NumberWithUnits& b )
            {
                return false;
            }

             bool operator<=(const NumberWithUnits& a , const NumberWithUnits& b)
            {
                return false;
            }

             bool operator==(const NumberWithUnits& a , const NumberWithUnits& b)
            {
                return false;
            }

             bool operator!=(const NumberWithUnits& a , const NumberWithUnits& b)
            {
                return false;
            }
             
//increment decrement operators 

             NumberWithUnits& operator++( NumberWithUnits& a)
            {
                return t;
            }
             NumberWithUnits& operator++( NumberWithUnits& a, int)
            {
                return t;
            }

             NumberWithUnits& operator--( NumberWithUnits& a)
            {
                return t;
            }
                     
             NumberWithUnits& operator--( NumberWithUnits& a, int)
            {
                return t;
            }
            
//multiplication operator

             NumberWithUnits& operator*(NumberWithUnits& a ,double b)
            {
                return t;
            }  

             NumberWithUnits& operator*(double b ,NumberWithUnits& a )
            {
                return t;
            }  
          

//Input output operators

             ostream& operator<<(ostream& os , const NumberWithUnits& a)
            {
                return os;
            }

             istream& operator>>(istream& is , NumberWithUnits& a)
            {
                return is;
            }

            
        


       
    
}