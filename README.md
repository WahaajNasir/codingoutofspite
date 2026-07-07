# CodingOutOfSpite

## Hi! My name is Wahaaj!
And im tired of LLMs and Agentic AIs taking the fun out of coding. I just graduated and I gave a hell of a lot of interviews, only to be met with defeat.

So, I've decided to create this repo, in which I will be coding and practicing DSA, but in C! This is to better understand what goes on in memory as much as I possibly can, whilst also giving me something to do instead of wasting my time between interviews and hopefully giving me a reason to code again. I'm also going to be doing this completely without the help of AI, solving each problem and question using good old fashioned StackOverflow, GeeksForGeeks and Reddit!

The roadmap I'm following can be found [here](https://www.geeksforgeeks.org/c/learn-dsa-in-c/)

## Day 0
What have we learnt today? 
- `sizeof()` is incredibly useful
- a comma operator exists in C/C++ for left to right executions
- unions exist which basically let you create your own custom datatype.
- `fstream` is'nt the only file read-write library and stdio actually has its own version which we can access using `fputs(), fgets() and FILE*`

## Day 1: Arrays and Strings
What have we learnt today?
- `malloc` and `free` are in the `stdlib.h` header, not `stdio.h`. In hindsight, this should have been obvious
- Strings dont exist in C, they are just arrays of characters.
- You need to do some pointer manipulation to get strings with variable values (See `snprintf`)
- Sometimes we needlessly complicate a very simple condition (See [here](Day 1\ReversingAnArray\main.c))

## Day 2: Multidimensional Arrays, Dyamic Programming and User-Defined Datatypes
- Usage of Multidimensional Arrays in C
- Pointers and Dynamic Programming related to arrays is complicated
- This repo is a pointer pointing to a pointer pointing to an array of characters that hold the value of "My brain is dead"
- Struct is similar to classes in C++, but theres no concept of a `method`
- C takes the OOP functionalities of C++ and says "Go to hell"

## Day 3: Basic Logic Questions
- Sometimes, adding loops and arrays is pointless when the math already exists
- Simple is better. A swap does not need a compilicated `XOR` when we can use a 3rd variable
- Logic building is better done on paper