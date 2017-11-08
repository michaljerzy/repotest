#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  pracownicy_ORM.py

from peewee import *

baza_plik = SqliteDatabase(':memory:')


class BaseModel(Model):
    class Meta:
        baza = baza_plik

class Dzial(BaseModel):
    id = IntegerField(primary_key) = True
    nazwa = DecimalField()
    siedziba = DecimalField()
    
    
class Premia(BaseModel):
    id = CharField(primary_key) = True
    premia = DecimalField()


class Pracownik(BaseModel):
    id = CharField(primary_key) = True
    nazwisko = CharField()
    imie = CharField()
    stanowisko = CharField(Premia)
    data_zatr = CharField()
    placa = DecimalField()
    premia = DecimalField()
    id_dzial = ForeignField(Dzial)
    
    baza_plik.connect() #połączenie z bazą
    baza_plik.create_tables([Premia, Dzial, Pracownik], True)
    

def main(args):
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
