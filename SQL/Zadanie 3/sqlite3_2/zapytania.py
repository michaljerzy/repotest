#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza_sql.py

import sqlite3

def wyniki(cur):
    
    for row in wyniki:
        print(tuple(row))
        
def kw_a(cur):
    cur.execute("""
        SELECT  Imie, Nazwisko, tbKlasy.Klasa
        FROM tbUczniowie
        WHERE tbUczniowie.KlasaID = tbKlasy.IDKlasy
        AND tbKlasy.Klasa = '1A'
    """) 
    wyniki (cur.fetchall())

    

def kw_b(cur):
        
    cur.execute("""
        SELECT MAX(EgzHum)
        FROM tbUczniowie
    """ )
    
    wyniki (cur.fetchall())
  
def kw_c(cur):
        
    cur.execute("""
        SELECT AVG(EgzHum)
        FROM tbUczniowie, tbKlasy
        WHERE tbUczniowie.KlasaID = tbKlasy.IDKlasy
        AND tbKlasy.Klasa = '1A'
    """ )
    
    wyniki (cur.fetchall())
    
def kw_d(cur):
    cur.execute("""
        SELECT Imie, Nazwisko, Ocena
        From tbUczniowie, tbOceny
        WHERE tbOceny.UczenID = tbUczniowie.IDUcznia
        
        
    """ )
    
    
def main(args):
    con = sqlite3.connect('szkola.db')
    cur = con.cursor() #utworzenie kursora
    
    kw_c(cur)
    
      
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
