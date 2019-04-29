#include <stdio.h>

char rotencrypt (char *message);	//defining the char and pointers
char rotdecrypt (char *message);
char subencrypt (char *message);
char subdecrypt (char *message);
int op = 0;			// sets op to 0 (op is option)

int
main ()
{

  char message[1000];		// sets character limit for user

  printf ("Enter a message: ");
  gets (message);		//receives message and stores it into message (gets() doesn't work on eclipse che but works on sublime text and onlinegdb)

  printf
    (" Press 1 to Rot Encrpt \n Press 2 to Rot Decrypt\n Press 3 to Sub Encrypt\n Press 4 to Sub Decrypt\n #");
  scanf ("%d", &op);		//scans input and stores it to be used in the if statements 

  if (op == 1)
    {				//if user clicks 1 it will run the rotation encryption function
      rotencrypt (message);
    }
  else if (op == 2)
    {				//if user clicks 2 it will run the function below
      rotdecrypt (message);
    }
  else if (op == 3)
    {				//if user clicks 3 it will run the function below
      subencrypt (message);
    }
  else if (op == 4)
    {				//if user clicks 4 it will run the function below
      subdecrypt (message);
    }
  else
    {				//if user puts any other in put besides 1,2,3,4 it will print the error below
      printf ("Invalid input");
    }
  return 0;
}

char
rotencrypt (char *message)
{				//execute function below if condition is met inside the main 
  int i;			//declares i
  int key = 5;			// how many letters the cipher is shifted by
  int in = 0;			// in is each input made by the user user 

  for (i = 0; message[i] != '\0'; ++i)
    {
      in = message[i];		//set message[i] to in
      if (in >= 'a' && in <= 'z')	//sets condition so if input is anything from 'a' to 'z', execute function below
	{
	  printf ("ERROR: lower case not recognised");	//prints error if condition above is met

	  return 0;		//returns to 0 and ends program
	}
      else if (in >= 'A' && in <= 'Z')	//sets condition so if input is from 'A' to 'Z', execute function below
	{
	  in = in + key;	//adds input and the key (5) and sets it to in
	  if (in > 'Z')		//sets condition so if in is larger then 'Z'
	    {
	      in = in + 26;	//if condition is met add 26 to in to make the result positive
	    }
	  message[i] = in;	//set in to massage[i]
	}
    }
  printf ("Encrypted message: %s", message);	//"%s" scans message from the string
  return 0;			//ends program

  //these step are repeated in rotdecrypt but reversed
}

char
rotdecrypt (char *message)
{				//execute function below if condition is met inside the main 

  int i;
  int key = 5;
  int in = 0;

  for (i = 0; message[i] != '\0'; ++i)
    {
      in = message[i];

      if (in >= 'a' && in <= 'z')
	{
	  printf ("ERROR: lower case not recognised");
	  return 0;

	}
      else if (in >= 'A' && in <= 'Z')
	{
	  in = in - key;

	  if (in < 'A')
	    {
	      in = in + 26;
	    }
	  message[i] = in;
	}
    }
  printf ("Decrypted message: %s", message);
  return 0;
}

char
subencrypt (char *message)
{				//execute function below if condition is met inside the main 
  int i;			//declares i

  for (i = 0; message[i] != '\0'; i++)
    {
      switch (message[i])
	{
	case 'A':		//defined every letter so if the input is A the output would be Q and it repeats until all conditions are met
	  printf ("Q");
	  break;
	case 'B':
	  printf ("W");
	  break;
	case 'C':
	  printf ("E");
	  break;
	case 'D':
	  printf ("R");
	  break;
	case 'E':
	  printf ("T");
	  break;
	case 'F':
	  printf ("Y");
	  break;
	case 'G':
	  printf ("U");
	  break;
	case 'H':
	  printf ("I");
	  break;
	case 'I':
	  printf ("O");
	  break;
	case 'J':
	  printf ("P");
	  break;
	case 'K':
	  printf ("A");
	  break;
	case 'L':
	  printf ("S");
	  break;
	case 'M':
	  printf ("D");
	  break;
	case 'N':
	  printf ("F");
	  break;
	case 'O':
	  printf ("G");
	  break;
	case 'P':
	  printf ("H");
	  break;
	case 'Q':
	  printf ("J");
	  break;
	case 'R':
	  printf ("K");
	  break;
	case 'S':
	  printf ("L");
	  break;
	case 'T':
	  printf ("Z");
	  break;
	case 'U':
	  printf ("X");
	  break;
	case 'V':
	  printf ("C");
	  break;
	case 'W':
	  printf ("V");
	  break;
	case 'X':
	  printf ("B");
	  break;
	case 'Y':
	  printf ("N");
	  break;
	case 'Z':
	  printf ("M");
	  break;
	}
    }
  return 0;
}

char
subdecrypt (char *message)
{				//execute function below if condition is met inside the main 
  int i;

  for (i = 0; message[i] != '\0'; ++i)
    {
      switch (message[i])
	{
	case 'Q':		//defined every letter so if the input is Q the output would be A and it repeats until all conditions are met
	  printf ("A");
	  break;
	case 'W':
	  printf ("B");
	  break;
	case 'E':
	  printf ("C");
	  break;
	case 'R':
	  printf ("D");
	  break;
	case 'T':
	  printf ("E");
	  break;
	case 'Y':
	  printf ("F");
	  break;
	case 'U':
	  printf ("G");
	  break;
	case 'I':
	  printf ("H");
	  break;
	case 'O':
	  printf ("I");
	  break;
	case 'P':
	  printf ("J");
	  break;
	case 'A':
	  printf ("K");
	  break;
	case 'S':
	  printf ("L");
	  break;
	case 'D':
	  printf ("M");
	  break;
	case 'F':
	  printf ("N");
	  break;
	case 'G':
	  printf ("O");
	  break;
	case 'H':
	  printf ("P");
	  break;
	case 'J':
	  printf ("Q");
	  break;
	case 'K':
	  printf ("R");
	  break;
	case 'L':
	  printf ("S");
	  break;
	case 'Z':
	  printf ("T");
	  break;
	case 'X':
	  printf ("U");
	  break;
	case 'C':
	  printf ("V");
	  break;
	case 'V':
	  printf ("W");
	  break;
	case 'B':
	  printf ("X");
	  break;
	case 'N':
	  printf ("Y");
	  break;
	case 'M':
	  printf ("Z");
	  break;
	}
    }
  return 0;			//returns to 0 and ends program
}
