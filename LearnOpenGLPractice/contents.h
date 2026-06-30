#pragma once
#include <string>
#include <iostream>
#include "1.1.h"

using namespace std;

void subExerciseContent(string value);

int convertCode(string value)
{
	int major = value[0] - '0';   // before '.'
	int minor = value[2] - '0';   // after '.'

	return major * 10 + minor;
}

string content = 
"\n\
1. Getting Started \n\
2. Hello Window \n\
3. Model Loading \n\
4. Advanced OpenGL \n\
5. Advanced Lighting \n\
6. Pbr\n\
7. In Practice\n\
8. Guest \n\
";

string content1=
"\n\
1.1. Hello Window \n\
1.2. Hello Window Clear \n\
2.1. Hello Triangle \n\
2.2. Hello Triangle Indexed \n\
2.3. Hello Triangle Exercise 1 \n\
2.4. Hello Triangle Exercise 2 \n\
2.5. Hello Triangle Exercise 3 \n\
3.1. Shaders Uniform\n\
3.2. Shaders Interpolation\n\
3.3. Shaders Class\n\
3.4. Shaders Exercise 1\n\
3.5. Shaders Exercise 2\n\
3.6. Shaders Exercise 3\n\
4.1. Textures\n\
4.2. Textures Combined\n\
4.3. Textures Exercise 1\n\
4.4. Textures Exercise 2\n\
4.5. Textures Exercise 3\n\
4.6. Textures Exercise 4\n\
5.1. Transformations\n\
5.2. Transformations Exercise 1\n\
5.2. Transformations Exercise 2\n\
6.1. Coordinate Systems\n\
6.2. Coordinate Systems depth\n\
6.3. Coordinate Systems multiple\n\
6.4. coordinate Systems Exercise 3\n\
7.1. Camera Circle \n\
7.2. Camera Keyboard dt\n\
7.3. Camera Mouse Zoom \n\
7.4. Camera Class \n\
7.5. Camera Exercise 1 \n\
7.6. Camera Exercise 2 \n\
";

void exerciseContent()
{
	string exerciseNumber_initial;
	

	while (true)
	{
		cout << "\n" << endl;
		cout << "===============================================================" << endl;
		cout << "Enter the exercise number you want to run: " << endl;
		cout << "Press ESC to exit.\n";
		cout << "===============================================================" << endl;
		cout << content << endl;
		cout << "===============================================================" << endl;
		cin >> exerciseNumber_initial;
		cout << "===============================================================" << endl;
		// Check for ESC key
		if (exerciseNumber_initial[0] == 27)
		{
			cout << "Exiting..." << endl;
			break;
		}
	  
		 
		switch (exerciseNumber_initial[0])
		{
		case '1':
			cout << "\n" << endl;
			cout << "===============================================================" << endl;
			cout << " 1 . Getting Started" << endl;
			cout << "===============================================================" << endl;
			cout << content1 << endl;
			cout << "===============================================================" << endl;
			cin >> exerciseNumber_initial;
			subExerciseContent(exerciseNumber_initial);
			break;
		}
	}
}

void subExerciseContent(string value)
{
	switch (convertCode(value))
	{
	case 11:

		cout << "\n" << endl;
		cout << "===============================================================" << endl;
		cout << "1.1. Hello Window" << endl;
		cout << "===============================================================" << endl;
		$1_1();
		cout << "===============================================================" << endl;

		break;
	}
}