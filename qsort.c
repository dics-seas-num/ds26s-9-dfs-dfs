#include "my_qsort.h"

/*
  quicksort эрэмбэлэх аргын цааш хуваагдах ёсгүй хэмжээ
*/
#ifndef CUTOFF
#define CUTOFF 10
#endif

static int init_seed = 0;  // Random seed 1 удаа эхлүүлнэ

/*
  Оруулан эрэмбэлэх функц.
  [lo, hi] завсрах тоонуудыг оруулан эрэмбэлэх аргаар эрэмбэлнэ.
*/
static void insertion_sort(int a[], int lo, int hi)
{
        /* Оруулан эрэмбэлэх аргыг хэрэгжүүл */
}

/*
  Хоёр утгыг хооронд солих функц
*/
static void swap(int *a, int *b)
{
        int tmp = *a;
        *a = *b;
        *b = tmp;
}

/*
  [lo, hi] завсрыг санамсаргүйгээр холих функц.
*/
static void random_shuffle(int a[], int lo, int hi)
{
    if (lo >= hi)
        return;

    if (init_seed == 0) {
        srand(time(NULL));
        init_seed = 1;
    }

    int i, j;

    for (i = hi; i > lo; i--) {
        j = lo + rand() % (i - lo + 1);
        swap(&a[i], &a[j]);
    }
}

/*
  1-pivot хурдан эрэмбэлэх функц.
*/
static void _single_pivot_qsort(int a[], int lo, int hi)
{
        /* Энд quicksort хэрэгжүүл */
}

/*
  wrapper function for _single_pivot_qsort
  _single_pivot_qsort-ыг дуудахад ашиглах функц
 */
void single_pivot_qsort(int a[], int lo, int hi)
{
        random_shuffle(a, lo, hi);
        _single_pivot_qsort(a, lo, hi);
}

/*
  Dual-pivot хурдан эрэмбэлэх функц
*/
static void _dual_pivot_qsort(int a[], int lo, int hi)
{
        /*
          Энд dual-pivot quicksort хэрэгжүүл
        */
	
}
/*
  wrapper function for _dual_pivot_qsort
  _dual_pivot_qsort-ыг дуудахад ашиглах функц
*/
void dual_pivot_qsort(int a[], int lo, int hi)
{
        random_shuffle(a, lo, hi);
        _dual_pivot_qsort(a, lo, hi);
}

