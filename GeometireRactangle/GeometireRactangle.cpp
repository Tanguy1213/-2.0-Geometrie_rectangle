// GeometireRactangle.cpp : Définit le point d'entrée pour l'application console.
//

#include "stdafx.h"
#include <iostream>

int calculate_area(int width, int height)
{
	return width * height;
}
int calculate_perimeter(int width, int height)
{
	return 2 * (width + height);
}

int main()
{
	int width = 0;
	int height = 0;

	std::cout << "Entrez la longueur puis la hauteur du rectangle :\n";
	std::cin >> width;
	std::cin >> height;

	int area = calculate_area(width,height);
	int perimeter = calculate_perimeter(width, height);
	//debug

	std::cout << "La surface est de " << area << "\n" "Le perimetre est de " << perimeter << "\n";
	system("pause");
    return 0;
}

