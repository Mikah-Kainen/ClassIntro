#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <random>
#include <ctime>

class Person
{
private:
	int age;
	int height;
	std::string name;

public:
	Person(int age, int height, std::string name) : age(age), height(height), name(name)
	{

	}
	Person(std::string name);

	int GetAge()
	{
		return age;
	}
	void SetAge(int age)
	{
		this->age = age;
	}

	int GetHeight()
	{
		return height;
	}
	void SetHeight(int height)
	{
		this->height = height;
	}

	std::string GetName()
	{
		return name;
	}
	void SetName(std::string name)
	{
		this->name = name;
	}

	void Print();
};

Person::Person(std::string name) : name(name)
{
	age = 0;
	height = 0; 
}

void Person::Print()
{
	std::cout << "name: " << name << ", height: " << height << ", age: " << age << std::endl;
}

class Test
{

private:
	int something;
public:
	Test(int s) : something(s)
	{
	}
	Test();

	int GetSomething()
	{
		return something;
	}
	void SetSomething(int something)
	{
		this->something = something;
	}
	void Print();

};

Test::Test()
{
	something = 0;
}

void Test::Print()
{
	std::cout << something << std::endl;
}


void add(int& x, int& y, int& z)
{
	z = x +y;
}

//class testInfo
//{
//private:
//	static const int questions = 3;
//
//	std::array<int, questions> solutions = { 23, 53, 87 };
//	std::vector<std::array<int, questions>> differentScores;
//
//public:
//	testInfo(std::array<int, questions> givenAnswers, std::string studentName) : givenAnswers(givenAnswers), studentName(studentName)
//	{
//		SetScore;
//	}
//
//	std::array<int, questions> givenAnswers;
//	std::string studentName;
//	int score;
//
//	void SetScore()
//	{
//		int correctAnswers = 0;
//		for (int i = 0; i < 3; i++)
//		{
//			if (solutions[i] == givenAnswers[i])
//			{
//				correctAnswers++;
//			}
//		}
//		//for (int num : givenAnswers)
//		//{
//		//	num++;
//		//}
//		score = correctAnswers;
//	}
//
//	int GetScore()
//	{
//		return score;
//	}
//
//	std::array<int, questions> GetSolutions()
//	{
//		return solutions;
//	}
//
//	void setSolutions(std::array<int, questions> newSolutions)
//	{
//		//this->solutions = newSolutions;
//		// set the element values
//		solutions = newSolutions;
//		for (int i = 0; i < questions; i ++)
//		{
//			solutions[i] = newSolutions[i];
//		}
//		SetScore();
//	}
//
//};

class Game
{
private:
	std::array<int, 4> positions{};

public:

	Game()
	{
		for(int i = 0; i < positions.size(); i ++)
		{
			positions[i] = std::rand() % 10;
			for (int i = 0; i < positions.size(); i ++)
			{
				if (positions[i] == positions[(i + 1) % 4] || positions[i] == positions[(i + 2) % 4] || positions[i] == positions[(i + 3) % 4])
				{
					positions[i] = std::rand() % 10;
					i = 0;
				}
			}
		}
	}

	bool CheckPositions(std::string input)
	{
		std::array<std::string, 4> parsedInput;
		int x = 0;
		for (int i = 0; i < positions.size(); i ++)
		{
			while (input[x] != ',' && input[x] != ';')
			{
				parsedInput[i] += input[x];
				x++;
				if (x >= input.size())
				{
					break;
				}
			}
			x++;
		}

		bool didWin = true;
		for (int i = 0; i < positions.size(); i ++)
		{
			if (positions[i] == std::stoi(parsedInput[i]))
			{
				std::cout << parsedInput[i] << " is correct!" << std::endl;
			}
			else if (std::stoi(parsedInput[i]) == positions[(i + 1) % 4] || std::stoi(parsedInput[i]) == positions[(i + 2) % 4] || std::stoi(parsedInput[i]) == positions[(i + 3) % 4])
			{
				std::cout << parsedInput[i] << " is in the wrong place!" << std::endl;
				didWin = false;
			}
			else
			{
				std::cout << parsedInput[i] << " is completely wrong!" << std::endl;
				didWin = false;
			}
		}

		return didWin;
//		std::stoi
	}



};

int main()
{
	std::srand(std::time(nullptr));

	int bestScore = 0;
	while (true)
	{
		Game game{};
		int count = 0;

		std::string input{};
		while (true)
		{

			count = count + 1;
			std::cin >> input;
			if (game.CheckPositions(input))
			{
				std::cout << std::endl;
				if (count < bestScore)
				{
					std::cout << "Good job you won! Your score is " << count << ". Your best score is " << bestScore << ".";
				}
				else
				{
					bestScore = count;
					std::cout << "Good job you won! You beat your previous record! Your new Hight score is " << bestScore << ".";
				}
				std::cout << std::endl;
				break;
			}
		}

		std::string playAgain{};
		std::cout << "If you want to play again type anything. If you want to rage quit type !leave." << std::endl;
		std::cin >> playAgain;
		if (playAgain == "!leave")
		{
			break;
		}
	}


	//HW
	//Person Class
	//Age, Height, Name
	//Get Set for each
	//Print function (name, age, height)
	//int age = 7;
	//Person person{age, 8, "bob"};
	//person.Print();
	//age = 10;
	//person.Print();

	//int x = 2;
	//int y = 4;
	//int z = 1;
	//add(x, y, z);
	//std::cout << z;

	//Test test{ 5 };
	//test.SetSomething(4);
	//std::cout << std::endl << test.GetSomething() << std::endl;
	//test.Print();
	//Test test2{};
	//test.Print();
	
}