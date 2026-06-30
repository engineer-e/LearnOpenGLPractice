#pragma once

#include <iostream>
#include <conio.h>   // add this
#include <string>
#include <unordered_map>
#include "1.1.h"
#include "1.2.h"
#include "2.1.h"
#include "2.2.h"   
#include "2.3.h"

using namespace std;


/*
========================================
FUNCTION REGISTRY
========================================
Add all exercise functions here
*/

unordered_map<string, void(*)()> exerciseMap =
{
    {"1.1", $1_1},
    {"1.2", $1_2},
    {"2.1", $2_1},
    {"2.2", $2_2},
    {"2.3", $2_3}
};




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

string content2 =
"\n\
1. Colors \n\
2.1. Basic Lighting Diffuse \n\
2.2. Basic Lighting Specular \n\
2.3. Basic Lighting Exercise 1 \n\
2.4. Basic Lighting Exercise 2 \n\
2.5. Basic Lighting Exercise 3 \n\
3.1. Materials \n\
3.2. Materials Exercise 1 \n\
4.1. Lighting Maps Diffuse Map \n\
4.2. Lighting Maps Specular Map \n\
4.3. Lighting Maps Exercise 2 \n\
4.4. Lighting Maps Exercise 4 \n\
5.1. Light Casters Directional \n\
5.2. Light Casters Point \n\
5.3. Light Casters Spot \n\
5.4. Light Casters Spot Soft \n\
6. Multiple Lights \n\
6. Multiple Lights Exercise 1 \n\
";

string content3 = "\n\
1. Model Loading \n\
";

string content4 = "\n\
1.1. Depth Testing \n\
1.2. Depth Testing View \n\
2. Stencil Testing \n\
3.1. Blending Discard \n\
3.2. Blending Sort \n\
4. Face Culling Exercise 1 \n\
5.1. Framebuffers \n\
5.2. Framebuffers Exercise 1 \n\
6.1. Cubemaps Skybox \n\
6.2. Cubemaps Environment Mapping \n\
8. Advanced GLSL UBO \n\
9.1. Geometry Shader Houses \n\
9.2. Geometry Shader Explosion \n\
9.3. Geometry Shader Normals \n\
10.1. Instancing Quads \n\
10.2. Asteriods	\n\
10.3. Asteriods Instanced \n\
11.1. Anti Aliasing MSAA \n\
11.2. Anti Aliasing Offscreen \n\
";

string content5 =	
"\n\
1. Advanced Lighting \n\
2. Gamma Correction \n\
3.1.1. Shadow Mapping Depth	\n\
3.1.2. Shadow Mapping Base	\n\
3.1.3. Shadow Mapping \n\
3.2.1. Point Shadows \n\
3.2.2. Point Shadows Soft \n\
3.3. CSM \n\
4. Normal Mapping \n\
5.1. Parallax Mapping \n\
5.2. Steep Parallax Mapping \n\
5.3. Parallax Occlusion Mapping \n\
6. HDR \n\
7. Bloom \n\
8.1. Deferred Shading \n\
8.2. Deferred Shading Volumes \n\
9. SSAO \n\
";

string content6 = 
"\n\
1.1. Lighting \n\
1.2. Lighting Textures \n\
2.1.1. IBL Irradiance Conversion \n\
2.1.2. IBL Irradiance  \n\
2.2.1. IBL Specular \n\
2.2.2. IBL Specular Textured \n\
";

string content7 =
"\n\
1. Debugging \n\
2. Text Rendering \n\
3. 2D Game \n\
";

string content8 =
"\n\
2020/OIT                   \n\
2020/Skeletal Animation    \n\
2021/1.Scene/1.Scene Graph \n\
2021/2. CSM \n\
2021/3. Tessellation/Terrain CPU Src \n\
2021/3. Tessellation/Terrain GPU Dist \n\
2021/4. DSA \n\
2022/5. Computer Shader Helloworld\n\
2022/6. Physially Based Bloom\n\
2022/7. Area Light\n\
";






/*
========================================
MAIN MENU CONTENT
========================================
*/

/*string content =
"\n\
1. Getting Started \n\
2. Lighting \n\
3. Model Loading \n\
4. Advanced OpenGL \n\
5. Advanced Lighting \n\
6. PBR\n\
7. In Practice\n\
8. Guest \n\
";*/

/*
========================================
SUB MENUS
========================================
*/

string menus[] =
{
    "",
    // 1
	content1,
	content2,
	content3,
	content4,
	content5,
	content6,
	content7,
	content8    
};

string titles[] =
{
    "",
    "Getting Started",
    "Lighting",
    "Model Loading",
    "Advanced OpenGL",
    "Advanced Lighting",
    "PBR",
    "In Practice",
    "Guest"
};

/*
========================================
SUB EXERCISE LOOP
========================================
*/

void subExerciseContent(string value)
{
     
        auto it = exerciseMap.find(value);

        if (it != exerciseMap.end())
        {
            cout << "\n===============================================================\n";
            cout << "Running Exercise: " << value << endl;
            cout << "===============================================================\n";

            it->second();

            cout << "===============================================================\n";
        }
        else
        {
            cout << "Invalid Exercise!" << endl;
        }

   
}

/*
========================================
MAIN LOOP
========================================
*/

void exerciseContent()
{
    string input;

    while (true)
    {
        cout << "\n===============================================================\n";
        cout << "Enter the exercise number you want to run:\n";
        cout << "Press ESC to exit.\n";
        cout << "===============================================================\n";
        cout << content << endl;
        cout << "===============================================================\n";

       // cin >> input;

        int key = _getch(); // instant key read



        if (key == 27)
        {
            cout << "Exiting Program..." << endl;
            break;
        }

        input = (char)key;


        int chapter = input[0] - '0';

        if (chapter >= 1 && chapter <= 8)
        {
            cout << "\n===============================================================\n";
            cout << chapter << ". " << titles[chapter] << endl;
            cout << "===============================================================\n";
            cout << menus[chapter] << endl;
            cout << "===============================================================\n";

            cin >> input;

            subExerciseContent(input);
        }
        else
        {
            cout << "Invalid Chapter!" << endl;
        }
    }
}



