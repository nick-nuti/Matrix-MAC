#ifndef FIR_H_

#define FIR_H_

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

#define thepower 32768

//typedef int coef_t;
typedef double coef_t;

typedef int data_t;

typedef int acc_t;

typedef struct
{
	const size_t rows;
	const size_t columns;
	int32_t *matrix_values;
} post_matrix;

void fir(post_matrix *input, post_matrix *theta, post_matrix *output, bool bias_neuron);

#endif

// input matrix, theta matrix, output matrix
// input , theta1, layer1
// layer1, theta2, output
