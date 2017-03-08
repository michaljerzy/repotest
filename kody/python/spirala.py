#!/usr/bin/env python
# -*- coding: utf-8 -*-

from turtle import *

def spirala(bok, kat, przyrosty, warunek):
    forward(bok)
    right(kat)
    if kat < warunek:
        spirala(bok, kat + przyrosty, przyrosty, warunek)

def spirala2(bok, kat, warunek):
    forward(bok)
    right(kat)
    if bok < warunek:
        spirala2(bok+3, kat, warunek)

def spirala3(wielkosc, stopien):
    if stopien==0:
        (wielkosc, stopien)
        forward(wielkosc)
        return
    spirala3(wielkosc, stopien-1)
    right(10)
    spirala3(wielkosc, stopien-1)
    left(100)


def main(args):
    speed(0)
    #spirala(30,10,20,740)
    pencolor("pink")
    #spirala2(8,240,10)
    spirala3(6,100)

    done()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
