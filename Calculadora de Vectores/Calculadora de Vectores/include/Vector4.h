#pragma once
#include "Commons.h"

class Vector4
{
public:
	Vector4(double x, double y, double z, double w) : x_(x), y_(y), z_(z), w_(w) {}
	~Vector4() = default;

	//Suma de vectores
	Vector4 Suma(Vector4 v)
	{
		return Vector4(x_ + v.x_, y_ + v.y_, z_ + v.z_, w_ + v.w_);
	}

	//Resta de vectores
	Vector4 Resta(Vector4 v)
	{
		return Vector4(x_ - v.x_, y_ - v.y_, z_ - v.z_, w_ - v.w_);
	}

	//Multiplicacion de vectores
	Vector4 Multiplicacion(Vector4 v)
	{
		return Vector4(x_ * v.x_, y_ * v.y_, z_ * v.z_, w_ * v.w_);
	}

	//Division de vectores
	Vector4 Division(Vector4 v)
	{
		return Vector4(x_ / v.x_, y_ / v.y_, z_ / v.z_, w_ / v.w_);
	}

	//Producto escalar
	double ProductoEscalar(Vector4 v)
	{
		return (x_ * v.x_) + (y_ * v.y_) + (z_ * v.z_) + (w_ * v.w_);
	}

	/*Producto vectorial
	Vector4 ProductoVectorial(Vector4 v)
	{
		return Vector4(
			(y_ * v.z_ - z_ * v.y_) + (w_ * v.w_ * (x_ * v.x_)),
			(z_ * v.x_ - x_ * v.z_) + (w_ * v.w_ * (y_ * v.y_)),
			(x_ * v.y_ - y_ * v.x_) + (w_ * v.w_ * (z_ * v.z_)),
			w_ * v.w_ * (x_ * v.x_ + y_ * v.y_ + z_ * v.z_)
		);
	}*/

	//Magnitud del vector
	double Magnitud()
	{
		return sqrt(pow(x_, 2) + pow(y_, 2) + pow(z_, 2) + pow(w_, 2));
	}

	//Normalizacion del vector
	Vector4 Normalizar()
	{
		double magnitud = Magnitud();
		return Vector4(x_ / magnitud, y_ / magnitud, z_ / magnitud, w_ / magnitud);
	}

	//Mostrar vector en la consola
	void Mostrar()
	{
		cout << "Vector: (" << x_ << ", " << y_ << ", " << z_ << ", " << w_ << ")" << endl;
	}

private:
	float w_;
	float x_;
	float y_;
	float z_;
};
