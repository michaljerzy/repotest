#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  hello.py
#  
#  Copyright 2017  <>

ROK_TERAZ = 2017
ROK_PY = 1991
def parzyste(n):
    i = list(range(0 , n+1, 2))
    print (i, " ")
    print(ile)
    return len(ile)

def main(args):
    
    imie =  input("Podaj imię: ")
    
    print("Witam ", imie)
    wiek =  int(input("Podaj wiek: "))
    print("Wiek: ", wiek)
    rok=ROK_TERAZ-wiek
    if(rok>ROK_PY):
        print("Jesteś młodszy od języka PY")
    elif(rok<ROK_PY):
        print("Jesteś starszy od języka PY")
    elif(rok==ROK_PY):
        print("Mamy tyle samo lat")
    
    n = int(input("Podaj liczbę :"))
    print ("Parzyste: ", parzyste(n))
        
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
