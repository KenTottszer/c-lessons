Question #5

Let’s implement the game C++man (which will be our version of the classic children’s lynching game Hangman.

In case you’ve never played it before, here are the abbreviated rules:

High level:

The computer will pick a word at random and draw an underscore for each letter in the word.
The player wins if they guess all the letters in the word before making X wrong guesses (where X is configurable).
Each turn:

The player will guess a single letter.
If the player has already guessed that letter, it doesn’t count, and play continues.
If any of the underscores represent that letter, those underscores are replaced with that letter, and play continues.
If no underscores represent that letter, the player uses up one of their wrong guesses.
Status:

The player should know how many wrong guesses they have left.
The player should know what letters they have guessed incorrectly.
Because this is C++man, we’ll use a + symbol to indicate the number of wrong guesses left. If you run out of + symbols, you lose.

Here’s sample output from the finished game:

Welcome to C++man (a variant of Hangman)
To win: guess the word.  To lose: run out of pluses.

The word: ________   Wrong guesses: ++++++
Enter your next letter: a
No, 'a' is not in the word!

The word: ________   Wrong guesses: +++++a
Enter your next letter: b
Yes, 'b' is in the word!

The word: b_______   Wrong guesses: +++++a
Enter your next letter: c
Yes, 'c' is in the word!

The word: b__cc___   Wrong guesses: ++++ad
Enter your next letter: d
No, 'd' is not in the word!

The word: b__cc___   Wrong guesses: ++++ad
Enter your next letter: %
That wasn't a valid input.  Try again.

The word: b__cc___   Wrong guesses: ++++ad
Enter your next letter: d
You already guessed that.  Try again.

The word: b__cc___   Wrong guesses: ++++ad
Enter your next letter: e
No, 'e' is not in the word!

The word: b__cc___   Wrong guesses: +++ade
Enter your next letter: f
No, 'f' is not in the word!

The word: b__cc___   Wrong guesses: ++adef
Enter your next letter: g
No, 'g' is not in the word!

The word: b__cc___   Wrong guesses: +adefg
Enter your next letter: h
No, 'h' is not in the word!

The word: b__cc___   Wrong guesses: adefgh
You lost!  The word was: broccoli


> Step #1

Goals:

We’ll start by defining our list of words and writing a random word picker. You can use the Random.h from lesson 8.15 -- Global random numbers (Random.h) to assist.
Tasks:

First define a namespace named WordList. The starter list of words is: “mystery”, “broccoli” , “account”, “almost”, “spaghetti”, “opinion”, “beautiful”, “distance”, “luggage”. You can add others if you like.
Write a function to pick a random word and display the word picked. Run the program several times to make sure the word is randomized.
Here is a sample output from this step:

Welcome to C++man (a variant of Hangman)
To win: guess the word.  To lose: run out of pluses.

The word is: broccoli



> Step #2

As we develop complex programs, we want to work incrementally, adding one or two things at a time and then making sure they work. What makes sense to add next?

Goals:

Be able to draw the basic state of the game, showing the word as underscores.
Accept a letter of input from the user, with basic error validation.
In this step, we will not yet keep track of which letters the user has entered.

Here is the sample output from this step:

Welcome to C++man (a variant of Hangman)
To win: guess the word.  To lose: run out of pluses.

The word: ________
Enter your next letter: %
That wasn't a valid input.  Try again.
Enter your next letter: a
You entered: a
Tasks:

Create a class named Session that will be used to store all of the data the game needs to manage in a game session. For now, we just need to know what the random word is.
Create a function to display the basic state of the game, where the word is displayed as underscores.
Create a function to accept a letter of input from the user. Do basic input validation to filter out non-letters or extraneous input.


> Step #3

Now that we can display some game state and get input from the user, let’s integrate that user input into the game.

Goals:

Keep track of which letters the user has guessed.
Display correctly guessed letters.
Implement a basic game loop.
Tasks:

Update the Session class to track which letters have been guessed so far.
Modify the game state function to display both underscores and correctly guessed letters.
Update the input routine to reject letters that have already been guessed.
Write a loop that executes 6 times before quitting (so we can test the above).
In this step, we will not tell the user whether the letter they guessed is in the word (but we will show it as part of the game state display).

The tricky part of this step is deciding how to store information on which letters the user has guessed. There are several different viable ways to do this. A hint: there are a fixed number of letters, and you’re going to be doing this a lot.



Here’s sample output for this step:

Welcome to C++man (a variant of Hangman)
To win: guess the word.  To lose: run out of pluses.

The word: ________
Enter your next letter: a

The word: ____a___
Enter your next letter: a
You already guessed that.  Try again.
Enter your next letter: b

The word: ____a___
Enter your next letter: c

The word: ____a___
Enter your next letter: d

The word: d___a___
Enter your next letter: e

The word: d___a__e
Enter your next letter: f

The word: d___a__e
Enter your next letter: g


> Step #4

Goal: Finish the game.

Tasks:

Add in display of total wrong guesses left
Add in display of incorrect letters guessed
Add in win/loss condition