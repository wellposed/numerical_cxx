#pragma once
#if defined _WIN32 || defined __CYGWIN__
  #ifdef BUILDING_NUMERICAL_CXX
    #define NUMERICAL_CXX_PUBLIC __declspec(dllexport)
  #else
    #define NUMERICAL_CXX_PUBLIC __declspec(dllimport)
  #endif
#else
  #ifdef BUILDING_NUMERICAL_CXX
      #define NUMERICAL_CXX_PUBLIC __attribute__ ((visibility ("default")))
  #else
      #define NUMERICAL_CXX_PUBLIC
  #endif
#endif

namespace numerical_cxx {

class NUMERICAL_CXX_PUBLIC Numerical_cxx {

public:
  Numerical_cxx();
  int get_number() const;

private:

  int number;

};

}

