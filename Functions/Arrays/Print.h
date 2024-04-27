#pragma once
#include"stdafx.h"
#include"Constants.h"

template<typename T>
//template - создает шаблон
//typename - создает шаблонный тип
//T - имя шаблонного типа
void Print(T arr[], const int n);
template<typename T>void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);