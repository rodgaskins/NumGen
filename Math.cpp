/*
#include "Math.h"
#include <cstdlib>
#include <iostream>

using namespace std;

Math m;

void Math::mMath() 
{
	do
	{
		std::cout << "enter a number (" << m.count + 1 << " of " << NUM << " - digit 5 to stop input) : ";
		std::cin >> m.val;
		if (m.val == 5)
		{
			std::cout << "\nInput stopped! Digited numbers: " << m.count << ".\n";
			break;
		}
		m.values[m.count] = m.val;
		m.count++;
	} while (m.count<NUM);

	m.mean = m.CalcMean(m.numbers, m.count);
	m.range = m.CalcRange(m.numbers, m.count);
	std::qsort((void*)m.numbers, m.count, sizeof(int), m.CompareValues);
	m.mode = m.CalcMode(m.numbers, m.count);
	m.median = m.CalcMedian(m.numbers, m.count);

	std::cout << "\n  Mean: " << m.mean;
	std::cout << "\n  Median: " << m.median;
	std::cout << "\n  Mode: " << m.mode;
	std::cout << "\n  Range: " << m.range;
	std::cout << endl;
}

Math::Math()
{}

Math::~Math()
{
}

//define the 'comparison function' used by qsort() for the sort
int Math::CompareValues(const void *a, const void *b)
{
	const int *val1 = (const int *)a;
	const int *val2 = (const int *)b;
	if (*val1 < *val2) return -1;
	else if (*val1 == *val2) return 0;
	else return 1;
}

//define the CalcMean() , CalcMedian(), CalcMode() and CalcRange(). CalcMedian() and CalcMode() work on a pre-sorted array!
float Math::CalcMean(const int values[], int num)
{
	if (num <= 0) return 0;
	int count = 0;
	for (int i = 0; i<num; i++) count += values[i];
	return (float)count / num;
}

float Math::CalcMedian(const int values[], int num)
{
	if (num <= 0) return 0;
	if (num % 2) return (float)values[(num + 1) / 2];
	else 
	{
		int pos = num / 2;
		return (float)(values[pos] + values[pos + 1]) / 2;
	}
}

int Math::CalcMode(const int values[], int num)
{
	if (num <= 0)return 0;
	int max_count = 0;
	int pos = 0;
	int max_nums = 0;
	int count = 1;
	for (int i = 1; i<num; i++)
	{
		if (values[i] != values[pos]) 
		{
			if (count > max_count) 
			{
				max_count = count;
				max_nums = 0;
			}
			else if (count == max_count) max_nums++;
		pos = i;
		count = 0;
		}
	else count++;
	}
	if (max_nums) return 0;
	else return values[pos];
}

int Math::CalcRange(const int values[], int num)
{
	if (num <= 0) return -1;
	int max, min;
	max = min = values[0];
	for (int i = 1; i<num; i++) 
	{
		if (values[i]>max)max = values[i];
		else if (values[i]<min) min = values[i];
	}
	return max - min;
}
*/