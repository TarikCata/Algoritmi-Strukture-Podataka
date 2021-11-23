#pragma once
void Print(int* arr,const int length) {
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << "   ";
	cout << "\n";
}