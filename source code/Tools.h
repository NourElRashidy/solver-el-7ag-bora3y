#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <float.h>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <iomanip>

using namespace std;

const double eps = 1e-14;
const double tolerance = 1e-12;
const double FRtolerance = 1e-9;
const double uniqueError = 1e-5;
const double BShigh = 1e19;
const double BSlow = -1e19;
const int maxBSiterations = 100;


class Tools {
public:
	static int GetPower(string);
	static int Precedence(string);
	static long long GCD(long long, long long);
	static pair<long long, long long> GetFraction(double);
	static void Unique(vector<double>*);
};

