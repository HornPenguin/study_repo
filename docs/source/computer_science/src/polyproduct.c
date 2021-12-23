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



// Convolution method for  polynomial product
// O(n^2) complexity

int convolution(const double a[], const double b[], int lena, int lenb, double * result)
{
    for(int i=0; i< lena+lenb; i++)
    {
        result[i] = 0;
    }

    for(int i=0; i< lena; i++)
    {
        for(int j=0; j<lenb;j++)
        {
            result[i+j] += a[i] + b[j];
        }
    }
}

// Diveded and Conquer method for polynomial product


// Fast Fourier Transform method for polynomial product

