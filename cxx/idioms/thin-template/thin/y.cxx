
#include "./ring-buffer.hxx"
#include "./y.hxx"

using namespace v8::base;

namespace {

struct type_a {
  int value;
};

struct type_b {
  int value1;
  int value2;
};

struct type_c {
  int value1;
  int value2;
  int value3;
};

}

int y() {
  RingBuffer<int> int_rb;
  int_rb.Push1(1);
  int_rb.Push2(2);
  int_rb.Push3(3);
  int_rb.Push4(4);
  int_rb.Push5(5);
  int_rb.Push6(6);
  int_rb.Push7(7);
  int_rb.Push8(8);
  int_rb.Push9(9);
  int_rb.Count();
  int_rb.x(0);

  RingBuffer<double> double_rb;
  double_rb.Push1(1.0);
  double_rb.Push3(3.0);
  double_rb.Push4(4.0);
  double_rb.Push5(5.0);
  double_rb.Push6(6.0);
  double_rb.Push7(7.0);
  double_rb.Push8(8.0);
  double_rb.Push9(9.0);
  double_rb.Count();
  double_rb.x(0);

  RingBuffer<type_a> type_a_rb;
  type_a_rb.Push1(type_a{1});
  type_a_rb.Push2(type_a{2});
  type_a_rb.Push3(type_a{3});
  type_a_rb.Push4(type_a{4});
  type_a_rb.Push5(type_a{5});
  type_a_rb.Push6(type_a{6});
  type_a_rb.Push7(type_a{7});
  type_a_rb.Push8(type_a{8});
  type_a_rb.Push9(type_a{9});
  type_a_rb.Count();
  type_a_rb.x(type_a{0});

 RingBuffer<type_b> type_b_rb;
  type_b_rb.Push1(type_b{1, 1});
  type_b_rb.Push2(type_b{2, 2});
  type_b_rb.Push3(type_b{3, 3});
  type_b_rb.Push4(type_b{4, 4});
  type_b_rb.Push5(type_b{5, 5});
  type_b_rb.Push6(type_b{6, 6});
  type_b_rb.Push7(type_b{7, 7});
  type_b_rb.Push8(type_b{8, 8});
  type_b_rb.Push9(type_b{9, 9});
  type_b_rb.Count();
  type_b_rb.x(type_b{0, 0});

 RingBuffer<type_c> type_c_rb;
  type_c_rb.Push1(type_c{1, 1, 1});
  type_c_rb.Push2(type_c{2, 2, 2});
  type_c_rb.Push3(type_c{3, 3, 3});
  type_c_rb.Push4(type_c{4, 4, 4});
  type_c_rb.Push5(type_c{5, 5, 5});
  type_c_rb.Push6(type_c{6, 6, 6});
  type_c_rb.Push7(type_c{7, 7, 7});
  type_c_rb.Push8(type_c{8, 8, 8});
  type_c_rb.Push9(type_c{9, 9, 9});
  type_c_rb.Count();
  type_c_rb.x(type_c{0, 0, 0});

  return 0;
}
