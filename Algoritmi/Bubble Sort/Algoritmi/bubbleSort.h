#pragma once

void bubbleSort(vector<Movie*>* movies) {
	bool promjena = true;
	int j = 0;
	
	while (promjena)
	{
		Movie* temp = nullptr;
		promjena = false;
		j++;
		for (int i = 0; i < movies->size() - 1; ++i)
		{
			if (movies->at(i)->getDuration() > movies->at(i + 1)->getDuration())
			{
				temp = movies->at(i);
				movies->at(i) = movies->at(i + 1);
				movies->at(i + 1) = temp;
				promjena = true;
			}
		}
	}
}
