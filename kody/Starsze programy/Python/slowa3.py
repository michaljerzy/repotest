#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  Zgadnij słowa
#

import os
import json
from random import randint

def pobierzSlowa():
    """Funkcja pobiera od użytkownika kolejne słowa i dodaje do listy"""
    slowa = []  # pusta lista
    ile = int(raw_input("Ile słów podasz?"))
    for i in range(ile):
        slowo = raw_input("Podaj słowo: ") decode("utf-8")
        slowa.append(slowo.strip().lower())

    return slowa


def zapiszDane(dane, plik):
    """Funkcja zapisuje podaną listę w pliku w formacie json"""
    plik = open(plik, "w")
    json.dump(dane, plik)
    plik.close()


def wczytajDane():
    """Funkcja wczytuje listę w formacie json z podanego pliku"""
    dane = []
    nazwa = raw_input("Podaj nazwę pliku lub naciśnij Enter dla nowej listy: ")
    if os.path.isfile(nazwa):
        plik = open(nazwa, "r")
        dane = json.load(plik)
        plik.close()
    elif nazwa:
        print "Plik nie istnieje"

    return dane

def pokazSlowa(slowa):
    """Funkcja drukuje pobraną listę słów"""
    #~for i in range(len(slowa)):
        #~print slowa[i]
    for slowo in slowa:
        print slowo

def losujSlowo(slowa):
    """Funkcja losuje słowo z podanej listy"""
    i = randint(0, len(slowa) - 1)
    return slowa[i]


def wezWyraz(slowo, ilepustych):
    """Funkcja zwraca wyraz z zadaną ilością pustych miejsc"""
    indeksy = []
    while True:  # pętla nieskończona
        indeks = randint(0, len(slowo) - 1)
        if indeks not in indeksy:
            indeksy.append(indeks)
            ilepustych -= 1
            if ilepustych == 0:
                break
    print indeksy
    odgadnij = []
    for i in range(len(slowo)):
        if i in indeksy:
            odgadnij.append("_")
        else:
            odgadnij.append(slowo[i])
    return "".join(odgadnij)


def main(args):
    slowa = wczytajDane()
    if not slowa:
        slowa = pobierzSlowa()  # pobranie listy słów od użytkownika
        zapiszDane(slowa, "slowa.txt")
    # pokazSlowa(slowa)
    punkty = 0



    for i in range(len(slowa)):
        slowo = losujSlowo(slowa)
        slowa.remove(slowo)

        while True:
            ilepustych = raw_input("Ile liter odgadniesz (max %s)?" % len(slowo))
            if ilepustych.isdigit() and int(ilepustych) <= len(slowo):
                break

        odgadnij = wezWyraz(slowo, int(ilepustych))
        print "Co to za słowo?", odgadnij
        punkty += int(ilepustych)
        odp = raw_input("Twój typ: ")

        while odp.decode("utf-8").lower() != slowo:
            print "Błąd"
            odgadnij = wezWyraz(slowo, int(ilepustych))
            print "Co to za słowo?", odgadnij
            punkty -= 1
            odp = raw_input("Twój typ: ")

        print "Zgadłeś!"

    print "Punktów:", punkty

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
