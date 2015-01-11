# CSamplePrograms
 --------
| README |
 --------

This project consists of a collection of small C programs that fulfill basic tasks.

Each program and its intended usage will be described within this document.

 ----------
| Programs |
 ----------

Identify – Takes from standard input (a single line) of a potential C identifier name returning whether or not it is valid or invalid.

-----------------------------------------------------------------------------

Xtable – Prints the result of a mathematical equation in tabular form. The table entries are for every tenth integer from 10 to 90. The first column represents the value of x while the first row represents the value of y.

Equation:	((x^4 / y^2) + sqrt(y))

-----------------------------------------------------------------------------

Longline – Echoes all input lines that are longer than 60 characters. The input is to be taken from standard input and written to standard output.

-----------------------------------------------------------------------------

Blank – Replaces sequences of one or more consecutive blanks with a single blank. Reads from standard input and writes to standard output. Also prints a line with the maximum number of consecutive blanks encountered from the input stream. Ceases reading at EOF.

-----------------------------------------------------------------------------

Squeeze – Reads from standard input, compresses the input data and transfers the result to standard output. The compression technique looks for sequences of the same character where it is repeated 2 – 8 times. Sequences are replaced by the character itself followed by a digit with the value of its repetition. Ceases reading at EOF.

Example Behaviour:

The input abcddddddeeefghij will produce the output abcd6e3fghij

The input aaaaaaaaaaaaaaaaaaa will produce the output a8a8a3

-----------------------------------------------------------------------------

Strip – Removes all comments from a C program.

-----------------------------------------------------------------------------

Revline – Reverses a line from standard input printing it to standard output.

-----------------------------------------------------------------------------

Convert – Converts an integer into a string based on the specified base value desired and prints that representation to standard output.

Example Behaviour:

Convert an integer with the value of 43 into base 2.

Input: 	43 2
Output: 101011
