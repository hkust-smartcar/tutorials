# Class Task (Basic)

> Author: Dipsy Wong ([dipsywong98](http://www.github.com/dipsywong98))

### 1. Guess number 1 to 100

Generate a random number n, and let user to guess. Here is a sample IO. Suppose the answer is 23

```
Welcome to Guess Number
Please Guess a number between 1 to 100: 
> 50
Please Guess a number between 1 to 50: 
> 1
Please Guess a number between 1 to 50: 
> 24
Please Guess a umber between 1 to 24: 
> 23
Correct!

```

For the randomization, you may need the header `<cstdlib>` and `<ctime>` 

### 2. X'mas tree

Input the height of X'mas tree $h$, $1\leq h\leq 20$ , and build the X'mas tree. The width of tree trunk is width of tree/3 ~~round up~~ _round to closest odd_. Here is a sample IO.

```
Marry Christmas!
Please input the height of tree: 
> 1
*
|
Please input the height of tree: 
> 5
    *
   ***
  *****
 *******
*********
   | |
```

### 3.3.	Enumeration 

Input $N$, $1\leq N \leq10$, ouput $\frac{N(N+1)}{2}$ integers, where the $i^{th}$ line contains $i$ integers separated by a space, the right most integer is $1$ and other integers
are greater then the integer on its right by $i-1$. Here is a sample IO:

```
> 4
1
2 1
5 3 1
10 7 4 1
```

### 4. Fibonacci

Input $i$, output $i^{th}$ Fibonacci number. If you don't know what is Fibonacci number, google it.

```
> 1
1
> 3
2
> 8
21
```





"