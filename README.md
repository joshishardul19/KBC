# KBC
Quizzing game developed using C Programming language. <br />
############################################################# <br />
Team: <br />
1. Shardul Rahul Joshi <br />
############################################################# <br />
Description of how to run the code and observe the output: <br />
1. The exe file is called 2019B2PS1014P_P11.out <br />
2. The code is named 2019B2PS1014P_P11.c, and is coded on GNU nano 2.9.3. <br />
3. The code is capable of running on gcc <br />
4. The code can be compiled by the command, <br />
       gcc 2019B2PS1014P_P11.c -o 2019B2PS1014P_P11.out, <br />
       and run by <br />
       ./2019B2PS1014P_P11.out <br />
5. The header files used in this program are: [stdio.h, ctype.h, stdlib.h, string.h] <br />
6. The input file is 'Rules_2019B2PS1014P_P11.txt' <br />
7. When you run the exe, the set of rules to play the game will be displayed. <br />
8. Finally, there will be a prompt to press the ENTER key to start the game. <br />
9. The first question will be displayed, along with the 4 corresponding options and there will be a prompt to enter a character as a choice of answer/ avail lifeline (either A,B,C,D,L(for Lifeline) in upper/lowercase). <br />
10. Entering any other character will display an error message, and you will be allowed to re-enter your choice again. <br />
11. Choosing the correct option out of A,B,C,D will show you a message, prize money you win, and the control jumps directly to the choice of answer for the next question. <br />
12. Choosing the incorrect option out of A,B,C,D will show you a message, the intermediate prize money you win, and the program terminates. <br />
13. Choosing 'L' for lifeline will show you a prompt to choose one out of the two lifelines, 50-50 or Flip the question. <br />
14. You will have to enter the choice in terms of integer i.e. 1 for 50-50 or 2 for Flip <br />
15. Entering any other character will display an error message, and you will be allowed to re-enter your choice, again. <br />
16. Each lifeline can be used only once throughout the game, and if you try to avail the same lifeline again, an error message will pop up, and again, you will be persuaded to choose the other lifeline. <br />
17. If you have used up both of the lifelines and choose 'L' as your choice, an error message will be displayed, and you will not be allowed to use 'L' as valid character. <br />
18. Answer key [D,C,A,B,D,B,C,A,C,C,A,D,D] for the 13 questions.<br />
############################################################ <br />
Known limitations of the code (if you have not been able to completely/fully implement certain features that were asked): <br />
1. If any of your choice to any prompt, after the game begins, is returned without any character ie press ENTER without entering a character, will result in a message being repeated again without asking an input. However, this can be solved by pressing ENTER key again. <br />
2. Once you choose to avail a lifeline , enter 'L' as your choice, you will compulsorily have to choose one of the lifelines, unless you have choosen both the lifelines. Basically, once you enter 'L', you cannot escape from choosing a lifeline. <br />
############################################################# <br />


