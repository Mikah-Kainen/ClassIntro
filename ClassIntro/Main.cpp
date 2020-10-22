#include <iostream>
#include <string>


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



	//int x = 2;
	//int y = 4;
	//int z = 1;
	//add(x, y, z);
	//std::cout << z;

	Test test{ 5 };
	test.SetSomething(4);
	std::cout << std::endl << test.GetSomething() << std::endl;
	test.Print();
	Test test2{};
	test.Print();
	
}