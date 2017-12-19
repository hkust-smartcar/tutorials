# C++ Programming - Basic - Assignment

Author: Peter Tse ([mcreng](http://www.github.com/mcreng))

This assignment should be attempted by **all** members, regardless of being a software/non-software members in internal competition period.

### Introduction

Bytes and bits are common to see in embedded system, since they are controlled by digital signals and they can only be represented by high (1) and low (0). In this assignment, you will be handling binary and hexadecimal numbers which are different formats the embedded system can accept. 

Copy the following header file and put it in `byte.h`. Your job is to finish the five function implementations.

### Provided Header

```C++
/* byte.h */
/* DO NOT CHANGE ANYTHING */
#include <cstdint>
#ifndef __BYTE_H_ //#ifndef - #define - #endif will be introduced in Intermediate tutorial
#define __BYTE_H_

typedef uint8_t Byte; // defining a new type 'Byte' to be equivalent to uint8_t

Byte set_bit(Byte byte, uint8_t n);
Byte reset_bit(Byte byte, uint8_t n);
bool get_bit(Byte byte, uint8_t n);
void print_bin(Byte byte);
void print_hex(Byte byte);

#endif
```

### Explanation

First, we define the digit number of the binary numbers.

```
0b11100111
  ^^^^^^^^
  76543210
```

Here provides the detailed explanations of functionalities of the five functions.

* `Byte set_bit(Byte byte, uint8_t n)`

  This returns a `Byte` with the $n$-th position of `Byte byte` changed to `1`.

  Expected output of `set_bit(0b00001110, 0)` is `15`.

* `Byte reset_bit(Byte byte, uint8_t n)`

  This returns a `Byte` with the $n$-th position of `Byte byte` changed to `0`.

  Expected output of `reset_bit(0b00001111, 0)` is `14`.

- `bool get_bit(Byte byte, uint8_t n)`

  This returns a `bool` equals to the $n$-th position of `Byte byte`.

  Expected output of `get_bit(0b00001110, 0)` is `0` or `false`.

- `void print_bin(Byte byte)`

  This prints the integer in binary in the format  `0b<binary>`. 

  Expected output of `print_bin(15)` is `0b00001111`.

- `void print_hex(Byte byte)`

  This prints the integer in hexadecimal in the format `0x<hex>`. 

  Expected output of `print_hex(15)` is `0x0F`.

### Submission

The assignment should be done and checked during the tutorial on 20/12.

