#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

pthread_mutex_t mutex;

void *func(void *arg)
{
	puts("asdasd");
	pthread_mutex_unlock(&mutex);
}

int main()
{
	pthread_t tid;
	int ret = 0;
	pthread_mutex_init(&mutex, NULL);
	pthread_mutex_lock(&mutex);
	ret = pthread_create(&tid, NULL, func, NULL);
	if (ret != 0)
	{
		puts("create pthread error");
		return 0;
	}
	pthread_mutex_lock(&mutex);
	puts("zz");
	pthread_mutex_unlock(&mutex);
	return 0;
}
