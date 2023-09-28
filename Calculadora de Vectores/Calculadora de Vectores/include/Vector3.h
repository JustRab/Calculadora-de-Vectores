#pragma once
#include "Commons.h"

class Vector3
{
public:
	// Constructor que toma las componentes x, y y z del vector
	Vector3(double x, double y, double z) : x_(x), y_(y), z_(z) {}
	~Vector3() = default;

	//Suma de vectores
	Vector3 Suma(Vector3 v)
	{
		return Vector3(x_ + v.x_, y_ + v.y_, z_ + v.z_);
	}

	//Resta de vectores
	Vector3 Resta(Vector3 v)
	{
		return Vector3(x_ - v.x_, y_ - v.y_, z_ - v.z_);
	}

	//Multiplicacion de vectores
	Vector3 Multiplicacion(Vector3 v)
	{
		return Vector3(x_ * v.x_, y_ * v.y_, z_ * v.z_);
	}

	//Division de vectores
	Vector3 Division(Vector3 v)
	{
		return Vector3(x_ / v.x_, y_ / v.y_, z_ / v.z_);
	}

	//Producto escalar
	double ProductoEscalar(Vector3 v)
	{
		return (x_ * v.x_) + (y_ * v.y_) + (z_ * v.z_);
	}

	//Producto vectorial
	Vector3 ProductoVectorial(Vector3 v)
	{
		return Vector3((y_ * v.z_) - (z_ * v.y_), (z_ * v.x_) - (x_ * v.z_), (x_ * v.y_) - (y_ * v.x_));
	}

	//Magnitud del vector
	double Magnitud()
	{
		return sqrt((x_ * x_) + (y_ * y_) + (z_ * z_));
	}

	//Normalizacion del vector
	Vector3 Normalizar()
	{
		double magnitud = Magnitud();
		return Vector3(x_ / magnitud, y_ / magnitud, z_ / magnitud);
	}

	// Mostrar el vector en la consola
	void Mostrar()
	{
		cout << "Vector: (" << x_ << ", " << y_ << ", " << z_ << ")" << endl;
	}



private:
	double x_;
	double y_;
	double z_;
};