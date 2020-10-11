
#include "olcConsoleGameEngine.h"
using namespace std;

struct vec3d {
	float x, y, z;

};

struct triangle {
	vec3d p[3];

};

struct mesh {

	vector<triangle> tris;
};


class engine3D : public olcConsoleGameEngine {
public:
	engine3D() {
		m_sAppName = L"3D Demo";
	}

public:
	bool OnUserCreate() override {
		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override {
		return true;
	}

};
 

int main()
{
	engine3D demo;
	if (demo.ConstructConsole(256, 240, 4, 4))
		demo.Start();

	return 0;
}


