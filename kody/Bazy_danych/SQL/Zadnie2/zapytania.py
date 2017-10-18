#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  baza_sql.py

import sqlite3


def kw_d(cur):
    cur.execute("""
        SELECT  dzial.id, dzial.nazwa, nazwisko, imie 
        FROM dzial, pracownicy
        WHERE dzial.id = pracownicy.id_dzial
    """)

    wyniki = cur.fetchall()
    for rekord in wyniki:
        print(tuple(rekord))

def main(args):
    con = sqlite3.connect('pracownicy.sqlite3')
    cur = con.cursor() #utworzenie kursora
    
    kw_d(cur)
      
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
