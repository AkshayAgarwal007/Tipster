/*
 * Copyright 2017 Akshay Agarwal <agarwal.akshay.akshay8@gmail.com>
 * All rights reserved. Distributed under the terms of the MIT license.
 */
#include "Shuffle.h"


int
RandomGenerator(int i)
{
	return rand() % i;
}


void
CreateRandomSeq(vector<int> &randomSeq, int len)
{
	srand(time(NULL));

	for(int i = 0; i < len; ++i)
		randomSeq.push_back(i);

	random_shuffle(randomSeq.begin(), randomSeq.end());
	random_shuffle(randomSeq.begin(), randomSeq.end(), RandomGenerator);
}
