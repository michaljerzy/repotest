#!/usr/bin/env python
# -*- coding: utf-8 -*-



#~def main(args):
    #~return 0

#~if __name__ == '__main__':
    #~import sys
    #~sys.exit(main(sys.argv))

teraz=2016
rok_pythona= 1991

imie= int(raw_input("Jak masz na imię?"))
wiek= int(raw_input("Ile masz lat?"))

rok_urodzenia = teraz-int (wiek)
wiek_pythona=teraz- rok_pythona

print "Cześć", imie, "Jestem Python!"
print "Urodziłeś się w %s roku!" %rok_urodzenia
print "Powstałem w %s roku i mam %s lat." %(rok_pythona, wiek_pythona)

