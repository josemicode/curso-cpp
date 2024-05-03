#pragma once
#include <iostream>

using namespace std;

class Vector2D{
    private:
        float x;
        float y;
    
    public:
        Vector2D();
        Vector2D(float x, float y);
        Vector2D& operator=(const Vector2D& otro);
	Vector2D operator+(const Vector2D& other);
	Vector2D operator/(const float& total);
	Vector2D operator*(const float& a);
	friend ostream & operator<<(ostream &os, Vector2D& v){
		return os << "("  << v.x << ", " << v.y << ")" << "\n";
	}
	string toString();
};
