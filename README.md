## Overview
This comprises of all the problem sets from the course CS50 from edx.org (https://www.edx.org/course/cs50s-introduction-computer-science-harvardx-cs50x).

This course covers C, Python and Javascript. Each directory is a problem set that has passed all the `check50` upon submission.

## Problem Set Overview
- [Problem Set 1](#problem-set-1)
- [Problem Set 2](#problem-set-2)
- [Problem Set 3](#problem-set-3)
- [Problem Set 4](#problem-set-4)
- [Problem Set 5](#problem-set-5)

### Problem Set 1
#### hello
An introduction to C where it returns a "Hello, world" greeting to the user.

Example output:
```
  $ ./hello
  hello, world
```

#### mario-less
Prompts user for a number between 0 and 23 and prints out the specified number of height in the shape of a half pyramid.

Example output:
```
  $ ./mario-less
  Height: 3
    ##
   ###
  ####
```

#### mario-more
A more complicated implementation of [mario-less](#markdown-header-mario-less) in which it prints out a double half-pyramid of the specified height.

Example output:
```
  $ ./mario-more
  Height: 4
     #  #
    ##  ##
   ###  ###
  ####  ####
```

### Problem Set 2
#### caesar
Caesar's cipher encrypts an user provided string with a non-negative integer key. Each character is rotated by a specified `k` position down the alphabet. Using the algorithm:

c<sub>i</sub> = (p<sub>i</sub> + k) % 26

Example output:
```
  $ ./caesar 1
  plaintext:  HeLLo
  ciphertext: IfMMp
```
#### vigenere
Vigenère’s cipher improves upon Caesar’s cipher by encrypting messages using a sequence of keys or a keyword.

For example if k is a keyword like `ABC` where A is 0, B is 1, and so on, then each letter, c<sub>i</sub>, in the ciphertext, c, is computed as:

c<sub>i</sub> = (p<sub>i</sub> + k) % 26

Example output:
```
  $ ./vigenere ABC
  plaintext:  HELLO
  ciphertext: HFNLP
```
