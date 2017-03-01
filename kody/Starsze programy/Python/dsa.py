#!/usr/bin/env python
# -*- coding: utf-8 -*-


def main(args):
    liczbaDziesietna = int(raw_input())

    wynik = ""

    while liczbaDziesietna > 0:
        wynik = str(liczbaDziesietna % 2) + wynik
        liczbaDziesietna = liczbaDziesietna / 2
    print wynik

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
