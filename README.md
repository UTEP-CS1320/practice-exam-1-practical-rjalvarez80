# CS1320 - Practice Exam 1: Practical Part

For this practice exam, there will be two problems that you have to solve. The first one involves finding and fixing the logical errors in existing code. The second involves coding an entire problem on your own.

These two problems are found in their own files: `p1_avg.h` and `p2_screen.h`. Below you will find the description of what you have to do for each problem.

The `main.c` file contains code that can help you check either problem when you press the "Run" button.

Remember: you are allowed to check back on zyBooks in case you forgot how to do certain things.

**Make sure to comment and format your code!** Unclear code in the actual exam will be penalized.

## Problem 1: Averages (`p1_avg.h`)

The original programmer for this piece of code intended for it to work according to the following algorithm:

1. Take the user's first input.
2. If it is 3, take 3 numbers from the user and print out their average.
3. If it is 4, take 4 numbers from the user and print out their average

It is not working as intended. 

When they chose to take the average of 3 numbers, they tried with `1 2 3` and it gave the right answer of `2`, but for `1 2 2`, which should have an average of around 1.6667, the code returned `1`.

The average of 4 numbers is also not working right: an input of `1 2 3 4` prints `3`, but the average is actually 2.5.

Fix the code so it works *exactly* as described in the algorithm.

## Problem 2: Phone Screening (`p2_screen.h`)

You are tasked to build a small program that screens phone numbers. These phone numbers will be input with the following format: `AAA-BBB-CCCC`. You can assume that the input will always be in that format, no need to check for errors.

This particular phone-screening app is designed to weed out potential spam callers. The client who wants this app wants to screen all phone numbers who are not from El Paso, so any phone number for which the area code `AAA` is not 915 must be rejected, with some exceptions:

* The client wants to be able to take calls from Massachussets (Area code 617), as long as the first three digits of the phone number (`BBB`, in the above format) are 253.
* The client has been receiving robo calls from a range of numbers in El Paso: 915-701-1000 to 915-701-1999. Those numbers must be blocked.
* The client has a partner whose calls they want to receive at any time. They have two phone numbers: 718-834-9899 and 661-112-3581. These must never be blocked.

Write the code that takes the user input in `p2_screen.h`, in `AAA-BBB-CCCC`, and will screen phone numbers based on the rules above. If a number is allowed, print out `"OK!\n"` to the screen; if a number is blocked, printout `"BLOCKED.\n"`.
