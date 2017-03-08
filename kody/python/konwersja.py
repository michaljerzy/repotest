#!/usr/bin/env python
# -*- coding: utf-8 -*-


def konwertuj(liczba10, podst):
    """
    Funkcja konwertuje liczbę dziesiętną na system o podanej podstawie.
    """
    # słowinik ze znakami cyfr większych od 9
    cyfry = {10: 'A', 11: 'B', 12: 'C', 13: 'D', 14: 'E', 15: 'F'}

    reszty = []  # pusta liczba reszty
    while liczba10 > 0:
        reszty.append(liczba10 % podst)
        liczba10 = liczba10 / podst

    if podst > 10:
        reszty = [cyfry[x] if x > 9 else x for x in reszty]
    reszty.reverse()  # odwrócenie elementów listy
    return reszty

    def konDo10(liczba,podst):


   l iczba= int(raw_input("Podaj liczbę"))
    podst= int(raw_input("Podaj podstawe"))
    cyfry = "0123456789ABCDEF"

wynik = ""

while liczba > 0:

    wynik = cyfry[liczba % podst] + wynik

    liczbaDziesietna = liczba / podst

print wynik

def main(args):
    # liczba10 = int(raw_input("Podaj liczbę: "))
    # podst = int(raw_input("Podaj liczbę: "))

    # liczbaP = konwertuj(liczba10, podst)
    # liczbaP = [str(x) for x in liczbaP]
    # print "".join([str(x) for x in konwertuj(liczba10, podst)])

    podst = int(input("Podaj podstawe: "))
    liczba_podst = (input("Podaj liczbe: "))

    print (kon_10(liczba_podst.upper(), podst))


    return 0






if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
