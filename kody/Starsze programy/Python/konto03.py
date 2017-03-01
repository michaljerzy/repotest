#!/usr/bin/env python
# -*- coding: utf-8 -*-


class Konto(object):
    def __init__(self, ile=0):
        self.bilans = ile

    def wplata(self, ile):
        self.bilans += ile
        return self.bilans

    def wyplata(self, ile):
        self.bilans -= ile
        return self.bilans

class KontoMinimum(Konto):
    pass

osoba1 = KontoMinimum()
osoba2 = KontoMinimum(ile=100)
osoba1.wplata(200)
osoba2.wplata(900)
osoba1.wyplata(40)
osoba2.wyplata(50)

print osoba1.bilans
print osoba2.bilans
