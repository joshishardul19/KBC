#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int prize_correct(int *qno, int *prize); //This function calculates/executes orders if the user's answer is correct
int prize_incorrect(int *qno, int *prize); //This function calculates/executes orders if the user's answer is incorrect
void options(char opt1[], char opt2[], char opt3[], char opt4[]); //This function displays the options corresponding to the question
void fifty_options(char new_fif_opt1[], char new_fif_opt2[]); //This function , like the above, displays the options to the corresponding question, except oinly when 50-50 lifeline is used
void answer(char ans, char cor_ans, int *qno, int *prize, int *exit_flag, char cor_opt[]); //This function compares the user's choice with the correct answer
void flip(int *qno, int *prize, int *exit_flag); //This function executes the conditions if Flip lifeline is used
void fifty_fifty(char fif_need1, char fif_need2, char opt1[], char opt2[], char opt3[], char opt4[], char cor_ans, int *qno, int *prize, int *exit_flag, char cor_opt[]);
//The above function executes conditions if 50-50 lifeline is used
void lifeline(char cor_ans, char fif_need1, char fif_need2, char opt1[], char opt2[], char opt3[], char opt4[], int *used_flip, int *used_fifty, int *qno, int *prize, int *exit_flag, char cor_opt[]);
//The above function asks the user to choose their lifeline, and then call the previous 2 functions based on their choice
void questions(char que[], char opt1[], char opt2[], char opt3[], char opt4[], char cor_ans, char fif_need1, char fif_need2, int *used_flip, int *used_fifty, int *qno, int *prize, int *exit_flag, char cor_opt[]);
//The above function displays the question, options and asks the user to enter their choice of answer or choice of lifeline

int main() //Main fucntion
{int used_flip=0, used_fifty=0, prize=0, qno=1, exit_flag=0;
//Define integers to calculate prize, track question number, check if lifelines 50-50, Flip are used and check if an answer is incorrect to exit the code
char ch;
FILE *fp;
fp = fopen("Rules_2019B2PS1014P_P11.txt", "r");
if(fp == NULL)
{printf("\nERROR!!File NOT found. Search for the file 'Rules_2019B2PS1014P_P11.txt'\n"); }
printf("\n\n\t\t\t\t\tWELCOME TO KBC\n\n");
while((ch = fgetc(fp)) != EOF)
printf("%c", ch);
fclose(fp);
printf("\n\nPress ENTER key to begin the game\n"); //Trigger to display the first question
getchar();

/*List of 13 questions, options, correct answer, 50-50 options to be retained and keep a check of qno, prize, if used 50-50 or flip , if the answer is incorrect
and display the correct option if answer is incorrect, respectively
used_flip - Checks if flip lifeline is used or not
used_fifty - Checks if 50-50 lifeline is used or not
exit_flag - Checks if the previous answer is incorrect or not to terminate the program
*/
questions("Q1) Which part of the computer is the advertising slogan of 'Intel Inside' associated with?", "A) BIOS ", "B) RAM", "C) USB", "D) Processor", 'D', 'A', 'D', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "D) Processor");
//Calls questions function along with the question, options, correct answer, options to be retained for 50-50, prize money, question number, used_flip,used_fifty and exit_flag
if(exit_flag) //Checks if exit_flag is true
exit(0);//Terminate the program
else
questions("Q2) Who created the famous character 'Sherlock Holmes'?", "A) Oscar Wilde", "B) Lewis Carroll", "C) Arthur C. Doyle", "D) Jules Verne", 'C', 'A', 'C', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "C) Arthur C. Doyle");
if(exit_flag)
exit(0);
else
questions("Q3) Maummar Gadafi was the ruler of which country from 1969 to 2011?", "A) Libya", "B) Tunisia", "C) Sudan", "D) Egypt", 'A', 'A', 'C', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "A) Libya");
if(exit_flag)
exit(0);
else
questions("Q4) Who is the founder of the company 'Blue Origin'?", "A) Richard Branson", "B) Jeff Bezos", "C) Elon Musk", "D) Bill Gates", 'B', 'B', 'C', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "B) Jeff Bezos");
if(exit_flag)
exit(0);
else
questions("Q5) Which country DOESN'T use Rupees as their currency?", "A) Pakistan", "B) Mauritius", "C) Sri Lanka", "D) Bhutan", 'D', 'B', 'D', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "D) Bhutan");
if(exit_flag)
exit(0);
else
questions("Q6) Which one of these months ISN'T named after a Roman God/Goddess?", "A) March", "B) April", "C) May", "D) June", 'B', 'B', 'C', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "B) April");
if(exit_flag)
exit(0);
else
questions("Q7) Which of the following monuments/places AREN'T behind the latest Indian Rupee notes?", "A) Rani ki Vav", "B) Hampi", "C) Golden Temple", "D) Sanchi Stupa", 'C', 'B', 'C', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "C) Golden Temple");
if(exit_flag)
exit(0);
else
questions("Q8) What is the fear of thunder called?", "A) Astraphobia", "B) Atelophobia", "C) Ailurophobia", "D) Ancraophobia", 'A', 'A', 'D', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "A) Astraphobia");
if(exit_flag)
exit(0);
else
questions("Q9) A number one followed by one hundred zeros is known by what name?", "A) Megatron", "B) Gigabit", "C) Googol", "D) Nanomole", 'C', 'A', 'C', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "C) Googol");
if(exit_flag)
exit(0);
else
questions("Q10) Which are the two cities where Dhyan Chand won the Gold medal in Olympics?", "A) Berlin & Paris", "B) Paris & Rome", "C) Berlin & Amsterdam", "D) Amsterdam & Madrid", 'C', 'C', 'D', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "C) Berlin & Amsterdam");
if(exit_flag)
exit(0);
else
questions("Q11) Which country won the first FIFA World Cup in 1930?", "A) Uruguay", "B) Brazil", "C) Mexico", "D) Argentina", 'A', 'A', 'C', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "A) Uruguay");
if(exit_flag)
exit(0);
else
questions("Q12) Which of the following Nobel prize WASN'T a part of Alfred Nobel's will?", "A) Physiology/Medicine", "B) Peace", "C) Literature", "D) Economics", 'D', 'B', 'D', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "D) Economics");
if(exit_flag)
exit(0);
else
questions("Q13) What is a group of crows called?", "A) Scandal", "B) School", "C) Parliament", "D) Murder", 'D', 'C', 'D', &used_flip, &used_fifty, &qno, &prize, &exit_flag, "D) Murder");
if(exit_flag)
exit(0);
else
printf("\nCONGRATULATIONS!! YOU HAVE COMPLETED THE GAME, AND HAVE BECOME A CROREPATI!!!\n\n");
//End of the code
return 0;
}


int prize_correct(int *qno, int *prize) //Takes current prize money and current question number as arguments
{if(*qno == 1) //If its the first question
{*prize = 5000;
*qno += 1;
}
else if(*qno > 1 && *qno < 9) //If the question number is between 2 and 7
{*prize *= 2;
*qno += 1;
}
else if(*qno == 9) //If its the ninth question
{*prize = 1250000;
*qno += 1;
}
else if(*qno > 9 && *qno < 13) //If its the between 9 and 13
{*prize *= 2;
*qno += 1;
}
else if(*qno == 13) //The last question
*prize = 50000000;

return *prize; //Upgrades and returns the prize money if the naswer is correct based on the above conditions
}



int prize_incorrect(int *qno, int *prize) //Takes current prize money and question number as arguments
{if(*qno <= 2) //if the answer is wrong before the 2nd question
*prize = 0;
else if(*qno > 2 && *qno <= 7) //If the answer is wrong before the 7th question (1st intermediate)
*prize = 10000;
else if(*qno > 7 && *qno <= 13) //If rhe answer is wrong before the last question (2nd intermediate)
*prize = 320000;

return *prize; //Degrades and returns prize money if the answer is wrong
}



void options(char opt1[], char opt2[], char opt3[], char opt4[]) //Displays the question corresponding to the question. Takes 4 options as arguments
{printf("%s   %s  %s  %s",opt1,opt2,opt3,opt4);
}


void fifty_options(char new_fif_opt1[], char new_fif_opt2[]) //Displays the question corresponding to the question if 50-50 is used. Takes two options retained as arguments
{printf("\n%s  %s", new_fif_opt1, new_fif_opt2);
}



void answer(char ans, char cor_ans, int *qno, int *prize, int *exit_flag, char cor_opt[]) //Validates the user's choice. Takes prize money, question number, correct answer and user's choice as arguments
{if(ans == cor_ans) //If the answer is correct
{printf("\nYour answer is Correct!\n");
printf("Congratulations!! You win Rs.%d.\n\n\n\n", prize_correct(&(*qno), &(*prize))); //Calls the prize_correct function
}
else
{printf("\nYour answer is Incorrect! The answer was   %s.\n", cor_opt); //If the answer is incorrect
printf("Too bad! Your final prize is Rs.%d.\n\n", prize_incorrect(&(*qno), &(*prize))); //Calls the prize_incorrect function
printf("\n\n\nBETTER LUCK NEXT TIME!!\n\n");
*exit_flag = 1; //Sets the pointer to 1, so that program is immediately terminated
}
}



void flip(int *qno, int *prize, int *exit_flag) //If the user chooses the Flip lifeline. Takes question number, prize and exit_flag as arguments. Can be used only once.
{char ansf, cor_ansf;
int f=1;
printf("\n\nChange in the question...your new question is\n");
printf("Q) What is the capital of Australia?"); //Change in the question
printf("\n\n");
printf("A) Perth    B) Sydney    C) Canberra    D) Melbourne"); //Corresponding options
cor_ansf = 'C';
while(f)
{printf("\nYour choice: ");
getchar();
scanf("%c", &ansf); //User's choice
ansf = toupper(ansf);
if(ansf == 'A'|| ansf == 'B'|| ansf == 'C' || ansf == 'D') //Checks if the choice is bounded by only these characters (upper or lowercase)
{f=0;}
else
{printf("Please use valid characters!!\n"); //If invalid choice is entered
continue;}
}

answer(ansf, cor_ansf, &(*qno), &(*prize), &(*exit_flag), "C) Canberra"); //Calls the answer function

}



void fifty_fifty(char fif_need1, char fif_need2, char opt1[], char opt2[], char opt3[], char opt4[], char cor_ans, int *qno, int *prize, int *exit_flag, char cor_opt[])
//fif_need1 and fif_need2 are characters (either A,B,C or D, depending of the question)
//If the user chooses the 50-50 lifeline. Only used once
{printf("\n\n2 wrong options are erased off...\n");
char opt_list[4][20]; //Array of Strings to enter the current options
int f=1;
char ans;
strcpy(opt_list[0], opt1);
strcpy(opt_list[1], opt2);
strcpy(opt_list[2], opt3);
strcpy(opt_list[3], opt4);

char new_fif_opt1[20], new_fif_opt2[20]; //Two options to be retained are copied to these strings

for(int i=0; i<4; i++)
{if(fif_need1 == opt_list[i][0]) //Compares the first character of options i.e.(A,B,C,D) to fif_need1
strcpy(new_fif_opt1, opt_list[i]);
}

for(int i=0; i<4; i++)
{if(fif_need2 == opt_list[i][0]) //Compares the first character of options i.e. (A,B,C,D) to fif_need2
strcpy(new_fif_opt2, opt_list[i]);
}

fifty_options(new_fif_opt1, new_fif_opt2); //Calls fifty_options function to display the retaining options

while(f)
{printf("\nYour choice: ");
getchar();
scanf("%c", &ans); //User's choice
ans = toupper(ans);
if(ans == fif_need1 || ans == fif_need2) //Checks if the choices is only corresponding to the remaining 2 options
{f=0;}
else
{printf("Please use valid characters!!\n"); //For invalid characters (including the two wrong options)
continue;}
}

answer(ans, cor_ans, &(*qno), &(*prize), &(*exit_flag), cor_opt); //Calls the answer function

}




void lifeline(char cor_ans, char fif_need1, char fif_need2, char opt1[], char opt2[], char opt3[], char opt4[], int *used_flip, int *used_fifty, int *qno, int *prize, int *exit_flag, char cor_opt[])
//If the user avails to the lifeline. Can be only used twice.
{int life, f = 1;
x:
printf("\nWhich lifeline would you like to pick?\n 1.50-50   2.Flip");
printf("\nPress 1 to choose 50-50 OR 2 to choose Flip: ");
getchar();
scanf("%d", &life); //User's choice to which lifeline

if(life == 1)//If 50-50
{if(*used_fifty)// If this is true, you must have already used it before
{printf("\nYou have already used this lifeline!!\n");
goto x;}
else
{*used_fifty = 1;// If you are using 50-50 for the first time, *used_fifty becomes true
fifty_fifty(fif_need1, fif_need2, opt1, opt2, opt3, opt4, cor_ans, &(*qno), &(*prize), &(*exit_flag), cor_opt);}//Calls fifty_fifty funtion
}

else if(life == 2)//If Flip
{if(*used_flip)//If this is true, you must have already used it before
{printf("You have already used this lifeline!!\n");
goto x;}
else
{*used_flip = 1; //If you are using Flip for the first time, *used_fifty becomes true
flip(&(*qno), &(*prize), &(*exit_flag));}//Calls flip function
}

else
{printf("Please use valid characters!!\n");//If any other integer/character used apart from 1 and 2
goto x;}


}





void questions(char que[], char opt1[], char opt2[], char opt3[], char opt4[], char cor_ans, char fif_need1, char fif_need2, int *used_flip, int *used_fifty, int *qno, int *prize, int *exit_flag, char cor_opt[])
//If display questions, options and ask choice
{char ans;
puts(que); //Display the question
printf("\n");
options(opt1,opt2,opt3,opt4); //Calls the options_function
int f=1, g=1;

if(*qno == 1) //Only for the first question
{while(f)
{
printf("\nYour choice (Press L to use lifeline): ");
scanf("%c", &ans); //User's choice
ans = toupper(ans);
if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D' || ans == 'L') //Checks if the choice is for valid options, including 'L' for using lifeline
{f = 0;}
else
{printf("Please use valid characters!!\n"); //If invalid character is entered
getchar();
continue;}
}
}

else //For questions for above the first i.e. when the questions fucntion is called the second time inside main function
{while(f)
{
printf("\nYour choice (Press L to use lifeline): ");
getchar();
scanf("%c", &ans);
ans = toupper(ans);
if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D' || ans == 'L')
{f=0;}
else
{printf("Please use valid characters!!\n");
continue;}
}
}


if(ans == 'L') //If lifeline is availed by the user
{
if(*used_flip == 0 || *used_fifty == 0) //If both lifelines are not used
lifeline(cor_ans, fif_need1, fif_need2, opt1, opt2, opt3, opt4, &(*used_flip), &(*used_fifty), &(*qno), &(*prize), &(*exit_flag), cor_opt); //Calls lifeline function

else //If both the lifelines are used
{printf("\nYou have ran out of lifelines!!\n");
while(g)
{
printf("\nYour choice: "); //User's choice
getchar();
scanf("%c", &ans);
ans = toupper(ans);
if(ans == 'A' || ans == 'B' || ans == 'C' || ans == 'D') //This time using 'L' if result in invalid character
{g = 0;}
else
{printf("Please use valid characters!!\n");
continue;}
}
answer(ans, cor_ans, &(*qno), &(*prize), &(*exit_flag), cor_opt); //Calls the answer function
}
}


else
answer(ans, cor_ans, &(*qno), &(*prize), &(*exit_flag), cor_opt); //Calls the answer function if lifeline isn't chosen
}
