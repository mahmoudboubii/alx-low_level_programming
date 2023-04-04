0x07. C - Even more pointers, arrays and strings

In this set of exercises, we will be working with pointers, arrays, and strings in C programming language. The tasks are as follows:

Task 0: Memset
Write a function called my_memset that takes three arguments: a pointer to a block of memory, a value of type int, and a size_t value that specifies the number of bytes to be set to the value. The function should set each byte of the memory block to the specified value.

Task 1: Memcpy
Write a function called my_memcpy that takes three arguments: a pointer to the destination memory block, a pointer to the source memory block, and a size_t value that specifies the number of bytes to be copied. The function should copy the specified number of bytes from the source memory block to the destination memory block.

Task 2: Strchr
Write a function called my_strchr that takes two arguments: a pointer to a null-terminated string and a character to search for. The function should return a pointer to the first occurrence of the character in the string, or NULL if the character is not found.

Task 3: Strspn
Write a function called my_strspn that takes two arguments: a pointer to a null-terminated string and a pointer to a null-terminated string of characters to match. The function should return the length of the initial segment of the string that consists entirely of characters from the second string.

Task 4: Strpbrk
Write a function called my_strpbrk that takes two arguments: a pointer to a null-terminated string and a pointer to a null-terminated string of characters to search for. The function should return a pointer to the first occurrence in the string of any of the characters in the second string, or NULL if none of the characters are found.

Task 5: Strstr
Write a function called my_strstr that takes two arguments: a pointer to a null-terminated string and a pointer to a null-terminated string to search for. The function should return a pointer to the first occurrence of the second string within the first string, or NULL if the second string is not found.

Task 6: Chess is mental torture
Write a function called print_chessboard that takes a two-dimensional array of characters representing a chessboard and prints it to the console in the following format:

8 r n b q k b n r
7 p p p p p p p p
6 . . . . . . . .
5 . . . . . . . .
4 . . . . . . . .
3 . . . . . . . .
2 P P P P P P P P
1 R N B Q K B N R
a b c d e f g h

Task 7: The line of life is a ragged diagonal between duty and desire
Write a function called print_diagsums that takes two arguments: a pointer to a two-dimensional square array of integers and the size of the array. The function should print the sum of the diagonal elements of the array, both from top-left to bottom-right and from top-right to bottom-left.

Task 8: Double pointer, double fun
Write a function called set_string that takes a pointer to a pointer to a char and sets the value of the pointer to a new string.

Task 9: My primary goal of hacking was the intellectual curiosity, the seduction of adventure
Create a file called password.txt that contains the password for the crackme2 executable. The password should be
