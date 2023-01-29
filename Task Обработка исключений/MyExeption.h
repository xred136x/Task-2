#pragma once
#include<iostream>
#include<string>
#include<stdio.h>
#include<utility>
#include<math.h>
#include<exception>
#include<conio.h>

class MyExeption
{
public:
	MyExeption() {};
	const std::string& What() {
		return _whatStr;
	}
	float Func(MyExeption e, float x, float y) {
	if (y == 0)
		throw e;
	return x / y;
}

 
private:
	std::string _whatStr = "it's Problem";
};

