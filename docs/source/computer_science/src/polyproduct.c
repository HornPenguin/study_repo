/*
This file is part of Scientific Computing reposity.

All softwares in Scientific Computing reposity is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

All softwares in Scientific Computing reposity is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Scientific Computing reposity software.  If not, see <https://www.gnu.org/licenses/>.
*/

#include<stdio.h>
#include<stdlib.h>

// Convolution method for  polynomial product
// O(n^2) complexity

int convolution(const double a[], const double b[], size_t lena, size_t lenb, double * result)
{
    size_t len = (lena)+(lenb)-1;

    for(size_t i=0; i< len; i++)
    {
        result[i] = 0;
    }

    for(size_t i=0; i< lena; i++)
    {
        for(size_t j=0; j<lenb;j++)
        {
            printf("a[%lu] = %f, b[%lu] = %f ",i, a[i],j, b[j]);
            result[i+j] += a[i] * b[j];
            printf("result[%lu] = %f \n", i+j, result[i+j]);
        }
    }

    return 0;
}

// Diveded and Conquer method for polynomial product


// Fast Fourier Transform method for polynomial product




/*
Test code================================
*/

int main(void)
{
    double a[4] = {1.0, 2.0, 3.0, 4.0};
    double b[6] = {5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
    double * result = (double *)malloc(sizeof(double)*9);

    convolution(a, b, 4, 6, result);

    for( size_t i; i< 9; i++)
    {
        printf("%f x^%lu", result[i], i);
        if(i != 23)
        {
            printf(" + ");
        }
    }
    printf("\n");
    free(result);

}

