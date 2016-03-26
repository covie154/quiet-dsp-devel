/*
 * Copyright (c) 2007 - 2015 Joseph Gaeddert
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

//
// modem_arb_const.c
//
// Constant arbitrary linear modems
//

#include <stdlib.h>
#include "liquid.internal.h"

// 'square' 32-QAM (first quadrant)
const float complex modem_arb_sqam32[8] = {
      0.22361000+  0.22361000*_Complex_I,   0.67082000+  0.22361000*_Complex_I, 
      0.67082000+  1.11800000*_Complex_I,   1.11800000+  0.22361000*_Complex_I, 
      0.22361000+  0.67082000*_Complex_I,   0.67082000+  0.67082000*_Complex_I, 
      0.22361000+  1.11800000*_Complex_I,   1.11800000+  0.67082000*_Complex_I
};

// 'square' 128-QAM (first quadrant)
const float complex modem_arb_sqam128[32] = {
      0.11043000+  0.11043000*_Complex_I,   0.33129000+  0.11043000*_Complex_I, 
      0.11043000+  0.33129000*_Complex_I,   0.33129000+  0.33129000*_Complex_I, 
      0.77302000+  0.11043000*_Complex_I,   0.55216000+  0.11043000*_Complex_I, 
      0.77302000+  0.33129000*_Complex_I,   0.55216000+  0.33129000*_Complex_I, 
      0.77302000+  0.99388000*_Complex_I,   0.55216000+  0.99388000*_Complex_I, 
      0.77302000+  1.21470000*_Complex_I,   0.55216000+  1.21470000*_Complex_I, 
      0.99388000+  0.11043000*_Complex_I,   1.21470000+  0.11043000*_Complex_I, 
      0.99388000+  0.33129000*_Complex_I,   1.21470000+  0.33129000*_Complex_I, 
      0.11043000+  0.77302000*_Complex_I,   0.33129000+  0.77302000*_Complex_I, 
      0.11043000+  0.55216000*_Complex_I,   0.33129000+  0.55216000*_Complex_I, 
      0.77302000+  0.77302000*_Complex_I,   0.55216000+  0.77302000*_Complex_I, 
      0.77302000+  0.55216000*_Complex_I,   0.55216000+  0.55216000*_Complex_I, 
      0.11043000+  0.99388000*_Complex_I,   0.33129000+  0.99388000*_Complex_I, 
      0.11043000+  1.21470000*_Complex_I,   0.33129000+  1.21470000*_Complex_I, 
      0.99388000+  0.77302000*_Complex_I,   1.21470000+  0.77302000*_Complex_I, 
      0.99388000+  0.55216000*_Complex_I,   1.21470000+  0.55216000*_Complex_I
};

// V.29 star constellation
const float complex modem_arb_V29[16] = {
      0.06804100+  0.06804100*_Complex_I,   0.20412000+  0.00000000*_Complex_I, 
      0.00000000+  0.20412000*_Complex_I,  -0.06804100+  0.06804100*_Complex_I, 
      0.00000000+ -0.20412000*_Complex_I,   0.06804100+ -0.06804100*_Complex_I, 
     -0.06804100+ -0.06804100*_Complex_I,  -0.20412000+  0.00000000*_Complex_I, 
      0.20412000+  0.20412000*_Complex_I,   0.34021000+  0.00000000*_Complex_I, 
      0.00000000+  0.34021000*_Complex_I,  -0.20412000+  0.20412000*_Complex_I, 
      0.00000000+ -0.34021000*_Complex_I,   0.20412000+ -0.20412000*_Complex_I, 
     -0.20412000+ -0.20412000*_Complex_I,  -0.34021000+  0.00000000*_Complex_I
};

// Virginia Tech logo
const float complex modem_arb_vt64[64] = {
     -1.5633e+00+  5.5460e-01*_Complex_I,  -1.3833e+00+  5.5460e-01*_Complex_I,
     -1.0234e+00+  5.5460e-01*_Complex_I,  -1.2034e+00+  5.5460e-01*_Complex_I,
     -7.3553e-01+  5.0751e-02*_Complex_I,  -8.0750e-01+  1.7671e-01*_Complex_I,
     -9.5146e-01+  4.2863e-01*_Complex_I,  -8.7948e-01+  3.0267e-01*_Complex_I,
     -3.3741e-02+  5.5460e-01*_Complex_I,  -2.1368e-01+  5.5460e-01*_Complex_I,
     -4.4761e-01+  4.2863e-01*_Complex_I,  -3.9363e-01+  5.5460e-01*_Complex_I,
     -6.6355e-01+ -7.5211e-02*_Complex_I,  -6.0956e-01+  5.0751e-02*_Complex_I,
     -5.0160e-01+  3.0267e-01*_Complex_I,  -5.5558e-01+  1.7671e-01*_Complex_I,
      9.5596e-01+  1.0473e-01*_Complex_I,   1.1359e+00+  1.0473e-01*_Complex_I,
      1.4958e+00+  1.0473e-01*_Complex_I,   1.3158e+00+  1.0473e-01*_Complex_I,
      1.5858e+00+  5.5460e-01*_Complex_I,   1.7657e+00+  5.5460e-01*_Complex_I,
      1.5858e+00+  2.5499e-01*_Complex_I,   1.6757e+00+  4.0434e-01*_Complex_I,
      1.4621e-01+  5.5460e-01*_Complex_I,   3.2615e-01+  5.5460e-01*_Complex_I,
      6.8604e-01+  5.5460e-01*_Complex_I,   5.0610e-01+  5.5460e-01*_Complex_I,
      1.4058e+00+  5.5460e-01*_Complex_I,   1.2259e+00+  5.5460e-01*_Complex_I,
      8.6599e-01+  5.5460e-01*_Complex_I,   1.0459e+00+  5.5460e-01*_Complex_I,
     -1.4508e+00+  3.6385e-01*_Complex_I,  -1.3383e+00+  1.7221e-01*_Complex_I,
     -1.1134e+00+ -2.1017e-01*_Complex_I,  -1.2259e+00+ -1.8529e-02*_Complex_I,
     -6.6355e-01+ -9.7494e-01*_Complex_I,  -7.7601e-01+ -7.8420e-01*_Complex_I,
     -1.0009e+00+ -4.0181e-01*_Complex_I,  -8.8848e-01+ -5.9255e-01*_Complex_I,
      1.4621e-01+  1.0473e-01*_Complex_I,   1.1246e-02+  1.0473e-01*_Complex_I,
     -2.1368e-01+ -7.5211e-02*_Complex_I,  -1.2371e-01+  1.0473e-01*_Complex_I,
     -5.7358e-01+ -7.9499e-01*_Complex_I,  -4.8360e-01+ -6.1505e-01*_Complex_I,
     -3.0366e-01+ -2.5516e-01*_Complex_I,  -3.9363e-01+ -4.3510e-01*_Complex_I,
      8.5069e-01+ -7.5211e-02*_Complex_I,   7.4632e-01+ -2.5516e-01*_Complex_I,
      5.3579e-01+ -6.1505e-01*_Complex_I,   6.4105e-01+ -4.3510e-01*_Complex_I,
     -3.3741e-02+ -9.7494e-01*_Complex_I,   1.4621e-01+ -9.7494e-01*_Complex_I,
      4.3142e-01+ -7.9499e-01*_Complex_I,   3.2615e-01+ -9.7494e-01*_Complex_I,
      2.8116e-01+  1.0473e-01*_Complex_I,   4.1612e-01+  1.0473e-01*_Complex_I,
      2.0649e-01+ -2.5516e-01*_Complex_I,   3.1086e-01+ -7.5211e-02*_Complex_I,
     -2.1368e-01+ -9.7494e-01*_Complex_I,  -1.0842e-01+ -7.9499e-01*_Complex_I,
      1.0122e-01+ -4.3510e-01*_Complex_I,  -4.0500e-03+ -6.1505e-01*_Complex_I
};

// UIllinois logo
const float complex modem_arb_ui64[64] = {
     1.4934e+00+  1.4970e+00*_Complex_I,   1.1965e+00+  1.4970e+00*_Complex_I,
     8.9956e-01+  1.4970e+00*_Complex_I,   5.9825e-01+  1.4970e+00*_Complex_I,
     3.0131e-01+  1.4970e+00*_Complex_I,   0.0000e+00+  1.4970e+00*_Complex_I,
    -2.9694e-01+  1.4970e+00*_Complex_I,  -5.9389e-01+  1.4970e+00*_Complex_I,
    -8.9520e-01+  1.4970e+00*_Complex_I,  -1.1921e+00+  1.4970e+00*_Complex_I,
    -1.4934e+00+  1.4970e+00*_Complex_I,  -1.4934e+00+  1.3114e+00*_Complex_I,
    -1.4934e+00+  1.1228e+00*_Complex_I,  -1.4934e+00+  9.3413e-01*_Complex_I,
    -1.4934e+00+  7.5150e-01*_Complex_I,  -1.2183e+00+  7.5150e-01*_Complex_I,
    -9.4323e-01+  7.5150e-01*_Complex_I,  -6.6812e-01+  7.5150e-01*_Complex_I,
    -6.6812e-01+  5.6587e-01*_Complex_I,  -6.6812e-01+  3.7725e-01*_Complex_I,
    -6.6812e-01+  1.8862e-01*_Complex_I,  -6.6812e-01+  0.0000e+00*_Complex_I,
    -6.6812e-01+ -1.8862e-01*_Complex_I,  -6.6812e-01+ -3.7425e-01*_Complex_I,
    -6.6812e-01+ -5.6287e-01*_Complex_I,  -1.2183e+00+ -7.5150e-01*_Complex_I,
    -9.4323e-01+ -7.5150e-01*_Complex_I,  -6.6812e-01+ -7.5150e-01*_Complex_I,
    -1.4934e+00+ -7.5150e-01*_Complex_I,  -1.4934e+00+ -9.3114e-01*_Complex_I,
    -1.4934e+00+ -1.1198e+00*_Complex_I,  -1.4934e+00+ -1.3084e+00*_Complex_I,
     1.4934e+00+ -1.4940e+00*_Complex_I,   1.1965e+00+ -1.4940e+00*_Complex_I,
     8.9956e-01+ -1.4940e+00*_Complex_I,   5.9825e-01+ -1.4940e+00*_Complex_I,
     3.0131e-01+ -1.4940e+00*_Complex_I,   0.0000e+00+ -1.4940e+00*_Complex_I,
    -2.9694e-01+ -1.4940e+00*_Complex_I,  -5.9389e-01+ -1.4940e+00*_Complex_I,
    -8.9520e-01+ -1.4940e+00*_Complex_I,  -1.1921e+00+ -1.4940e+00*_Complex_I,
    -1.4934e+00+ -1.4940e+00*_Complex_I,   1.4934e+00+ -7.5150e-01*_Complex_I,
     1.4934e+00+ -9.3114e-01*_Complex_I,   1.4934e+00+ -1.1198e+00*_Complex_I,
     1.4934e+00+ -1.3084e+00*_Complex_I,   1.2227e+00+ -7.5150e-01*_Complex_I,
     9.4760e-01+ -7.5150e-01*_Complex_I,   6.7249e-01+ -7.5150e-01*_Complex_I,
     6.7249e-01+  5.6587e-01*_Complex_I,   6.7249e-01+  3.7725e-01*_Complex_I,
     6.7249e-01+  1.8862e-01*_Complex_I,   6.7249e-01+  0.0000e+00*_Complex_I,
     6.7249e-01+ -1.8862e-01*_Complex_I,   6.7249e-01+ -3.7425e-01*_Complex_I,
     6.7249e-01+ -5.6287e-01*_Complex_I,   1.2227e+00+  7.5150e-01*_Complex_I,
     9.4760e-01+  7.5150e-01*_Complex_I,   6.7249e-01+  7.5150e-01*_Complex_I,
     1.4934e+00+  1.3114e+00*_Complex_I,   1.4934e+00+  1.1228e+00*_Complex_I,
     1.4934e+00+  9.3413e-01*_Complex_I,   1.4934e+00+  7.5150e-01*_Complex_I
};

// optimal 16-QAM
const float complex modem_arb16opt[16] = {
     -0.87119000+ -0.87970000*_Complex_I,  -1.15090000+ -0.26101000*_Complex_I, 
     -1.10090000+  0.87457000*_Complex_I,  -0.81088000+  0.29689000*_Complex_I, 
     -0.21295000+ -0.91897000*_Complex_I,  -0.46984000+ -0.29804000*_Complex_I, 
     -0.43443000+  0.91820000*_Complex_I,  -0.16786000+  0.30338000*_Complex_I, 
      1.10000000+ -0.87511000*_Complex_I,   0.81125000+ -0.29671000*_Complex_I, 
      0.87134000+  0.87989000*_Complex_I,   1.15170000+  0.26143000*_Complex_I, 
      0.43379000+ -0.91801000*_Complex_I,   0.16807000+ -0.30335000*_Complex_I, 
      0.21246000+  0.91867000*_Complex_I,   0.47033000+  0.29787000*_Complex_I
};

// optimal 32-QAM
const float complex modem_arb32opt[32] = {
     -1.04570000+ -0.72639000*_Complex_I,  -1.26710000+ -0.00824020*_Complex_I, 
     -0.99868000+  0.92359000*_Complex_I,  -1.13660000+  0.45833000*_Complex_I, 
     -0.67812000+ -1.07470000*_Complex_I,  -0.88363000+ -0.25914000*_Complex_I, 
     -0.64443000+  0.62407000*_Complex_I,  -0.76238000+  0.18163000*_Complex_I, 
     -0.20985000+ -0.91032000*_Complex_I,  -0.08603100+ -0.45730000*_Complex_I, 
     -0.18073000+  0.75747000*_Complex_I,   0.02826900+ -0.01908400*_Complex_I, 
     -0.55206000+ -0.61092000*_Complex_I,  -0.42946000+ -0.16611000*_Complex_I, 
     -0.51187000+  1.09190000*_Complex_I,  -0.30769000+  0.27731000*_Complex_I, 
      1.20280000+ -0.58421000*_Complex_I,   1.29120000+ -0.09249800*_Complex_I, 
      1.10450000+  0.69170000*_Complex_I,   0.96433000+  0.24011000*_Complex_I, 
      0.60130000+ -1.16500000*_Complex_I,   0.83106000+ -0.23576000*_Complex_I, 
      0.73090000+  1.01880000*_Complex_I,   0.62090000+  0.54470000*_Complex_I, 
      0.23884000+ -0.81583000*_Complex_I,   0.36064000+ -0.36749000*_Complex_I, 
     -0.02439300+  1.23570000*_Complex_I,   0.15492000+  0.41465000*_Complex_I, 
      0.11172000+ -1.28340000*_Complex_I,   0.70560000+ -0.68005000*_Complex_I, 
      0.28323000+  0.89268000*_Complex_I,   0.48844000+  0.10367000*_Complex_I
};

// optimal 64-QAM
const float complex modem_arb64opt[64] = {
     -9.6048e-01 +  -1.0031e+00*_Complex_I,
     -1.1105e+00 +  -6.8896e-01*_Complex_I,
     -1.1029e+00 +  -9.5064e-02*_Complex_I,
     -1.2692e+00 +  -3.8774e-01*_Complex_I,
     -7.9322e-01 +   1.1014e+00*_Complex_I,
     -9.5999e-01 +   7.9701e-01*_Complex_I,
     -1.2734e+00 +   1.9621e-01*_Complex_I,
     -1.1121e+00 +   4.9520e-01*_Complex_I,
     -6.2388e-01 +  -9.8614e-01*_Complex_I,
     -7.7108e-01 +  -6.8653e-01*_Complex_I,
     -7.6793e-01 +  -1.0097e-01*_Complex_I,
     -9.1812e-01 +  -3.9210e-01*_Complex_I,
     -4.5416e-01 +   1.0712e+00*_Complex_I,
     -6.1578e-01 +   7.7701e-01*_Complex_I,
     -9.1845e-01 +   1.9699e-01*_Complex_I,
     -7.7026e-01 +   4.8601e-01*_Complex_I,
     -1.1067e-01 +  -1.2612e+00*_Complex_I,
     -2.6544e-01 +  -9.6343e-01*_Complex_I,
      1.3076e+00 +   4.5615e-01*_Complex_I,
     -2.5827e-01 +  -3.9458e-01*_Complex_I,
     -1.0044e-01 +   1.0486e+00*_Complex_I,
      3.9086e-02 +   7.4394e-01*_Complex_I,
     -2.6144e-01 +   1.7968e-01*_Complex_I,
     -1.1912e-01 +   4.5495e-01*_Complex_I,
     -4.5452e-01 +  -1.2733e+00*_Complex_I,
     -4.3866e-01 +  -6.8570e-01*_Complex_I,
     -4.3802e-01 +  -1.0872e-01*_Complex_I,
     -5.8466e-01 +  -3.9550e-01*_Complex_I,
     -2.6246e-01 +   1.3479e+00*_Complex_I,
     -2.8816e-01 +   7.5672e-01*_Complex_I,
     -5.8784e-01 +   1.8705e-01*_Complex_I,
     -4.4008e-01 +   4.7244e-01*_Complex_I,
      7.9849e-01 +  -1.0124e+00*_Complex_I,
      9.5371e-01 +  -7.1194e-01*_Complex_I,
      1.2696e+00 +  -1.1448e-01*_Complex_I,
      1.1145e+00 +  -4.2441e-01*_Complex_I,
      9.0580e-01 +   1.0653e+00*_Complex_I,
      1.0641e+00 +   7.6363e-01*_Complex_I,
      1.0837e+00 +   1.7467e-01*_Complex_I,
      9.1489e-01 +   4.6389e-01*_Complex_I,
      5.8983e-01 +  -1.2906e+00*_Complex_I,
      6.0746e-01 +  -7.0336e-01*_Complex_I,
      9.1373e-01 +  -1.3004e-01*_Complex_I,
      7.4917e-01 +  -4.1576e-01*_Complex_I,
      5.6608e-01 +   1.0707e+00*_Complex_I,
      7.1464e-01 +   7.5794e-01*_Complex_I,
      7.4460e-01 +   1.6652e-01*_Complex_I,
      5.7594e-01 +   4.5036e-01*_Complex_I,
      7.6128e-02 +  -9.7664e-01*_Complex_I,
     -9.2551e-02 +  -6.8763e-01*_Complex_I,
     -9.4285e-02 +  -1.0993e-01*_Complex_I,
      6.5368e-02 +  -4.0109e-01*_Complex_I,
      1.0945e-01 +   1.3350e+00*_Complex_I,
      2.2470e-01 +   4.7166e-01*_Complex_I,
      5.5987e-01 +  -1.1259e-01*_Complex_I,
      7.0006e-02 +   1.9154e-01*_Complex_I,
      2.4876e-01 +  -1.2685e+00*_Complex_I,
      4.2452e-01 +  -9.8023e-01*_Complex_I,
      2.5356e-01 +  -6.8613e-01*_Complex_I,
      4.0576e-01 +  -4.1184e-01*_Complex_I,
      2.4615e-01 +   1.0373e+00*_Complex_I,
      3.9219e-01 +   7.4440e-01*_Complex_I,
      2.4704e-01 +  -1.0509e-01*_Complex_I,
      3.9791e-01 +   1.8370e-01*_Complex_I,
};
// optimal 128-QAM
const float complex modem_arb128opt[128] = {
     -1.0682e+00 +  -9.2598e-01*_Complex_I,
     -1.1831e+00 +  -7.0704e-01*_Complex_I,
     -1.3029e+00 +  -1.0555e-01*_Complex_I,
     -1.3061e+00 +  -4.9292e-01*_Complex_I,
     -9.4032e-01 +   9.7928e-01*_Complex_I,
     -1.1807e+00 +   5.4821e-01*_Complex_I,
     -1.4078e+00 +   1.1265e-01*_Complex_I,
     -1.2954e+00 +   3.3623e-01*_Complex_I,
     -7.3838e-01 +  -1.1381e+00*_Complex_I,
     -9.4161e-01 +  -7.0518e-01*_Complex_I,
     -1.1625e+00 +  -2.9080e-01*_Complex_I,
     -1.0477e+00 +  -4.9556e-01*_Complex_I,
     -1.0664e+00 +   7.7185e-01*_Complex_I,
     -8.3123e-01 +   7.4171e-01*_Complex_I,
     -1.1636e+00 +   1.1831e-01*_Complex_I,
     -1.0506e+00 +   3.2582e-01*_Complex_I,
     -4.8913e-01 +  -1.1074e+00*_Complex_I,
     -5.8148e-01 +  -8.9486e-01*_Complex_I,
     -8.0747e-01 +  -9.4398e-02*_Complex_I,
     -9.1178e-01 +  -2.9590e-01*_Complex_I,
     -7.0503e-01 +   9.5290e-01*_Complex_I,
     -5.8794e-01 +   7.4046e-01*_Complex_I,
     -6.9655e-01 +   1.0350e-01*_Complex_I,
     -6.8968e-01 +   5.2969e-01*_Complex_I,
     -8.2001e-01 +  -9.1531e-01*_Complex_I,
     -7.0810e-01 +  -7.0021e-01*_Complex_I,
     -1.0403e+00 +  -8.9321e-02*_Complex_I,
     -8.0893e-01 +  -4.9762e-01*_Complex_I,
     -6.1299e-01 +   1.1733e+00*_Complex_I,
     -9.2994e-01 +   5.3436e-01*_Complex_I,
     -9.2384e-01 +   1.1851e-01*_Complex_I,
     -8.0873e-01 +   3.2535e-01*_Complex_I,
      8.5789e-03 +  -1.1069e+00*_Complex_I,
      1.3354e-01 +  -9.0426e-01*_Complex_I,
      1.2277e+00 +  -3.0336e-01*_Complex_I,
     -2.1578e-01 +  -2.9289e-01*_Complex_I,
      2.5555e-03 +   1.3535e+00*_Complex_I,
     -1.0737e-01 +   7.4055e-01*_Complex_I,
      5.0972e-03 +   1.1376e-01*_Complex_I,
     -4.5018e-03 +   5.4428e-01*_Complex_I,
     -1.0895e-01 +  -1.3162e+00*_Complex_I,
     -2.2365e-01 +  -6.9809e-01*_Complex_I,
      1.3461e+00 +  -9.5212e-02*_Complex_I,
     -4.3183e-01 +  -2.9421e-01*_Complex_I,
     -1.1598e-01 +   1.1402e+00*_Complex_I,
     -2.2730e-01 +   9.3180e-01*_Complex_I,
     -2.1915e-01 +   1.1528e-01*_Complex_I,
     -2.2953e-01 +   5.3517e-01*_Complex_I,
     -3.6962e-01 +  -1.3195e+00*_Complex_I,
     -4.6545e-01 +  -6.9766e-01*_Complex_I,
     -6.7387e-01 +  -2.8466e-01*_Complex_I,
     -5.6923e-01 +  -4.9130e-01*_Complex_I,
     -3.6828e-01 +   1.1445e+00*_Complex_I,
     -4.6503e-01 +   9.3615e-01*_Complex_I,
     -5.7039e-01 +  -8.3381e-02*_Complex_I,
     -4.6304e-01 +   5.2568e-01*_Complex_I,
     -2.4438e-01 +  -1.1062e+00*_Complex_I,
     -3.4724e-01 +  -8.9072e-01*_Complex_I,
     -3.3719e-01 +  -8.1507e-02*_Complex_I,
     -3.4116e-01 +  -4.9075e-01*_Complex_I,
     -2.5467e-01 +   1.3510e+00*_Complex_I,
     -3.4640e-01 +   7.4004e-01*_Complex_I,
     -4.5303e-01 +   1.1207e-01*_Complex_I,
     -5.7498e-01 +   3.1560e-01*_Complex_I,
      8.7471e-01 +  -9.3403e-01*_Complex_I,
      1.1932e+00 +  -7.1750e-01*_Complex_I,
      1.0817e+00 +  -9.5165e-02*_Complex_I,
      1.0850e+00 +  -5.0487e-01*_Complex_I,
      9.7521e-01 +   9.8123e-01*_Complex_I,
      1.0879e+00 +   7.6120e-01*_Complex_I,
      1.1902e+00 +   1.1187e-01*_Complex_I,
      1.1983e+00 +   5.4100e-01*_Complex_I,
      7.5089e-01 +  -1.1405e+00*_Complex_I,
      9.5031e-01 +  -7.0315e-01*_Complex_I,
      9.6679e-01 +  -2.8997e-01*_Complex_I,
      8.4619e-01 +  -4.8958e-01*_Complex_I,
      7.4379e-01 +   9.5772e-01*_Complex_I,
      8.4793e-01 +   7.4658e-01*_Complex_I,
      9.4820e-01 +   1.1332e-01*_Complex_I,
      9.5910e-01 +   5.3750e-01*_Complex_I,
      5.0524e-01 +  -1.1045e+00*_Complex_I,
      4.9092e-01 +  -6.9263e-01*_Complex_I,
      6.0143e-01 +  -8.7696e-02*_Complex_I,
      6.0078e-01 +  -4.8901e-01*_Complex_I,
      5.0450e-01 +   9.5208e-01*_Complex_I,
      7.1207e-01 +   5.3740e-01*_Complex_I,
      1.0790e+00 +   3.1868e-01*_Complex_I,
      6.0339e-01 +   3.3768e-01*_Complex_I,
      6.2518e-01 +  -9.0613e-01*_Complex_I,
      7.2199e-01 +  -6.9979e-01*_Complex_I,
      8.2756e-01 +  -9.3837e-02*_Complex_I,
      7.2238e-01 +  -2.9345e-01*_Complex_I,
      6.4006e-01 +   1.1740e+00*_Complex_I,
      6.1312e-01 +   7.3911e-01*_Complex_I,
      7.1908e-01 +   1.2320e-01*_Complex_I,
      8.3253e-01 +   3.2769e-01*_Complex_I,
     -9.4871e-02 +  -9.0259e-01*_Complex_I,
     -9.6676e-02 +  -4.9277e-01*_Complex_I,
      4.8818e-01 +  -2.7584e-01*_Complex_I,
     -9.8973e-02 +  -1.0402e-01*_Complex_I,
      2.0955e-02 +   9.4046e-01*_Complex_I,
      1.3132e-01 +   7.3484e-01*_Complex_I,
      1.3357e+00 +   3.0715e-01*_Complex_I,
     -3.3806e-01 +   3.2795e-01*_Complex_I,
      1.4149e-01 +  -1.3293e+00*_Complex_I,
      1.4162e-02 +  -6.8874e-01*_Complex_I,
      1.3376e-01 +  -9.5389e-02*_Complex_I,
      2.5367e-02 +  -2.8878e-01*_Complex_I,
      1.3413e-01 +   1.1437e+00*_Complex_I,
      2.3299e-01 +   5.3149e-01*_Complex_I,
      4.7428e-01 +   1.2730e-01*_Complex_I,
      1.1767e-01 +   3.3670e-01*_Complex_I,
      4.1070e-01 +  -1.3283e+00*_Complex_I,
      3.7197e-01 +  -8.8947e-01*_Complex_I,
      2.5771e-01 +  -2.8158e-01*_Complex_I,
      3.6892e-01 +  -4.8660e-01*_Complex_I,
      3.8837e-01 +   1.1516e+00*_Complex_I,
      3.7013e-01 +   7.3189e-01*_Complex_I,
      2.3982e-01 +   1.2673e-01*_Complex_I,
      4.7588e-01 +   5.2723e-01*_Complex_I,
      2.6342e-01 +  -1.1217e+00*_Complex_I,
      2.4743e-01 +  -6.8820e-01*_Complex_I,
      3.5855e-01 +  -7.8191e-02*_Complex_I,
      1.4393e-01 +  -4.8365e-01*_Complex_I,
      2.7111e-01 +   1.3506e+00*_Complex_I,
      2.6368e-01 +   9.3477e-01*_Complex_I,
      3.5476e-01 +   3.1767e-01*_Complex_I,
     -1.0269e-01 +   3.2880e-01*_Complex_I,};


// optimal 256-QAM
const float complex modem_arb256opt[256] = {
     -9.3121e-01 +  -1.0845e+00*_Complex_I,
     -1.0165e+00 +  -9.3103e-01*_Complex_I,
     -1.1864e+00 +  -6.3650e-01*_Complex_I,
     -1.1012e+00 +  -7.8304e-01*_Complex_I,
     -1.3617e+00 +  -4.3833e-02*_Complex_I,
     -1.2644e+00 +  -1.9022e-01*_Complex_I,
     -1.2686e+00 +  -4.8780e-01*_Complex_I,
     -1.3534e+00 +  -3.3726e-01*_Complex_I,
     -8.4260e-01 +   1.1480e+00*_Complex_I,
     -9.2614e-01 +   9.9761e-01*_Complex_I,
     -1.1955e+00 +   5.5467e-01*_Complex_I,
     -1.1148e+00 +   6.9890e-01*_Complex_I,
     -1.1792e+00 +  -3.7010e-02*_Complex_I,
     -1.2648e+00 +   1.1118e-01*_Complex_I,
     -1.2769e+00 +   4.0872e-01*_Complex_I,
     -1.3599e+00 +   2.5518e-01*_Complex_I,
     -6.7924e-01 +  -1.2278e+00*_Complex_I,
     -8.4406e-01 +  -9.1876e-01*_Complex_I,
     -1.0044e+00 +  -6.2843e-01*_Complex_I,
     -9.2155e-01 +  -7.7299e-01*_Complex_I,
     -1.0806e+00 +   1.0494e-01*_Complex_I,
     -1.0866e+00 +  -1.9152e-01*_Complex_I,
     -1.0854e+00 +  -4.8371e-01*_Complex_I,
     -1.1661e+00 +  -3.3876e-01*_Complex_I,
     -1.0146e+00 +   8.4545e-01*_Complex_I,
     -7.5625e-01 +   9.8074e-01*_Complex_I,
     -9.2315e-01 +   6.9214e-01*_Complex_I,
     -8.3445e-01 +   8.3483e-01*_Complex_I,
     -1.0046e+00 +  -3.8507e-02*_Complex_I,
     -1.1695e+00 +   2.5672e-01*_Complex_I,
     -1.0054e+00 +   5.4855e-01*_Complex_I,
     -1.0894e+00 +   4.0650e-01*_Complex_I,
     -4.9806e-01 +  -1.2285e+00*_Complex_I,
     -6.6615e-01 +  -9.1531e-01*_Complex_I,
     -6.6471e-01 +  -6.1531e-01*_Complex_I,
     -5.0291e-01 +  -9.1017e-01*_Complex_I,
     -6.6983e-01 +  -4.8903e-02*_Complex_I,
     -7.4988e-01 +  -1.8703e-01*_Complex_I,
     -7.4628e-01 +  -4.7626e-01*_Complex_I,
     -8.2246e-01 +  -3.3201e-01*_Complex_I,
     -6.7081e-01 +   1.1403e+00*_Complex_I,
     -5.0407e-01 +   1.1300e+00*_Complex_I,
     -6.6636e-01 +   5.3994e-01*_Complex_I,
     -4.9992e-01 +   8.2622e-01*_Complex_I,
     -8.3007e-01 +  -3.4761e-02*_Complex_I,
     -7.3978e-01 +   1.0568e-01*_Complex_I,
     -7.4366e-01 +   3.9573e-01*_Complex_I,
     -6.6403e-01 +   2.4968e-01*_Complex_I,
     -7.5405e-01 +  -1.0716e+00*_Complex_I,
     -5.8636e-01 +  -1.0663e+00*_Complex_I,
     -8.3409e-01 +  -6.2296e-01*_Complex_I,
     -7.5222e-01 +  -7.6536e-01*_Complex_I,
     -9.1403e-01 +   1.0898e-01*_Complex_I,
     -9.1712e-01 +  -1.8842e-01*_Complex_I,
     -9.1470e-01 +  -4.7918e-01*_Complex_I,
     -9.8965e-01 +  -3.3463e-01*_Complex_I,
     -5.9594e-01 +   1.2959e+00*_Complex_I,
     -5.8407e-01 +   9.7847e-01*_Complex_I,
     -7.5480e-01 +   6.8214e-01*_Complex_I,
     -6.6815e-01 +   8.2880e-01*_Complex_I,
     -8.3654e-01 +   2.4948e-01*_Complex_I,
     -9.9781e-01 +   2.5965e-01*_Complex_I,
     -8.3730e-01 +   5.3876e-01*_Complex_I,
     -9.1612e-01 +   3.9942e-01*_Complex_I,
     -1.6318e-01 +  -1.2127e+00*_Complex_I,
      3.3430e-03 +  -1.2073e+00*_Complex_I,
     -1.5729e-01 +  -6.1725e-01*_Complex_I,
      4.1148e-03 +  -9.0838e-01*_Complex_I,
      1.7582e-01 +  -3.3603e-01*_Complex_I,
      9.8785e-03 +  -3.7206e-02*_Complex_I,
     -8.5107e-02 +  -4.7781e-01*_Complex_I,
     -1.5814e-01 +  -4.2120e-02*_Complex_I,
     -7.2012e-02 +   1.2831e+00*_Complex_I,
      9.0714e-04 +   1.1297e+00*_Complex_I,
     -7.8182e-02 +   6.8626e-01*_Complex_I,
     -1.5437e-01 +   8.2912e-01*_Complex_I,
      5.1610e-01 +  -3.3653e-02*_Complex_I,
      1.2961e+00 +   4.0304e-01*_Complex_I,
     -5.9161e-03 +   5.4276e-01*_Complex_I,
     -1.6148e-01 +   2.5858e-01*_Complex_I,
     -8.4651e-02 +  -1.3668e+00*_Complex_I,
     -3.2532e-01 +  -9.1229e-01*_Complex_I,
     -3.2442e-01 +  -6.1566e-01*_Complex_I,
     -1.6208e-01 +  -9.0614e-01*_Complex_I,
      1.8048e-01 +  -3.7457e-02*_Complex_I,
      1.3866e+00 +  -3.3074e-01*_Complex_I,
     -2.4797e-01 +  -4.7456e-01*_Complex_I,
     -2.4267e-01 +  -1.8754e-01*_Complex_I,
     -1.6601e-01 +   1.4313e+00*_Complex_I,
     -1.6374e-01 +   1.1268e+00*_Complex_I,
     -2.4284e-01 +   6.8228e-01*_Complex_I,
     -3.1958e-01 +   8.2714e-01*_Complex_I,
      1.4029e+00 +  -4.1466e-02*_Complex_I,
     -2.4744e-01 +   1.0415e-01*_Complex_I,
     -1.7024e-01 +   5.3942e-01*_Complex_I,
     -2.4815e-01 +   3.9378e-01*_Complex_I,
     -3.3086e-01 +  -1.2116e+00*_Complex_I,
     -4.1344e-01 +  -1.0631e+00*_Complex_I,
     -4.9938e-01 +  -6.1504e-01*_Complex_I,
     -5.7571e-01 +  -7.6257e-01*_Complex_I,
     -4.9789e-01 +  -3.2872e-01*_Complex_I,
     -5.7916e-01 +  -1.9183e-01*_Complex_I,
     -5.7533e-01 +  -4.6997e-01*_Complex_I,
     -6.6353e-01 +  -3.3083e-01*_Complex_I,
     -4.1537e-01 +   1.2917e+00*_Complex_I,
     -3.3797e-01 +   1.1288e+00*_Complex_I,
     -4.1372e-01 +   6.7949e-01*_Complex_I,
     -5.7762e-01 +   6.8425e-01*_Complex_I,
     -5.0299e-01 +  -3.9519e-02*_Complex_I,
     -5.7735e-01 +   1.0080e-01*_Complex_I,
     -5.7869e-01 +   3.9486e-01*_Complex_I,
     -4.1708e-01 +   3.8814e-01*_Complex_I,
     -2.6216e-01 +  -1.3722e+00*_Complex_I,
     -2.4777e-01 +  -1.0554e+00*_Complex_I,
     -2.4828e-01 +  -7.5682e-01*_Complex_I,
     -4.1106e-01 +  -7.6293e-01*_Complex_I,
     -3.3539e-01 +  -4.5041e-02*_Complex_I,
     -4.1183e-01 +  -1.8648e-01*_Complex_I,
     -4.0960e-01 +  -4.6924e-01*_Complex_I,
     -3.2757e-01 +  -3.2493e-01*_Complex_I,
     -2.4811e-01 +   1.2791e+00*_Complex_I,
     -4.1293e-01 +   9.7796e-01*_Complex_I,
     -4.9363e-01 +   5.4125e-01*_Complex_I,
     -2.4841e-01 +   9.7484e-01*_Complex_I,
     -3.3291e-01 +   2.4287e-01*_Complex_I,
     -4.1270e-01 +   1.0610e-01*_Complex_I,
     -3.3149e-01 +   5.3493e-01*_Complex_I,
     -4.9570e-01 +   2.4793e-01*_Complex_I,
      1.0268e+00 +  -9.4120e-01*_Complex_I,
      1.1117e+00 +  -7.9063e-01*_Complex_I,
      1.0229e+00 +  -6.2590e-01*_Complex_I,
      1.1972e+00 +  -6.4225e-01*_Complex_I,
      1.1800e+00 +  -3.7594e-02*_Complex_I,
      1.0994e+00 +  -1.8428e-01*_Complex_I,
      1.1013e+00 +  -4.8132e-01*_Complex_I,
      1.1761e+00 +  -3.3277e-01*_Complex_I,
      9.5265e-01 +   9.9923e-01*_Complex_I,
      1.0339e+00 +   8.4543e-01*_Complex_I,
      1.1967e+00 +   5.5722e-01*_Complex_I,
      1.1136e+00 +   7.0186e-01*_Complex_I,
      1.1048e+00 +   1.1370e-01*_Complex_I,
      1.1933e+00 +   2.5489e-01*_Complex_I,
      1.0283e+00 +   5.4096e-01*_Complex_I,
      1.1081e+00 +   3.9628e-01*_Complex_I,
      7.8700e-01 +  -1.0692e+00*_Complex_I,
      8.5334e-01 +  -9.1694e-01*_Complex_I,
      8.5637e-01 +  -6.2050e-01*_Complex_I,
      9.3281e-01 +  -7.7176e-01*_Complex_I,
      1.0137e+00 +  -3.3408e-02*_Complex_I,
      9.3260e-01 +  -1.7917e-01*_Complex_I,
      9.3071e-01 +  -4.7454e-01*_Complex_I,
      1.0048e+00 +  -3.2937e-01*_Complex_I,
      8.6318e-01 +   1.1482e+00*_Complex_I,
      7.7447e-01 +   9.8650e-01*_Complex_I,
      8.5413e-01 +   5.5129e-01*_Complex_I,
      9.3949e-01 +   6.9420e-01*_Complex_I,
      8.5475e-01 +  -2.3510e-02*_Complex_I,
      9.3037e-01 +   1.2129e-01*_Complex_I,
      9.3010e-01 +   4.0514e-01*_Complex_I,
      1.0095e+00 +   2.6363e-01*_Complex_I,
      5.2780e-01 +  -1.2149e+00*_Complex_I,
      5.9973e-01 +  -1.0535e+00*_Complex_I,
      5.9400e-01 +  -7.5805e-01*_Complex_I,
      5.2055e-01 +  -9.0495e-01*_Complex_I,
      1.2793e+00 +   9.5945e-02*_Complex_I,
      6.0607e-01 +  -1.8528e-01*_Complex_I,
      6.0178e-01 +  -4.7516e-01*_Complex_I,
      6.7818e-01 +  -3.2877e-01*_Complex_I,
      6.0752e-01 +   1.2941e+00*_Complex_I,
      6.0140e-01 +   9.9091e-01*_Complex_I,
      5.9529e-01 +   6.9382e-01*_Complex_I,
      5.2016e-01 +   8.4000e-01*_Complex_I,
      6.0208e-01 +   1.1391e-01*_Complex_I,
      6.7047e-01 +   2.5780e-01*_Complex_I,
      5.2294e-01 +   5.4883e-01*_Complex_I,
      5.9654e-01 +   4.0163e-01*_Complex_I,
      7.0156e-01 +  -1.2190e+00*_Complex_I,
      6.9013e-01 +  -9.1191e-01*_Complex_I,
      6.9013e-01 +  -6.2098e-01*_Complex_I,
      7.6463e-01 +  -7.6594e-01*_Complex_I,
      6.9136e-01 +  -3.6954e-02*_Complex_I,
      7.6789e-01 +  -1.7954e-01*_Complex_I,
      7.6457e-01 +  -4.7424e-01*_Complex_I,
      8.3961e-01 +  -3.2637e-01*_Complex_I,
      6.8917e-01 +   1.1431e+00*_Complex_I,
      8.5163e-01 +   8.4194e-01*_Complex_I,
      7.6086e-01 +   6.8960e-01*_Complex_I,
      6.8618e-01 +   8.3840e-01*_Complex_I,
      7.6026e-01 +   1.0911e-01*_Complex_I,
      8.3319e-01 +   2.5542e-01*_Complex_I,
      6.8351e-01 +   5.4604e-01*_Complex_I,
      7.5901e-01 +   4.0203e-01*_Complex_I,
      9.6338e-02 +  -1.3604e+00*_Complex_I,
     -7.0831e-02 +  -1.0602e+00*_Complex_I,
     -9.4577e-04 +  -6.3305e-01*_Complex_I,
     -6.9734e-02 +  -7.6470e-01*_Complex_I,
      4.2835e-01 +  -4.6668e-01*_Complex_I,
      3.4710e-01 +  -3.3413e-01*_Complex_I,
     -1.5430e-01 +  -3.3941e-01*_Complex_I,
      8.0032e-02 +  -1.7572e-01*_Complex_I,
      2.5905e-02 +   1.4320e+00*_Complex_I,
     -6.9530e-02 +   9.7883e-01*_Complex_I,
      1.7048e-01 +   8.2571e-01*_Complex_I,
      1.0068e-02 +   8.3542e-01*_Complex_I,
      3.4137e-01 +   2.5976e-01*_Complex_I,
      9.5063e-02 +   1.1412e-01*_Complex_I,
     -7.6478e-02 +   4.0262e-01*_Complex_I,
      1.3861e+00 +   2.4822e-01*_Complex_I,
      1.8256e-01 +  -1.2079e+00*_Complex_I,
      9.5999e-02 +  -1.0579e+00*_Complex_I,
      1.7231e-01 +  -6.3492e-01*_Complex_I,
      9.5184e-02 +  -7.6915e-01*_Complex_I,
      4.2346e-01 +  -1.8043e-01*_Complex_I,
      3.4732e-01 +  -3.9482e-02*_Complex_I,
      6.7179e-03 +  -3.3361e-01*_Complex_I,
      1.2869e+00 +  -4.7883e-01*_Complex_I,
      1.0396e-01 +   1.2834e+00*_Complex_I,
      1.7477e-01 +   1.1309e+00*_Complex_I,
      9.3443e-02 +   6.8396e-01*_Complex_I,
      1.0164e-01 +   9.8006e-01*_Complex_I,
      2.6248e-01 +   4.0262e-01*_Complex_I,
      1.4300e-02 +   2.5562e-01*_Complex_I,
      1.7725e-01 +   5.4449e-01*_Complex_I,
      1.7520e-01 +   2.5568e-01*_Complex_I,
      3.5711e-01 +  -1.2043e+00*_Complex_I,
      4.3106e-01 +  -1.0550e+00*_Complex_I,
      4.3130e-01 +  -7.5874e-01*_Complex_I,
      3.5671e-01 +  -9.0533e-01*_Complex_I,
      1.2810e+00 +  -1.8054e-01*_Complex_I,
      2.5776e-01 +  -4.7036e-01*_Complex_I,
      5.1032e-01 +  -6.1269e-01*_Complex_I,
      5.1825e-01 +  -3.2616e-01*_Complex_I,
      4.3563e-01 +   1.2900e+00*_Complex_I,
      5.0429e-01 +   1.1325e+00*_Complex_I,
      4.3124e-01 +   6.9057e-01*_Complex_I,
      4.2828e-01 +   9.7727e-01*_Complex_I,
      2.6878e-01 +   1.1645e-01*_Complex_I,
      5.1065e-01 +   2.5785e-01*_Complex_I,
      3.5648e-01 +   5.4453e-01*_Complex_I,
      4.3802e-01 +   4.0358e-01*_Complex_I,
      2.8096e-01 +  -1.3583e+00*_Complex_I,
      2.6017e-01 +  -1.0511e+00*_Complex_I,
      2.6553e-01 +  -7.5915e-01*_Complex_I,
      1.8554e-01 +  -9.0436e-01*_Complex_I,
      2.7459e-01 +  -1.6584e-01*_Complex_I,
      9.6288e-02 +  -4.7108e-01*_Complex_I,
      3.4524e-01 +  -6.2309e-01*_Complex_I,
     -7.6534e-02 +  -1.8689e-01*_Complex_I,
      2.6953e-01 +   1.2917e+00*_Complex_I,
      3.3760e-01 +   1.1286e+00*_Complex_I,
      3.3928e-01 +   8.2592e-01*_Complex_I,
      2.6659e-01 +   9.7456e-01*_Complex_I,
      4.2936e-01 +   1.1261e-01*_Complex_I,
      9.1148e-02 +   4.0330e-01*_Complex_I,
      2.6333e-01 +   6.7210e-01*_Complex_I,
     -7.8413e-02 +   1.1615e-01*_Complex_I,
};
