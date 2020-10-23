#include <iostream>
#include <string>


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

	void Print()
	{
		std::cout << "name: " << name << ", height: " << height << ", age: " << age << std::endl;
	}
};

//Person::Print()
//{
//
//}

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



int main()
{

	//HW
	//Person Class
	//Age, Height, Name
	//Get Set for each
	//Print function (name, age, height)

	Person person{7, 8, "bob"};
	person.Print();

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