#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# Obsługa konta

def utworzKonto():
    return {'bilans': 0}  # słownik!!!

def wplata(konto, ile):
    konto['bilans'] += ile
    return konto['bilans']

def wyplata(konto, ile):
    konto['bilans'] -= ile
    return konto['bilans']

osoba1 = utworzKonto()
osoba2 = utworzKonto()

ile = int(raw_input("Wpłata 1:"))
print "Konto:", wplata(osoba1, ile)

ile = int(raw_input("Wpłata 2:"))
print "Konto:", wplata(osoba2, ile)

ile = int(raw_input("Wypłata 1:"))
print "Konto:", wyplata(osoba1, ile)

ile = int(raw_input("Wypłata 2:"))
print "Konto:", wyplata(osoba2, ile)
