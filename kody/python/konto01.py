#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
# Obsługa konta

bilans = 0  # stan konta

ile = int(raw_input("Wpłata:"))
bilans += ile
print "Konto:",bilans

ile = int(raw_input("Wypłata:"))
bilans -= ile
print "Konto:",bilans
