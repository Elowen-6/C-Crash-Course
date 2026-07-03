#include <iostream>
#include <string>
using namespace std;

struct Vector3 {
    float x, y, z;
};

struct Transform {
    Vector3 position;
    Vector3 rotation;
    Vector3 scale;
};

struct Actor {
    string name;
    Transform transform;
    int hp;
};

int main()
{
    Actor player;
	player.name = "Hero";
	player.hp = 100;
	player.transform.position = { 0.0f, 0.0f, 0.0f };
	player.transform.rotation = { 0.0f, 90.0f, 0.0f };
	player.transform.scale = { 1.0f, 1.0f, 1.0f };  

    cout << player.name << "位置：（"
        << player.transform.position.x << ", "
        << player.transform.position.y << ", "
		<< player.transform.position.z << "）" << endl;
}


