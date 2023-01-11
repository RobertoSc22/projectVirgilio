# projectVirgilio
A little project in c++ that generates random password.

The user face a menu where he can enter the voice to execute, in particulary generating a new password or shutting down the program.
I used the classical menu form, using do{}while; and switch(){case : }.

The user can enter the lenght of the password in a range of 10-51 characters. 

What's probably more intersting is how the program generate a random number, in fact only using rand() it's not enough. That function creates the same sequence of random number each time the program it's executed. In order to solve that, it's important to integrate it with srand(time(NULL); 

**IMPORTANT**
These numbers are not actually random. 
In the function rand(n); n is the semen. That means that every time that I change the semen inside rand(), It will create a difference random sequence from an 
other semen. So now the goal is to change the semen every time the user execute the program, and in doing so, srand(time(NULL)) really
help us out: with srand() we assign the semen based on time(NULL) which gives us a value. This value it's not actually random, in 
fact it indicates the second from the date 1/1/1970. 

Long story short, knowing when an user generated a password ( in seconds ), our friendly hacker could generate the same password. But nothing it's lost (yet), 
'cause the lenght of password can change ( as the will of the user ).
