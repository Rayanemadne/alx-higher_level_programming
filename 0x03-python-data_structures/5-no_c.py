#!/usr/bin/env python3

def no_c(my_string):
    noc_string = ""
    for char in my_string:
        if char.lower() != 'c':
            noc_string += char
    return noc_string
