#pragma once

#ifndef GUARD_split_h
#define GUARD_split_h


#include <algorithm> //find_if()
#include <cctype> // isspace()
#include <string>
#include <vector>
#include <iostream>
using namespace std;

// �μ��� ������ ���� true, �׷��� ���� ���� false
bool space(char);

bool not_space(char);

vector<string>split(const string&);



#endif