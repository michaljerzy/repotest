/*
 * formatowanie.cpp
 * 
 * Copyright 2018  <>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdio>

using namespace std;


int main(int argc, char **argv)
{
    float lf = 12.768;
    int li = 100;
    
    printf("Liczba Pi: %10.7f\n", M_PI);
    printf("Liczba LF: %10.7f\n", lf);
    printf("Liczba LI: %10.7f\n", (double)li);
    printf("Liczba LI: %+10i\n", li);
    printf("Hex LI: %#x\n", li);
    printf("Oct LI: %#o\n", li);
    
    cout << endl;
    cout.precision(5);
    cout.width(10);
    cout << lf << endl;
    
    cout<< setprecision(3) << setw(20) << setfill('_') << M_PI << endl; 
    cout<< setprecision(3) << setw(20) << left << M_PI << endl; 
     
	cout << hex << li << endl;
    cout << oct << li << endl;
	
    return 0;
}

