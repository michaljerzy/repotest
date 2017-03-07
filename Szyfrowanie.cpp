#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
  char t[95];  
  char s[95];  
  
  int i;
  int x;
  int y;
  int dlt,dls;  

    
  cout<<"Szyfr Vigenera \n";
    
  cout<<"\n\nTekst jawny:\n";
  
  cin.getline(t,95);  
  
  cout<<"\nPodaj haslo szyfrowania:\n";
  cin.getline(s,95);   
  
  
  dlt=strlen(t);
  dls=strlen(s);
  
  x=dls+1;
  y=0;
  s[x]=0;
  

  if(dlt>dls)
  {
             for(x = dls+1; x < dlt; x++)
             {
                     s[x]=s[y]; 
                     s[ x + 1 ] = 0;         
                     y++;
                     
                     if(y>=dls)
                               y=0;           
             }
  }      

  
  cout<<"tekst szyfrowania "<<s<<"\n";                
  
  
  
 
  for(i = 0; t[i]; i++)
  
    if(t[i] >= 'A' && t[i] <= 'Z' && s[i] >='A' && s[i]<= 'Z')
    {
        
        t[i]=t[i]+(s[i]-65);
        
                
    } 
    
  cout<<"Tekst po zaszyfrowaniu \n";

  cout<< t<<"\n" ;     
 
  return 0;
} 

