/*
 * soft_timer.c
 *
 *  Created on: Sep 21, 2024
 *      Author: Admin
 */


#include <soft_timer.h>


int timer_counter[10] = {0};
int timer_flag[10] = {0};

void setTimer(int pos, int count)
{
	timer_counter[pos] = count;
	timer_flag[pos] = 0;
}

void runTimer()
{
	for (int i = 0; i < 10; i++)
	{
		timer_counter[i]--;
		if (timer_counter[i] <= 0)
		{
			timer_flag[i] = 1;
			timer_counter[i] = 0;
		}
	}
}

int getTimerFlag(int pos)
{
	return timer_flag[pos];
}