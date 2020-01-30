
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	srand(static_cast<unsigned int>(time(0)));
	//seed random number generator, and init sumulation value




	
	int AI_Bianary_searchGridLowNumber = 1;
	int AI_Bianary_searchGridHighNumber = 64;

	int Human_searchGridLowNumber = 1;
	int Human_searchGridHighNumber = 64;
	// keep the target location the same for all parties

	int AI_Linear_searchGridLowNumber = 1;
	int AI_Linear_searchGridHighNumber = 64;

	int AI_Random_searchGridLowNumber = 1;
	int AI_Random_searchGridHighNumber = 64;

	
	int actualTargetlocation = rand() % ((AI_Bianary_searchGridHighNumber - AI_Bianary_searchGridLowNumber) / 2 + AI_Bianary_searchGridLowNumber);
	//random number between 1-64 to hold location of target

	int AI_Bianary_Number_Of_Tries = 0;
	int AI_Bianary_Current_Location_Prediction = 0;

	int Human_Number_Of_Tries = 0;
	int Human_Current_Location_Prediction = 0;

	int AI_Linear_Number_Of_Tries = 0;
	int AI_Linear_Current_Location_Prediction = 0;

	int AI_Random_Number_Of_Tries = 0;
	int AI_Random_Current_Location_Prediction = 0;
	//vars that track both the tries, and current guesses
	
	cout << "\tWelcome to Search and Rescue\n\n";
	//your title for the simulation here




	//*********************************Human tries to find target**************************************************
	do
	{
		//this is where the AI makes a target Guess
		cout << "\n\nthe real target is at  a secret location\n\n";

		
		cout << "\n\nPlease enter the position ("  << Human_searchGridLowNumber << "-" << Human_searchGridHighNumber << " )  you believe the enemy is hiding at : \n\n  ";

		cin >> Human_Current_Location_Prediction;

		// Human_Current_Location_Prediction = ((Human_searchGridHighNumber - Human_searchGridLowNumber) / 2 + Human_searchGridLowNumber);

		++Human_Number_Of_Tries;

		//adds a try to the counter
		if (Human_Current_Location_Prediction > actualTargetlocation)
		{


			cout << "The Prediction is too high!\n\n";

			Human_searchGridHighNumber = Human_Current_Location_Prediction - 1;

		}

		else if (Human_Current_Location_Prediction < actualTargetlocation)
		{

			cout << "The Prediction was Too Low!!!\n\n";

			Human_searchGridLowNumber = Human_Current_Location_Prediction + 1;
		}

		else
		{ 

			cout << "\n Thats it!! you got The target in " << Human_Number_Of_Tries << " Guesses!!\n";

		}
	} while (Human_Current_Location_Prediction != actualTargetlocation);
	//**********************END OF Human Human tries to find target**********************************************

	
	cout << " The human has finished! Now launching the Binary AI \n\n";


	system("Pause");

	
	//*********************************Bianary AI search algorythum tries to find target**************************************************
	do
	{
		//this is where the AI makes a target Guess
		cout << "\n\n The AI guesses the target is at location : " << AI_Bianary_Current_Location_Prediction;

		cout << "\n\nThe real target is at : " << actualTargetlocation;

		AI_Bianary_Current_Location_Prediction = ((AI_Bianary_searchGridHighNumber - AI_Bianary_searchGridLowNumber) / 2 + AI_Bianary_searchGridLowNumber);

		++ AI_Bianary_Number_Of_Tries;

		//adds a try to the counter
		if (AI_Bianary_Current_Location_Prediction > actualTargetlocation)
		{


			cout << "The AI Prediction is too high!\n\n";

			AI_Bianary_searchGridHighNumber = AI_Bianary_Current_Location_Prediction - 1;

		}

		else if (AI_Bianary_Current_Location_Prediction < actualTargetlocation)
		{

			cout << "The Prediction was Too Low!!!\n\n";

			AI_Bianary_searchGridLowNumber = AI_Bianary_Current_Location_Prediction + 1;
		}

		else
		{

			cout << "\n Thats it!! you got The package back in " << AI_Bianary_Number_Of_Tries << " Guesses!!\n";

		}
	} while (AI_Bianary_Current_Location_Prediction != actualTargetlocation);
	//**********************Bianary AI search algorythum tries to find target**********************************************

	cout << "Launch the Linear AI Search";
	system("Pause");

	
	//*********************************linear AI search algorythum tries to find target**************************************************
	do
	{
		//this is where the AI makes a target Guess

		AI_Linear_Current_Location_Prediction++;
		//algo to make the predictions
		cout << "\n\n The Linear AI guesses the target is at location : " << AI_Linear_Current_Location_Prediction;

		cout << "\n\nThe real target is at : " << actualTargetlocation;


		++AI_Linear_Number_Of_Tries;

		//adds a try to the counter
		if (AI_Linear_Current_Location_Prediction > actualTargetlocation)
		{


			cout << "The AI Prediction is too high!\n\n";
		}

		else if (AI_Linear_Current_Location_Prediction < actualTargetlocation)
		{

			cout << "The Prediction was Too Low!!!\n\n";
		}

		else
		{

			cout << "\n Thats it!! Linear AI got The package back in " << AI_Linear_Number_Of_Tries << " Guesses!!\n";

		}
	} while (AI_Linear_Current_Location_Prediction != actualTargetlocation);
	//**********************linear AI search algorythum found target**********************************************


	return 0;
}
//game loop

