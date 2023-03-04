# BinarytoDecimalByStack

# Faculty Of Computer And Artificial Intelligence Cairo University `FCAI-CU`

## 	Structured Programming Assignment



## Explan:

takes an input from the user, either a decimal or binary number, and converts it to its binary or decimal equivalent, respectively.

The DecimalToBinary function takes an integer as an argument and uses a stack to store the binary digits of the input number. It repeatedly divides the input number by 2, pushes the remainder (which is always 0 or 1) onto the stack, and updates the input number to be the quotient. Once the input number becomes 0, the function prints out the binary equivalent by popping each digit off the stack and printing it out.

The BinaryToDecimal function takes a string as an argument and uses a stack to store the binary digits of the input number. It iterates over each character in the string and checks that it is either '0' or '1'. If it is, it pushes the corresponding integer (0 or 1) onto the stack. If it is not a binary digit, the function prints an error message and returns. Once all the binary digits have been pushed onto the stack, the function pops each digit off the stack and multiplies it by the appropriate power of 2, accumulating the result in a variable called Decimal. Once the stack is empty, the function prints out the decimal equivalent.

In the main function, the user is prompted to enter a decimal or binary number, and the appropriate function is called depending on the user's input. If the user enters a non-binary character for the binary input, the BinaryToDecimal function will print an error message and return without converting the number.

Overall, this code correctly implements decimal-to-binary and binary-to-decimal conversion using stacks.
