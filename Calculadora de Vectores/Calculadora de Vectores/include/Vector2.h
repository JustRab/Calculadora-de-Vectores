#pragma once
#include "Commons.h"

class Vector2 {
public:
	// Constructor que toma las componentes x e y del vector
	Vector2(double x, double y) : x_(x), y_(y) {}
	~Vector2() = default;

	//Suma de vectores
	Vector2 Suma(Vector2 v) {
		return Vector2(x_ + v.x_, y_ + v.y_);
	}

	//Resta de vectores
	Vector2 Resta(Vector2 v) {
		return Vector2(x_ - v.x_, y_ - v.y_);
	}

	//Multiplicacion de vectores
	Vector2 Multiplicacion(Vector2 v) {
		return Vector2(x_ * v.x_, y_ * v.y_);
	}

	//Division de vectores
	Vector2 Division(Vector2 v) {
		return Vector2(x_ / v.x_, y_ / v.y_);
	}

	//Producto escalar de vectores
	double ProductoEscalar(Vector2 v) {
		return (x_ * v.x_) + (y_ * v.y_);
	}

	//Producto vectorial de vectores
	Vector2 ProductoVectorial(Vector2 v) {
		return Vector2((x_ * v.y_) - (y_ * v.x_), (x_ * v.y_) - (y_ * v.x_));
	}

	// Magnitud del vector
	double Magnitud() {
		return sqrt(x_ * x_ + y_ * y_);
	}

	// Normalizar el vector
	Vector2 Normalizar() {
		double mag = Magnitud();
		return Vector2(x_ / mag, y_ / mag);
	}


	// Mostrar el vector en la consola
	void Mostrar() {
		cout << "(" << x_ << ", " << y_ << ")" << endl;
	}
private:
	double x_;
	double y_;
};

