# Class Task Intermediate

### 0. Swap (inside the note)

Implement swap1 and swap2 function so that the main function have corresponding output

```C++
int main(){
  int a=2,b=3;
  cout<<a<<" "<<b; //2 3
  swap1(a,b);
  cout<<a<<" "<<b; //3 2
  swap2(&a,&b);
  cout<<a<<" "<<b; //2 3
}
```



### 1. Boring Task

Make a function `bored` which can make any variable value to be 0, supported variable type:`bool` `int` `float` `double` `char`

```c++
int a = 4;
cout<<a; //4
bored(a);
cout<<a; //0
bool b = true;
cout<<b; //1
bored(b);
cout<<b; //0
```

### 2. Mastermind

Generate four unique random numbers ${n_1,n_2,n_3,n_4}$, where $0 \leq n_i < 10$, and prompt users to input 4 numbers, and output "A" value and "B" value, where A is number of numbers guessed exist in the answer, B is the number of numbers guessed located at the corresponding position of the answer. Here is a sample IO. Suppose the answer is 9, 4, 5, 1

```
Welcome to mastermind <3
Please make a guess :)
> 1 2 3 4
A:2 B:0
Please make a guess :)
> 9 0 4 1
A:3 B:2
Please make a guess :)
>9 4 5 1
A:4 B:4
Bingo! The answer is 9 4 5 1
```

### 3. Another swap

Create struct Foo and function swap1 and swap2, so that it has a correct output.

```C++
int main(){
  Foo foo = {3,4};
  cout<<foo.a<<" "<<foo.b;	//3,4
  swap1(foo);
  cout<<foo.a<<" "<<foo.b;	//4,3
  swap2(&foo);
  cout<<foo.a<<" "<<foo.b;	//3,4
}
```

### 4. Compressed Memory

Create a `Memory` class, which contains some private member variables: `int32_t a`, `std::vector<float> b`, `bool c`, `std::string d`. You need to provide getter and setter for them. There is a function `compress` which compress a,b,c,d into a single char array (not vector), and a function `extract` which convert the char array back to value of a,b,c,d. You can
decide how to manage the data structure inside the char array, but the size
cannot exceed the original size*2 (size of `int32_t` is 4 byte, a single `char` is
1 byte, so don't stringify the `int` as this will require even more byte to store). You need to implement a default constructor, copy constructor, and a constructor which build from the char array.