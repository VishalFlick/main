#include<iostream>
#include<string>

struct phone
{
	std::string name;
	int ram;
	int rom;
	std::string processor;
	int camera;
	double  price;
};

int main()
{
	phone moto;

	// store data in user defined data type

	moto.name = "Moto123";
	moto.processor = "Sanapdragon";
	moto.price = 4500;
	moto.camera = 13;
	moto.ram = 8;
	moto.rom = 64;

	//print data of user defined datatype

	std::cout<<"Name: "<< moto.name <<std::endl;
	std::cout<<"Processor: "<< moto.processor <<std::endl;
	std::cout<<"Price: "<< moto.price <<std::endl;
	std::cout<<"Camera: "<< moto.camera <<std::endl;
	std::cout<<"Ram: "<< moto.ram <<std::endl;
	std::cout<<"Rom: "<< moto.rom <<std::endl;

	return 0;
}