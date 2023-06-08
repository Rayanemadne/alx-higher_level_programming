#!/usr/bin/python3

#RAYANE - MAD

if __name__ == "__main__":
    """ print the sum of arguments """
    import sys

    sum = 0
    for i in range(len(sys.argv) - 1):
        sum += int(sys.argv[i + 1])
    print("{}".format(sum))
