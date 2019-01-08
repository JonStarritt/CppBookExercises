# C++ Book Exercises
Practice exercises from my C++ class book.

I'm re-reading and working through the seventh edition of a C++ class book by Deitel. This is the same book I used for a couple of programming classes about nine years ago. The main purpose of re-reading and working through the book is to refresh my knowledge and programming skills, specifically with C++. To aid in my knowledge refreshment, I plan to work through the practice exercises for the twenty-two chapters presented in the book without any outside reference or help, including my old class assignments. The exercises will be uploaded as I read through the chapters and complete them. 

While working through the practice exercises, I will be limiting myself to only using the information in the current and preceding chapters in my program solutions. I feel this will help with thinking critically about program control. Limiting yourself to only using <i>if</i> statements instead of <i>if-else</i>, <i>case</i>, or <i>switch</i> statements, for example, requires a different way of thinking about the solution. I will also be using data types as they are presented, i.e. int, string, char, double, etc. The only exception to the above is the first variable which I declare, <i>ExitChar</i>, and waiting for user input before the main function return statement. I put these lines in my program solutions to keep the output window open on computers with a Windows OS. Recalling class discussions, I remember using <i>system("pause");</i> to keep the output window open, however that did not work when I tested the same program solutions on my Linux computer. To get around the operating system dependancy of <i>system("pause");</i>, I decided to declare a variable, and wait for user input right before the main function return statement. This worked! On my Windows 7 computer the output window stays open, waiting for me to enter a character, and closes when it receives valid input. And on my Linux computer the terminal output waits for me to enter a character, then it returns me back to the command prompt once it receives valid input.

Due to my programming environment, all of the source files with a main function are named "main.cpp." I have prepended the chapter number and a short name of the exercise to the source file names. To compile and run the files as presented here, you may need to remove my additions to the file names. My primary programming environment on Windows is MS Visual Studio Community 2013. I am learning Vim and g++ on my Linux computer for editing and compiling. 

STUDENTS: Please look over these files for ideas or reference. Please <b>DO NOT</b> download or copy the files and turn them in for class assignments. 

<h3>Some notes about my program structure:</h3>
 <h4> main.cpp file </h4>
  <li>1. The first line is a comment with the file name, i.e. //main.cpp
  <li>2. Next is a multi line comment section consisting of chapter and exercise numbers, the name of the exercise, a description of the
     exercise, and any pertinant examples from the book's exercise description
  <li>3. Next is the #include section
  <li>4. Then the Standard library functions used in the program
  <li>5. Finally the main function, with comments about the program execution
  
  <h4><u>class.cpp file</u></h4>
  <li>1. The first line is a comment with the file name, i.e. //Employee.cpp
  <li>2. Next is a multi line comment section
  <li>3. Next is the #include section
  <li>4. Then the Standard library functions used in the program
  <li>5. Finally the class member function definitions
  
  <h4>class.h file</h4>
  <li>1. The first line is a comment with the file name, i.e. //Date.h
  <li>2. Next is a multi line comment section
  <li>3. Then the Standard library functions used in the program (only if necessary)
  <li>4. Finally the class member function and data member declarations
