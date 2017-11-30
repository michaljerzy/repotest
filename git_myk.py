#!/usr/bin/env python
# -*- coding: utf-8 -*-

def f(a, b):
    return (a + b)

def main(args):
    #adr = '/home/repotest/'
    #os.system(f('cd %s', adr))
    os.system( 'git status')
    print('\n')
    os.system('git add .')
    log = os.system('git commit -m .')
    if log != 256:
        os.system('git push')
        print('\n')
    os.system( 'git status')
    return 0

if __name__ == '__main__':
    import sys
    import os
sys.exit(main(sys.argv))
