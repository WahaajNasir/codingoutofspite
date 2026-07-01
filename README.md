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
- 
## Day 1: Arrays and Strings
What have we learnt today?
- `malloc` and `free` are in the `stdlib.h` header, not `stdio.h`. In hindsight, this should have been obvious
- Strings dont exist in C, they are just arrays of characters.
- You need to do some pointer manipulation to get strings with variable values (See `snprintf`)
- Sometimes we needlessly complicate a very simple condition (See [here](./Day%201/ReversingAnArray/main.c))
