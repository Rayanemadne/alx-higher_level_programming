#!/usr/bin/python3
# RAYANE - MAD
def max_integer(my_list=[]):
    if len(my_list) == 0:
        return "None"
    else:
        max = 0
        for i in range(len(my_list)):
            if my_list[i] > my_list[i + 1]:
                max = my_list[i]
        return max
