#include "math.h"
#include <iostream>

#ifndef USE_MYMATH
#include <cmath>
#endif

namespace pr {

namespace math {

double mysqrt(double x) {
#ifndef USE_MYMATH
  return std::sqrt(x);
#else
  if (x <= 0) {
    return 0;
  }

  double result = x;

  // do ten iterations
  for (int i = 0; i < 10; ++i) {
    if (result <= 0) {
      result = 0.1;
    }
    double delta = x - (result * result);
    result = result + 0.5 * delta / result;
    std::cout << "Computing sqrt of " << x << " to be " << result << std::endl;
  }
  return result;
#endif
}

} // namespace math

} // namespace pr