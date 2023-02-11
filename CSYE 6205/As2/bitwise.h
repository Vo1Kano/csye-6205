/*----------------------------------------------------------------
Copyright (c) 2023 Author: Jagadeesh Vasudevamurthy
file: bitwise.h
-----------------------------------------------------------------*/

/*----------------------------------------------------------------
This file has bitwise class declaration 
-----------------------------------------------------------------*/

/*----------------------------------------------------------------
All includes here
-----------------------------------------------------------------*/
#ifndef bitwise_H
#define bitwise_H

/*----------------------------------------------------------------
You cannot include any other files
-----------------------------------------------------------------*/
#include "C:\\Users\\78688\\Desktop\\CSYE 6205\\util.h"

/*----------------------------------------------------------------
Declaration of bitwise class
-----------------------------------------------------------------*/
class bitwise{
public:
  void test_bitwise();
  void test_shift();
  //WRITE all interview questions interface here

  int set_bit_i_to_1_and_all_others_to_zero(int);

  int set_bit_i_to_0_and_all_others_to_one(int);

  int get_bit_i(int, int);

  int set_bit_i(int, int&);

  int reset_bit_i(int, int&);

  int reset_last_set_bit_of_rightmost_n(int&);

  int check_n_is_a_power_of_2(int);

  int check_n_is_a_power_of_4(int);

  int position_of_rightmost_set_bit(int);

private:

};

#endif
//EOF
