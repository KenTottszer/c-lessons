Q4.
Fizz Buzz is a simple math game used to teach children about divisibility. It is also sometimes used as an interview question to assess basic programming skills.

The rules of the game are simple: Starting at 1, and counting upward, replace any number divisible only by three with the word “fizz”, any number only divisible by five with the word “buzz”, and any number divisible by both 3 and 5 with the word “fizzbuzz”.

Implement this game inside a function named fizzbuzz() that takes a parameter determining what number to count up to. Use a for-loop and a single if-else chain (meaning you can use as many else-if as you like).

The output of fizzbuzz(15) should match the following:

1
2
fizz
4
buzz
fizz
7
8
fizz
buzz
11
fizz
13
14
fizzbuzz



Question #5

Modify the FizzBuzz program you wrote in the previous quiz to add the rule that numbers divisible by seven should be replaced with “pop”. Run the program for 150 iterations.

In this version, using an if/else chain will result in a function that is too long. Optimize your function so that only a single if-statement is used to determine whether each non-compound word (e.g. “fizz”, “buzz”, “pop”) should be printed.

Show Hint

Here are some snippets of the expected output:

4
buzz
fizz
pop
8
19
buzz
fizzpop
22
104
fizzbuzzpop
106