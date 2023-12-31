// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Shane Moran
// LIAM TREACY 
// estimated time 120 minutes
// actual time 120 minutes
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to C or X to Z" << std::endl; // change this line each iteratio
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{ 
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0; 
		}		
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}	
	if (letter == 'b' || letter == 'B')
	{
		if (region == 1)
		{

			if (region == 1)
			{
				std::cout << "Bahamas, Barbados, Belize, Bermuda, Bolivia" << std::endl;
			}
			if (region == 2)
			{
				std::cout << "Belarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
			}
			if (region == 3)
			{
				std::cout << "Burundi, Benin, Botswana, Burkina Faso" << std::endl;
			}
			if (region == 4)
			{
				std::cout << "Bahrain, Bangladesh, Bhutan, Brunei" << std::endl;
			}
			if (region == 5)
			{
				std::cout << "Brazil" << std::endl;
			}
		}
	}
		if (letter == 'c' || letter == 'C')
		{
			if (region == 1)
			{
				std::cout << "Cayman Islands, Colombia, Costa Rica, Cuba" << std::endl;
			}
			if (region == 2)
			{
				std::cout << "Croatia, Cyprus, Czech Republic" << std::endl;
			}
			if (region == 3)
			{
				std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Democratic Republic of the Congo, C�te D'ivoire" << std::endl;
			}
			if (region == 4)
			{
				std::cout << "Cambodia, China, Christmas Island, Cocos (Keeling) Islands" << std::endl;
			}
			if (region == 5)
			{
				std::cout << "Canada, Chile, Cook Islands" << std::endl;
			}
		}
		if (letter == 'd' || letter == 'D')
		{
			if (region == 1)
			{
				std::cout << "Dominica, Dominican Republic" << std::endl;
			}
			if (region == 2)
			{
				std::cout << "Denmark" << std::endl;
			}
			if (region == 3)
			{
				std::cout << "Djibouti" << std::endl;
			}
			if (region == 4)
			{
				std::cout << "There are no countries beginning with D in Asia" << std::endl;
			}
			if (region == 5)
			{
				std::cout << "There are no countries beginning with D in the rest of  the World" << std::endl;
			}
		}
		if (letter == 'x' || letter == 'X') // X Code by Liam
		{
			if (region == 1)
			{
				std::cout << "there are no Xs in the Americas" << std::endl; // no country
			}
			if (region == 2)
			{
				std::cout << "there are no Xs in Europe" << std::endl; // no country
			}
			if (region == 3)
			{
				std::cout << "there are no Xs in Africa" << std::endl; // no country
			}
			if (region == 4)
			{
				std::cout << "there is no Xs in Asia" << std::endl; // no country
			}
			if (region == 5)
			{
				std::cout << "there is no Xs in the rest of the world either" << std::endl; // no country
			}
		}
	if (letter == 'y' || letter == 'Y') // Y letter code by Liam
	{
		if (region == 1)
		{
			std::cout << "there is no Ys in the Americas" << std::endl; // no country
		}
		if (region == 2)
		{
			std::cout << "there is no Ys in Europe" << std::endl; // no country
		}
		if (region == 3)
		{
			std::cout << "there is no Ys in Africa" << std::endl; // no country
		}
		if (region == 4)
		{
			std::cout << "Yemen Arabian Peninsula" << std::endl; //country display
		}
		if (region == 5)
		{
			std::cout << "there is no Ys in the rest of the world" << std::endl; // no country
		}
	}


	if (letter == 'z' || letter == 'Z') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
		}
		if (region == 2)
		{
			std::cout << "There are no Zs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Zimbabwe, Zambia" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Zs in Aisa" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Zs in rest of the world" << std::endl;
		}

	}

	return 1;
}