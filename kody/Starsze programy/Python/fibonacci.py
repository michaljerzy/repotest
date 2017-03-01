#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#

def fib_it(m):
     wynik, a, b = 0, 0, 1

    for i in range(0, m -1):
        wynik = a + b
        print i + 1, wynik
        a, b = b, wynik
    return wynik



def main(args):
    n = int( raw_input("Podaj miesiąc: "))
    print "Fibonacci", fib_it(n)
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
