// Created by Abolfazl Omidiyan

/* This code was written to simulate the process you go through when you forgot your password and are trying to reset it. */

/* The first part verifies your identity (to check if the person trying to change the password is the owner of the account). The user can choose to do this by receiving a text message with a security code (scenario 1). The user can also choose to answer the security questions (scenario 2). */ 

/* If the user's identity is verified, the user is then asked to enter a new password twice. */

    /* NOTE: The program is made for a fictional
	Since the person trying to reset his/her password usually already has a security profile (i.e. security questions and answers have been pre-determined), this program is written to simulate that. This means the program will only run completely if the right answers are entered (provided in the next comment; you can either ignore the answers or part of the answers and see what happens if you enter the wrong input or you can enter the answers below and see what happens if the program runs succesfully). */
    
    /* SPOILE: Correct user input 
       - scenario 1:
          y
          OTD is: ** 7403 **
          *password of your choice
          *repeat password of your choice
       
	   - scenario 2:
          n
          
          1- Reza
          2- Yaser street
          3- The secret
          *password of your choice
          *repeat password of your choice */
          
          
#include <iostream>
#include <string>
 
using namespace std;

int main() 
{
	cout << "\t\t  * ************ Attention! ************* *" << endl;
	cout << "\t\t  *                                       *" << endl;	
    cout << "\t\t  * First we need to verify your identity *" << endl;
    cout << "\t\t  *                                       *" << endl;
    cout << "\t\t  * ************************************* *" << endl << endl;
    
    cout << "We can send a one-time code to the phone number you provided." << endl;
           
    cout << "\nWould you like to reset password this way?" << endl << "Enter 'y' for yes or 'n' for no." << endl;

    char TextMessage;        // either 'y' or 'n'
    cin >> TextMessage;
        
    if (TextMessage == 'y')
        // ID verification through text message
    {   system("cls");
        cout << "\nYou have selected 'Yes'.\n" << endl << endl;
        
        //OTP SMS System will send message to user for Identification
        //for example the OTP is: ** 7403 **
		 
        int SecureCode = 7403;
        
            /* I wanted to insert a function to generate a random 4 digit number to simulate the random code the user would receive, but unfortunately I don't know how to do that yet. For simplicity sake, I used an external random generator and just used that number as the value */ 
        cout << "\t\t  * *********************************** *" << endl;
		cout << "\t\t  *                                     *" << endl;
        cout << "\t\t  * Please enter the code you received. *" << endl;
		cout << "\t\t  *                                     *" << endl;
		cout << "\t\t  * *********************************** *" << endl;
		
        int UserCode; 
        cin >> UserCode;
            
        for (int attempts = 3; attempts > 0; --attempts)
        {	
            if (UserCode == SecureCode)
            {	system("cls");
                cout << "Identity verified." << endl << endl;
                
                cout << "\t\t    **************************************" << endl;
				cout << "\t\t    *                                    *" << endl;
        		cout << "\t\t    ***   Please enter new password.   ***" << endl;
				cout << "\t\t    *                                    *" << endl;
				cout << "\t\t    **************************************" << endl;
                
                cout << "\n**Pay Attention**\nPassword can't contain spaces.\n";
                    
                 string password1;
                 cin >> password1;
                 system("cls");
                 cout << "\t\t      ************************************ " << endl;
				 cout << "\t\t                                           " << endl;
        		 cout << "\t\t        Please enter new password again.   " << endl;
				 cout << "\t\t                                           " << endl;
				 cout << "\t\t      ************************************ " << endl;
                
                    
                 string password2;
                 cin >> password2;
                 
                 for (int attempts2 = 2; attempts2 > 0; --attempts2)
                 {
                    if (password1 == password2 )
                    {
                        cout << "\n\t\t      *** Password successfully reset. ***" << endl;
                        break;
						               
                    }
                    else
                    {
                        cout << "Error: Passwords don't match." << endl << "Please try again." << endl << endl << "Number of attempts remaining: " << attempts2 << endl << endl;
                    }
                                        
                }
                
                if (password1 != password2)
                {
                    cout << "Unable to reset password at this time." << endl << "Please try again later." << endl;
                }   
                
                break;
            }
        
            else 
            { 
                cout << "Error: The codes don't match." << endl << "Please try again." << endl << endl;
                
                cout << "Number of attempts remaining: " << attempts << endl << endl;
            }
        }  
        
        if (UserCode != SecureCode)
        {
            cout << "Limit of attempts reached." << endl << "Unable to verify identity at this time." << endl << "Please try again later. " << endl; 
        }
        
    }
    
    if (TextMessage == 'n')
    {	system("cls");
        cout << "You have selected 'No'." << endl << endl;
        
        cout << "Please answer the following security questions to verify your identity." << endl << endl; 

        cout << "\t\t     **************************************** " << endl;
		cout << "\t\t                                              " << endl;
        cout << "\t\t     What was the name of your first teacher? " << endl;
		cout << "\t\t                                              " << endl;
		cout << "\t\t     **************************************** " << endl;
        cout << "" << endl;
        
        string answer1 = "Reza";
            // random fictional answer
            
        string answer1U;
            // User's answer
        
        cin >> answer1U;
        cin.ignore (1000, '\n');
        // would mean either next 1000 characters or the characters until '\n' shall be ignored, whichever comes first.
        // cin.ignore(1000) would mean the next 1000 characters in the read buffer shall be ignored. 
        //The 1000 is put there to skip over a specific amount of chars before the specified break point, in this case, the \n newline character.
        
        cout << "Your answer: " << answer1U << endl << endl;
        cout << "\t\t   *********************************************** " << endl;
		cout << "\t\t                                                   " << endl;
        cout << "\t\t   What was the name of the street you grew up on? " << endl;
		cout << "\t\t                                                   " << endl;
		cout << "\t\t   *********************************************** " << endl;
        cout << "" << endl;
        
        // For example Yaser street
        string answer2 = "Yaser street";
        // Random fictional answer
        
        string answer2U;
        
        getline (cin, answer2U);
            // getline () can insert an entire string while cin will stop when a space is detected
        
        cout << "Your answer: " << answer2U << endl << endl;
        
        cout << "\t\t      *************************************** " << endl;
		cout << "\t\t                                              " << endl;
        cout << "\t\t      What is the name of your favorite book? " << endl;
		cout << "\t\t                                              " << endl;
		cout << "\t\t      *************************************** " << endl;
        cout << "" << endl;
        
		string answer3 = "The secret";
        
        string answer3U;
        
        getline (cin, answer3U);
        
        cout << "Your answer: " << answer3U << endl << endl;
        
        for (int tries = 2; tries > 0; --tries)
        {
            if (answer1U == answer1 && answer2U == answer2 && answer3U == answer3)
            {
                cout << "Identity verified." << endl << endl;
                
                cout << "Please enter new password. \n**Pay Attention**\nPassword cannot contain spaces.\n";
                
                string password1N;
                   
                cin >> password1N;
                   
                cout << "\nPlease enter new password again." << endl;
                   
                string password2N;
                   
                cin >> password2N;
                   
                for (int tries2 = 2; tries2 > 0; --tries2)
                { 
                    if (password1N == password2N)
                    {
                       cout << "Password successfully reset;)" << endl;
                       break;
                    }
                   
                    else
                    {  system("cls");
                       cout << "Error: Passwords don't match." << endl << "Please try again." << endl << endl << "Number of attempts remaining: " << tries2 << endl << endl;
                    }
                    
                }
                
                if (password1N != password2N )
                {   system("cls");
                    cout << "Unable to reset password at this time." << endl << "Please try again later." << endl;
                } 
                
                break;    
                   
            }
            
            else
            {   system("cls");
                cout << "Error: one or more of the answers given do not match." << endl << "Please try again." << endl << endl;
                
                cout << "Number of attempts remaining: " << tries << endl << endl;
            }
        }
        
        if ((answer1U != answer1) && (answer2U != answer2) && (answer3U != answer3))
        {   
            cout << "Limit of attempts reached." << endl << "Unable to verify identity at this time." << endl << "Please try again later." << endl;
        }
        
    } 
    
    if (TextMessage != 'y' && TextMessage != 'n')
    {   
        cout << "\nError: Input not recognized.\nPlease try againe later." << endl; 
    }
                
    return 0;        
            
}
