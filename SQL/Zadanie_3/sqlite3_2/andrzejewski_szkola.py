#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza_sql.py

import sqlite3
    
    
def wyniki(cur):
    wyniki = cur.fetchall() #pobierz wszystkie wiersze
    for row in wyniki:
        print(tuple(row))
        
def kw_a(cur):
    cur.execute("""
        SELECT  Imie, Nazwisko, Klasa
        FROM tbUczniowie, tbKlasy
        WHERE tbUczniowie.KlasaID = tbKlasy.IDKlasy
        AND tbKlasy.Klasa = '1A'
    """) 
    wyniki(cur)
    
def kw_b(cur):
        
    cur.execute("""
        SELECT MAX(EgzHum)
        FROM tbUczniowie
    """ )
    
    wyniki(cur)
  
def kw_c(cur):
        
    cur.execute("""
        SELECT AVG(EgzMat)
        FROM tbUczniowie, tbKlasy
        WHERE tbUczniowie.KlasaID = tbKlasy.IDKlasy
        AND tbKlasy.Klasa = '1A'
    """ )
    
    wyniki(cur)
    
def kw_d(cur):
    cur.execute("""
        SELECT Imie, Nazwisko, Ocena
        From tbUczniowie, tbOceny
        WHERE tbOceny.UczenID = tbUczniowie.IDUcznia
        AND tbUczniowie.Nazwisko = 'Nowak'
    """ )
    
    wyniki(cur)
    
def kw_e(cur):
    cur.execute("""
    SELECT AVG(tbOceny.Ocena)
    FROM tbOceny, tbPrzedmioty
    WHERE tbOceny.PrzedmiotID = tbPrzedmioty.IDPrzedmiotu
    AND tbPrzedmioty.Przedmiot = 'fizyka'
    AND tbOceny.Datad > '2012-10-01'
    AND tbOceny.Datad < '2012-10-31'
    """ )
    wyniki(cur)
    
def main(args):
    con = sqlite3.connect('szkola.db')
    cur = con.cursor() #utworzenie kursora
    kw_a(cur)
    kw_b(cur)
    kw_c(cur)
    kw_d(cur)
    kw_e(cur)
    
      
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
