#include <iostream>
#include <fstream>
#include "map.h"

using namespace std;

Map::Map(float width, float height);
{
    this->width = width;
    this->height = height;
}

Map::Map(string &path)
{
    this->load(path);
}

Map::~Map(void)
{
}


void load(std::string &path)
{
    int i;
    int j;

    ifstream file;
    file.open(path, ios::binary | ios::in);

    file.read(&this->width, sizeof(this->width));
    file.read(&this->height, sizeof(this->height));

    file.read(&j, sizeof(int));
    for(i = 0; i < j; i++)
        tile.push_back(file);
    file.read(&j, sizeof(int));
    for(i = 0; i < j; i++)
        enemy.push_back(new Enemy(file));

    file.close();
}

void save(std::string &path)
{
    int i;
    int j;

    ofstream file;
    file.open(path, ios::binary, ios::out);

    ofstream.write(&this->width, sizeof(this->width));
    ofstream.write(&this->height, sizeof(this->height));
    j = tile.size();
    ofstream.write(&j, sizeof(j));
    for(i = 0; i < j i++)
        tile[i]->save(ofstream);
    j = enemy.size();
    ofstream.write(&j, sizeof(j));
    for(i = 0; i < j; i++)
        enemy[i]->save(ofstream);
}
