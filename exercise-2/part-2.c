#include <pthread.h>
#include <stdio.h>

int j;

pthread_mutex_t j_lock;


void* thread_1_f() {
  for (int i = 0; i < 100; i++) {
        pthread_mutex_lock(&j_lock);
		j++;
        pthread_mutex_unlock(&j_lock);
	}
 return NULL;
}

void* thread_2_f() {
	for (int i = 0; i < 100; i++) {
		pthread_mutex_lock(&j_lock);
		j--;
        pthread_mutex_unlock(&j_lock);
	}
 return NULL;
}

int main(){
   j = 0;
   pthread_t thread_1;
   pthread_create(&thread_1, NULL, thread_1_f, NULL);
   pthread_t thread_2;
   pthread_create(&thread_2, NULL, thread_2_f, NULL);

   pthread_join(thread_1, NULL);
   pthread_join(thread_2, NULL);

   printf(j);
   return 0;
}