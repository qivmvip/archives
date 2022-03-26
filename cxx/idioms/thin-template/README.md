# thin-template

```bash
$ sw_vers
ProductName:    macOS
ProductVersion:	12.1
BuildVersion:	  21C52
```

```bash
$ clang++ --version
Apple clang version 12.0.0 (clang-1200.0.32.27)
Target: x86_64-apple-darwin21.2.0
Thread model: posix
InstalledDir: /Library/Developer/CommandLineTools/usr/bin
```

## [origin](./origin/)

+ O0

```bash
$ clang++ -std=c++14 ./main.cxx ./x.cxx ./y.cxx ./z.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 248
-rw-r--r--  1 unnamed  staff   106B  3 26 22:14 main.cxx
-rwxr-xr-x  1 unnamed  staff    87K  3 26 22:31 main.exe
-rw-r--r--  1 unnamed  staff   4.5K  3 26 22:10 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:16 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:12 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:16 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:13 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:16 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:13 z.hxx
00000001000034e0 T x()
0000000100006fa0 T y()
00000001000097b0 T z()
0000000100005350 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
0000000100007ba0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
000000010000a2d0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
0000000100004f50 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
00000001000077a0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
0000000100009f30 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
0000000100004fd0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
0000000100007820 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
0000000100009fb0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
0000000100005030 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push3((anonymous namespace)::type_a const&)
0000000100007880 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push3((anonymous namespace)::type_a const&)
0000000100005090 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
00000001000078e0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
000000010000a010 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
0000000100005100 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
0000000100007950 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
000000010000a080 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
0000000100005170 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
00000001000079c0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
000000010000a0f0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
00000001000051d0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
0000000100007a20 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
000000010000a150 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
0000000100005230 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
0000000100007a80 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
000000010000a1b0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
00000001000052b0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
0000000100007b00 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
000000010000a230 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
0000000100004f30 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100007780 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100009f10 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100006f40 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100009750 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
000000010000be80 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100005cf0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
0000000100008540 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
000000010000ac70 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
00000001000058b0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
0000000100008100 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
000000010000a830 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
0000000100005930 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
0000000100008180 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
000000010000a8b0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
00000001000059a0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
00000001000081f0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
000000010000a920 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
0000000100005a00 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
0000000100008250 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
000000010000a980 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
0000000100005a80 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
00000001000082d0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
000000010000aa00 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
0000000100005af0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
0000000100008340 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
000000010000aa70 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
0000000100005b60 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
00000001000083b0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
000000010000aae0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
0000000100005bd0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
0000000100008420 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
000000010000ab50 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
0000000100005c50 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
00000001000084a0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
000000010000abd0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
0000000100005890 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
00000001000080e0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
000000010000a810 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100006f60 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100009770 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
000000010000bea0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
00000001000067e0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
0000000100009030 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
000000010000b760 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
0000000100006280 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
0000000100008ad0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
000000010000b200 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
0000000100006320 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
0000000100008b70 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
000000010000b2a0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
00000001000063b0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
0000000100008c00 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
000000010000b330 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
0000000100006430 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
0000000100008c80 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
000000010000b3b0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
00000001000064d0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
0000000100008d20 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
000000010000b450 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
0000000100006560 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
0000000100008db0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
000000010000b4e0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
00000001000065f0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
0000000100008e40 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
000000010000b570 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
0000000100006680 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
0000000100008ed0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
000000010000b600 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
0000000100006720 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
0000000100008f70 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
000000010000b6a0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
0000000100006260 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100008ab0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
000000010000b1e0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100006f80 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100009790 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
000000010000bec0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100004990 T v8::base::RingBuffer<double>::x(double const&)
0000000100004550 T v8::base::RingBuffer<double>::Push1(double const&)
00000001000045d0 T v8::base::RingBuffer<double>::Push2(double const&)
0000000100004640 T v8::base::RingBuffer<double>::Push3(double const&)
00000001000046a0 T v8::base::RingBuffer<double>::Push4(double const&)
0000000100004720 T v8::base::RingBuffer<double>::Push5(double const&)
0000000100004790 T v8::base::RingBuffer<double>::Push6(double const&)
0000000100004800 T v8::base::RingBuffer<double>::Push7(double const&)
0000000100004870 T v8::base::RingBuffer<double>::Push8(double const&)
00000001000048f0 T v8::base::RingBuffer<double>::Push9(double const&)
0000000100004530 t v8::base::RingBuffer<double>::RingBuffer()
0000000100006f20 t v8::base::RingBuffer<double>::RingBuffer()
0000000100003ff0 T v8::base::RingBuffer<int>::x(int const&)
0000000100007700 T v8::base::RingBuffer<int>::Push1(int const&)
0000000100003c70 T v8::base::RingBuffer<int>::Push2(int const&)
0000000100003cd0 T v8::base::RingBuffer<int>::Push3(int const&)
0000000100003d30 T v8::base::RingBuffer<int>::Push4(int const&)
0000000100003da0 T v8::base::RingBuffer<int>::Push5(int const&)
0000000100003e10 T v8::base::RingBuffer<int>::Push6(int const&)
0000000100003e70 T v8::base::RingBuffer<int>::Push7(int const&)
0000000100003ed0 T v8::base::RingBuffer<int>::Push8(int const&)
0000000100003f50 T v8::base::RingBuffer<int>::Push9(int const&)
0000000100003c50 t v8::base::RingBuffer<int>::RingBuffer()
0000000100006f00 t v8::base::RingBuffer<int>::RingBuffer()
0000000100005330 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Count() const
0000000100007b80 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Count() const
000000010000a2b0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Count() const
0000000100005cd0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Count() const
0000000100008520 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Count() const
000000010000ac50 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Count() const
00000001000067c0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Count() const
0000000100009010 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Count() const
000000010000b740 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Count() const
0000000100004970 T v8::base::RingBuffer<double>::Count() const
0000000100003fd0 T v8::base::RingBuffer<int>::Count() const
00000001000100b0 d __dyld_private
0000000100000000 T __mh_execute_header
00000001000034a0 T _main
                 U dyld_stub_binder
```

+ O1

```bash
$ clang++ -std=c++14 -O1 ./main.cxx ./x.cxx ./y.cxx ./z.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 120
-rw-r--r--  1 unnamed  staff   106B  3 26 22:14 main.cxx
-rwxr-xr-x  1 unnamed  staff    22K  3 26 22:32 main.exe
-rw-r--r--  1 unnamed  staff   4.5K  3 26 22:10 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:16 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:12 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:16 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:13 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:16 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:13 z.hxx
0000000100001360 T x()
00000001000024f0 T y()
0000000100003270 T z()
0000000100001f70 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
0000000100002d10 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
0000000100003a30 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
0000000100001d90 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
0000000100002b30 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
0000000100003870 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
0000000100001dd0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
0000000100002b70 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
00000001000038b0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
0000000100001e00 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push3((anonymous namespace)::type_a const&)
0000000100002ba0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push3((anonymous namespace)::type_a const&)
0000000100001e20 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
0000000100002bc0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
00000001000038e0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
0000000100001e60 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
0000000100002c00 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
0000000100003920 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
0000000100001e90 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
0000000100002c30 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
0000000100003950 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
0000000100001ec0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
0000000100002c60 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
0000000100003980 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
0000000100001ef0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
0000000100002c90 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
00000001000039b0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
0000000100001f30 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
0000000100002cd0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
00000001000039f0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
0000000100001d80 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100002b20 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100003860 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
00000001000024c0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100003240 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100003f60 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100002190 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
0000000100002f30 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
0000000100003c50 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
0000000100001fa0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
0000000100002d40 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
0000000100003a60 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
0000000100001fe0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
0000000100002d80 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
0000000100003aa0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
0000000100002010 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
0000000100002db0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
0000000100003ad0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
0000000100002030 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
0000000100002dd0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
0000000100003af0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
0000000100002070 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
0000000100002e10 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
0000000100003b30 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
00000001000020b0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
0000000100002e50 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
0000000100003b70 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
00000001000020e0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
0000000100002e80 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
0000000100003ba0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
0000000100002110 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
0000000100002eb0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
0000000100003bd0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
0000000100002150 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
0000000100002ef0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
0000000100003c10 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
0000000100001f90 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100002d30 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100003a50 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
00000001000024d0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100003250 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100003f70 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100002470 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
0000000100003210 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
0000000100003f30 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
00000001000021c0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
0000000100002f60 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
0000000100003c80 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
0000000100002220 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
0000000100002fc0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
0000000100003ce0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
0000000100002260 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
0000000100003000 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
0000000100003d20 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
0000000100002290 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
0000000100003030 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
0000000100003d50 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
00000001000022e0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
0000000100003080 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
0000000100003da0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
0000000100002330 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
00000001000030d0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
0000000100003df0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
0000000100002370 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
0000000100003110 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
0000000100003e30 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
00000001000023b0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
0000000100003150 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
0000000100003e70 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
0000000100002410 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
00000001000031b0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
0000000100003ed0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
00000001000021b0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100002f50 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100003c70 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
00000001000024e0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100003260 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100003f80 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100001d50 t v8::base::RingBuffer<double>::x(double const&)
0000000100001b50 t v8::base::RingBuffer<double>::Push1(double const&)
0000000100001b90 t v8::base::RingBuffer<double>::Push2(double const&)
0000000100001bc0 t v8::base::RingBuffer<double>::Push3(double const&)
0000000100001bf0 t v8::base::RingBuffer<double>::Push4(double const&)
0000000100001c30 t v8::base::RingBuffer<double>::Push5(double const&)
0000000100001c60 t v8::base::RingBuffer<double>::Push6(double const&)
0000000100001c90 t v8::base::RingBuffer<double>::Push7(double const&)
0000000100001cc0 t v8::base::RingBuffer<double>::Push8(double const&)
0000000100001d00 t v8::base::RingBuffer<double>::Push9(double const&)
0000000100001b40 t v8::base::RingBuffer<double>::RingBuffer()
00000001000024b0 t v8::base::RingBuffer<double>::RingBuffer()
0000000100001b10 t v8::base::RingBuffer<int>::x(int const&)
0000000100002ae0 t v8::base::RingBuffer<int>::Push1(int const&)
0000000100001960 t v8::base::RingBuffer<int>::Push2(int const&)
0000000100001990 t v8::base::RingBuffer<int>::Push3(int const&)
00000001000019b0 t v8::base::RingBuffer<int>::Push4(int const&)
00000001000019f0 t v8::base::RingBuffer<int>::Push5(int const&)
0000000100001a20 t v8::base::RingBuffer<int>::Push6(int const&)
0000000100001a50 t v8::base::RingBuffer<int>::Push7(int const&)
0000000100001a80 t v8::base::RingBuffer<int>::Push8(int const&)
0000000100001ac0 t v8::base::RingBuffer<int>::Push9(int const&)
0000000100001950 t v8::base::RingBuffer<int>::RingBuffer()
00000001000024a0 t v8::base::RingBuffer<int>::RingBuffer()
0000000100001d40 t v8::base::RingBuffer<double>::Count() const
0000000100001b00 t v8::base::RingBuffer<int>::Count() const
0000000100000000 T __mh_execute_header
0000000100001340 T _main
                 U dyld_stub_binder
```

+ O2

```bash
$ clang++ -std=c++14 -O2 ./main.cxx ./x.cxx ./y.cxx ./z.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 112
-rw-r--r--  1 unnamed  staff   106B  3 26 22:14 main.cxx
-rwxr-xr-x  1 unnamed  staff    16K  3 26 22:33 main.exe
-rw-r--r--  1 unnamed  staff   4.5K  3 26 22:10 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:16 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:12 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:16 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:13 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:16 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:13 z.hxx
0000000100003e10 T x()
0000000100003ed0 T y()
0000000100003ee0 T z()
0000000100000000 T __mh_execute_header
0000000100003df0 T _main
                 U dyld_stub_binder
```

+ O3

```bash
$ clang++ -std=c++14 -O3 ./main.cxx ./x.cxx ./y.cxx ./z.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 112
-rw-r--r--  1 unnamed  staff   106B  3 26 22:14 main.cxx
-rwxr-xr-x  1 unnamed  staff    16K  3 26 22:35 main.exe
-rw-r--r--  1 unnamed  staff   4.5K  3 26 22:10 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:16 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:12 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:16 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:13 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:16 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:13 z.hxx
0000000100003e00 T x()
0000000100003ec0 T y()
0000000100003ed0 T z()
0000000100000000 T __mh_execute_header
0000000100003de0 T _main
                 U dyld_stub_binder
```

+ Os

```bash
clang++ -std=c++14 -Os ./main.cxx ./x.cxx ./y.cxx ./z.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 112
-rw-r--r--  1 unnamed  staff   106B  3 26 22:14 main.cxx
-rwxr-xr-x  1 unnamed  staff    16K  3 26 22:35 main.exe
-rw-r--r--  1 unnamed  staff   4.5K  3 26 22:10 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:16 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:12 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:16 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:13 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:16 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:13 z.hxx
0000000100003e28 T x()
0000000100003ede T y()
0000000100003ee6 T z()
0000000100000000 T __mh_execute_header
0000000100003e11 T _main
                 U dyld_stub_binder
```

+Oz

```bash
$ clang++ -std=c++14 -Oz ./main.cxx ./x.cxx ./y.cxx ./z.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 112
-rw-r--r--  1 unnamed  staff   106B  3 26 22:28 main.cxx
-rwxr-xr-x  1 unnamed  staff    17K  3 26 22:36 main.exe
-rw-r--r--  1 unnamed  staff   4.5K  3 26 22:28 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:28 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 z.hxx
00000001000035c2 T x()
0000000100003a58 T y()
0000000100003c96 T z()
0000000100003904 t v8::base::RingBuffer<double>::Push1(double const&)
000000010000393a t v8::base::RingBuffer<double>::Push2(double const&)
0000000100003964 t v8::base::RingBuffer<double>::Push4(double const&)
0000000100003996 t v8::base::RingBuffer<double>::Push5(double const&)
00000001000039c2 t v8::base::RingBuffer<double>::Push6(double const&)
000000010000393a t v8::base::RingBuffer<double>::Push7(double const&)
00000001000039ec t v8::base::RingBuffer<double>::Push8(double const&)
0000000100003a22 t v8::base::RingBuffer<double>::Push9(double const&)
00000001000038e0 t v8::base::RingBuffer<int>::x(int const&)
0000000100003c62 t v8::base::RingBuffer<int>::Push1(int const&)
00000001000037d2 t v8::base::RingBuffer<int>::Push2(int const&)
00000001000037fa t v8::base::RingBuffer<int>::Push4(int const&)
0000000100003828 t v8::base::RingBuffer<int>::Push5(int const&)
0000000100003850 t v8::base::RingBuffer<int>::Push6(int const&)
00000001000037d2 t v8::base::RingBuffer<int>::Push7(int const&)
0000000100003878 t v8::base::RingBuffer<int>::Push8(int const&)
00000001000038ac t v8::base::RingBuffer<int>::Push9(int const&)
0000000100000000 T __mh_execute_header
00000001000035aa T _main
                 U dyld_stub_binder
```

## [thin](./thin/)

+ O0

```bash
$ clang++ -std=c++14 ./main.cxx ./x.cxx ./y.cxx ./z.cxx ./ring-buffer-base.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 240
-rw-r--r--  1 unnamed  staff   106B  3 26 22:28 main.cxx
-rwxr-xr-x  1 unnamed  staff    72K  3 26 22:38 main.exe
-rw-r--r--  1 unnamed  staff   5.4K  3 26 22:28 ring-buffer-base.cxx
-rw-r--r--  1 unnamed  staff   1.0K  3 26 22:28 ring-buffer-base.hxx
-rw-r--r--  1 unnamed  staff   1.7K  3 26 22:28 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:28 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 z.hxx
00000001000043c0 T x()
0000000100005650 T y()
0000000100006490 T z()
0000000100007390 t (anonymous namespace)::assign(void*, long, void const*, unsigned long)
00000001000050f0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
0000000100005f90 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
0000000100006d70 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
0000000100004f20 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
0000000100005dc0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
0000000100006bd0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
0000000100004f50 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
0000000100005df0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
0000000100006c00 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
0000000100004f80 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push3((anonymous namespace)::type_a const&)
0000000100005e20 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push3((anonymous namespace)::type_a const&)
0000000100004fb0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
0000000100005e50 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
0000000100006c30 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
0000000100004fe0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
0000000100005e80 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
0000000100006c60 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
0000000100005010 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
0000000100005eb0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
0000000100006c90 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
0000000100005040 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
0000000100005ee0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
0000000100006cc0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
0000000100005070 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
0000000100005f10 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
0000000100006cf0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
00000001000050a0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
0000000100005f40 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
0000000100006d20 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
0000000100004f00 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100005da0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100006bb0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
00000001000055c0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100006400 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
00000001000071e0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100005310 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
00000001000061b0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
0000000100006f90 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
0000000100005140 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
0000000100005fe0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
0000000100006dc0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
0000000100005170 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
0000000100006010 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
0000000100006df0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
00000001000051a0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
0000000100006040 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
0000000100006e20 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
00000001000051d0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
0000000100006070 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
0000000100006e50 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
0000000100005200 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
00000001000060a0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
0000000100006e80 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
0000000100005230 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
00000001000060d0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
0000000100006eb0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
0000000100005260 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
0000000100006100 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
0000000100006ee0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
0000000100005290 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
0000000100006130 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
0000000100006f10 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
00000001000052c0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
0000000100006160 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
0000000100006f40 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
0000000100005120 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100005fc0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100006da0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
00000001000055f0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100006430 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100007210 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100005530 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
00000001000063d0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
00000001000071b0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
0000000100005360 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
0000000100006200 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
0000000100006fe0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
0000000100005390 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
0000000100006230 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
0000000100007010 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
00000001000053c0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
0000000100006260 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
0000000100007040 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
00000001000053f0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
0000000100006290 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
0000000100007070 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
0000000100005420 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
00000001000062c0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
00000001000070a0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
0000000100005450 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
00000001000062f0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
00000001000070d0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
0000000100005480 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
0000000100006320 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
0000000100007100 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
00000001000054b0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
0000000100006350 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
0000000100007130 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
00000001000054e0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
0000000100006380 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
0000000100007160 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
0000000100005340 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
00000001000061e0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100006fc0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100005620 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100006460 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100007240 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100004ed0 T v8::base::RingBuffer<double>::x(double const&)
0000000100004d00 T v8::base::RingBuffer<double>::Push1(double const&)
0000000100004d30 T v8::base::RingBuffer<double>::Push2(double const&)
0000000100004d60 T v8::base::RingBuffer<double>::Push3(double const&)
0000000100004d90 T v8::base::RingBuffer<double>::Push4(double const&)
0000000100004dc0 T v8::base::RingBuffer<double>::Push5(double const&)
0000000100004df0 T v8::base::RingBuffer<double>::Push6(double const&)
0000000100004e20 T v8::base::RingBuffer<double>::Push7(double const&)
0000000100004e50 T v8::base::RingBuffer<double>::Push8(double const&)
0000000100004e80 T v8::base::RingBuffer<double>::Push9(double const&)
0000000100004ce0 t v8::base::RingBuffer<double>::RingBuffer()
0000000100005590 t v8::base::RingBuffer<double>::RingBuffer()
0000000100004cb0 T v8::base::RingBuffer<int>::x(int const&)
0000000100005d70 T v8::base::RingBuffer<int>::Push1(int const&)
0000000100004b10 T v8::base::RingBuffer<int>::Push2(int const&)
0000000100004b40 T v8::base::RingBuffer<int>::Push3(int const&)
0000000100004b70 T v8::base::RingBuffer<int>::Push4(int const&)
0000000100004ba0 T v8::base::RingBuffer<int>::Push5(int const&)
0000000100004bd0 T v8::base::RingBuffer<int>::Push6(int const&)
0000000100004c00 T v8::base::RingBuffer<int>::Push7(int const&)
0000000100004c30 T v8::base::RingBuffer<int>::Push8(int const&)
0000000100004c60 T v8::base::RingBuffer<int>::Push9(int const&)
0000000100004af0 t v8::base::RingBuffer<int>::RingBuffer()
0000000100005560 t v8::base::RingBuffer<int>::RingBuffer()
0000000100007830 T v8::base::RingBufferBase::x(void const*)
00000001000072f0 T v8::base::RingBufferBase::Push1(void const*)
00000001000073d0 T v8::base::RingBufferBase::Push2(void const*)
0000000100007460 T v8::base::RingBufferBase::Push3(void const*)
00000001000074d0 T v8::base::RingBufferBase::Push4(void const*)
0000000100007540 T v8::base::RingBufferBase::Push5(void const*)
00000001000075e0 T v8::base::RingBufferBase::Push6(void const*)
0000000100007670 T v8::base::RingBufferBase::Push7(void const*)
00000001000076e0 T v8::base::RingBufferBase::Push8(void const*)
0000000100007770 T v8::base::RingBufferBase::Push9(void const*)
00000001000072c0 T v8::base::RingBufferBase::RingBufferBase(int)
0000000100007270 T v8::base::RingBufferBase::RingBufferBase(int)
00000001000050d0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Count() const
0000000100005f70 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Count() const
0000000100006d50 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Count() const
00000001000052f0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Count() const
0000000100006190 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Count() const
0000000100006f70 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Count() const
0000000100005510 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Count() const
00000001000063b0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Count() const
0000000100007190 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Count() const
0000000100004eb0 T v8::base::RingBuffer<double>::Count() const
0000000100004c90 T v8::base::RingBuffer<int>::Count() const
0000000100007810 T v8::base::RingBufferBase::Count() const
000000010000c0c0 d __dyld_private
0000000100000000 T __mh_execute_header
0000000100004380 T _main
                 U _malloc
                 U _memcpy
                 U dyld_stub_binder
```

+ O1

```bash
$ clang++ -O1 -std=c++14 ./main.cxx ./x.cxx ./y.cxx ./z.cxx ./ring-buffer-base.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 200
-rw-r--r--  1 unnamed  staff   106B  3 26 22:28 main.cxx
-rwxr-xr-x  1 unnamed  staff    55K  3 26 22:39 main.exe
-rw-r--r--  1 unnamed  staff   5.4K  3 26 22:28 ring-buffer-base.cxx
-rw-r--r--  1 unnamed  staff   1.0K  3 26 22:28 ring-buffer-base.hxx
-rw-r--r--  1 unnamed  staff   1.7K  3 26 22:28 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:28 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 z.hxx
00000001000022e0 T x()
0000000100002c30 T y()
0000000100003400 T z()
0000000100003c50 t (anonymous namespace)::assign(void*, long, void const*, unsigned long)
0000000100002a50 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
0000000100003240 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
00000001000039f0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::x((anonymous namespace)::type_a const&)
00000001000029b0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
00000001000031a0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
0000000100003960 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push1((anonymous namespace)::type_a const&)
00000001000029c0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
00000001000031b0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
0000000100003970 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push2((anonymous namespace)::type_a const&)
00000001000029d0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push3((anonymous namespace)::type_a const&)
00000001000031c0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push3((anonymous namespace)::type_a const&)
00000001000029e0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
00000001000031d0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
0000000100003980 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push4((anonymous namespace)::type_a const&)
00000001000029f0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
00000001000031e0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
0000000100003990 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push5((anonymous namespace)::type_a const&)
0000000100002a00 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
00000001000031f0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
00000001000039a0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push6((anonymous namespace)::type_a const&)
0000000100002a10 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
0000000100003200 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
00000001000039b0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push7((anonymous namespace)::type_a const&)
0000000100002a20 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
0000000100003210 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
00000001000039c0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push8((anonymous namespace)::type_a const&)
0000000100002a30 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
0000000100003220 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
00000001000039d0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Push9((anonymous namespace)::type_a const&)
00000001000029a0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100003190 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100003950 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100002c00 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
00000001000033d0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100003b80 t v8::base::RingBuffer<(anonymous namespace)::type_a>::RingBuffer()
0000000100002b10 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
0000000100003300 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
0000000100003ab0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::x((anonymous namespace)::type_b const&)
0000000100002a70 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
0000000100003260 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
0000000100003a10 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push1((anonymous namespace)::type_b const&)
0000000100002a80 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
0000000100003270 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
0000000100003a20 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push2((anonymous namespace)::type_b const&)
0000000100002a90 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
0000000100003280 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
0000000100003a30 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push3((anonymous namespace)::type_b const&)
0000000100002aa0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
0000000100003290 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
0000000100003a40 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push4((anonymous namespace)::type_b const&)
0000000100002ab0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
00000001000032a0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
0000000100003a50 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push5((anonymous namespace)::type_b const&)
0000000100002ac0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
00000001000032b0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
0000000100003a60 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push6((anonymous namespace)::type_b const&)
0000000100002ad0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
00000001000032c0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
0000000100003a70 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push7((anonymous namespace)::type_b const&)
0000000100002ae0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
00000001000032d0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
0000000100003a80 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push8((anonymous namespace)::type_b const&)
0000000100002af0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
00000001000032e0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
0000000100003a90 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Push9((anonymous namespace)::type_b const&)
0000000100002a60 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100003250 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100003a00 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100002c10 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
00000001000033e0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100003b90 t v8::base::RingBuffer<(anonymous namespace)::type_b>::RingBuffer()
0000000100002bd0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
00000001000033c0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
0000000100003b70 t v8::base::RingBuffer<(anonymous namespace)::type_c>::x((anonymous namespace)::type_c const&)
0000000100002b30 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
0000000100003320 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
0000000100003ad0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push1((anonymous namespace)::type_c const&)
0000000100002b40 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
0000000100003330 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
0000000100003ae0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push2((anonymous namespace)::type_c const&)
0000000100002b50 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
0000000100003340 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
0000000100003af0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push3((anonymous namespace)::type_c const&)
0000000100002b60 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
0000000100003350 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
0000000100003b00 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push4((anonymous namespace)::type_c const&)
0000000100002b70 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
0000000100003360 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
0000000100003b10 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push5((anonymous namespace)::type_c const&)
0000000100002b80 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
0000000100003370 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
0000000100003b20 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push6((anonymous namespace)::type_c const&)
0000000100002b90 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
0000000100003380 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
0000000100003b30 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push7((anonymous namespace)::type_c const&)
0000000100002ba0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
0000000100003390 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
0000000100003b40 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push8((anonymous namespace)::type_c const&)
0000000100002bb0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
00000001000033a0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
0000000100003b50 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Push9((anonymous namespace)::type_c const&)
0000000100002b20 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100003310 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100003ac0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100002c20 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
00000001000033f0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100003ba0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::RingBuffer()
0000000100002990 t v8::base::RingBuffer<double>::x(double const&)
00000001000028f0 t v8::base::RingBuffer<double>::Push1(double const&)
0000000100002900 t v8::base::RingBuffer<double>::Push2(double const&)
0000000100002910 t v8::base::RingBuffer<double>::Push3(double const&)
0000000100002920 t v8::base::RingBuffer<double>::Push4(double const&)
0000000100002930 t v8::base::RingBuffer<double>::Push5(double const&)
0000000100002940 t v8::base::RingBuffer<double>::Push6(double const&)
0000000100002950 t v8::base::RingBuffer<double>::Push7(double const&)
0000000100002960 t v8::base::RingBuffer<double>::Push8(double const&)
0000000100002970 t v8::base::RingBuffer<double>::Push9(double const&)
00000001000028e0 t v8::base::RingBuffer<double>::RingBuffer()
0000000100002bf0 t v8::base::RingBuffer<double>::RingBuffer()
00000001000028d0 t v8::base::RingBuffer<int>::x(int const&)
0000000100003180 t v8::base::RingBuffer<int>::Push1(int const&)
0000000100002840 t v8::base::RingBuffer<int>::Push2(int const&)
0000000100002850 t v8::base::RingBuffer<int>::Push3(int const&)
0000000100002860 t v8::base::RingBuffer<int>::Push4(int const&)
0000000100002870 t v8::base::RingBuffer<int>::Push5(int const&)
0000000100002880 t v8::base::RingBuffer<int>::Push6(int const&)
0000000100002890 t v8::base::RingBuffer<int>::Push7(int const&)
00000001000028a0 t v8::base::RingBuffer<int>::Push8(int const&)
00000001000028b0 t v8::base::RingBuffer<int>::Push9(int const&)
0000000100002830 t v8::base::RingBuffer<int>::RingBuffer()
0000000100002be0 t v8::base::RingBuffer<int>::RingBuffer()
0000000100003f00 T v8::base::RingBufferBase::x(void const*)
0000000100003bf0 T v8::base::RingBufferBase::Push1(void const*)
0000000100003c70 T v8::base::RingBufferBase::Push2(void const*)
0000000100003cd0 T v8::base::RingBufferBase::Push3(void const*)
0000000100003d10 T v8::base::RingBufferBase::Push4(void const*)
0000000100003d50 T v8::base::RingBufferBase::Push5(void const*)
0000000100003db0 T v8::base::RingBufferBase::Push6(void const*)
0000000100003e00 T v8::base::RingBufferBase::Push7(void const*)
0000000100003e30 T v8::base::RingBufferBase::Push8(void const*)
0000000100003e90 T v8::base::RingBufferBase::Push9(void const*)
0000000100003be0 T v8::base::RingBufferBase::RingBufferBase(int)
0000000100003bb0 T v8::base::RingBufferBase::RingBufferBase(int)
0000000100002a40 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Count() const
0000000100003230 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Count() const
00000001000039e0 t v8::base::RingBuffer<(anonymous namespace)::type_a>::Count() const
0000000100002b00 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Count() const
00000001000032f0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Count() const
0000000100003aa0 t v8::base::RingBuffer<(anonymous namespace)::type_b>::Count() const
0000000100002bc0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Count() const
00000001000033b0 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Count() const
0000000100003b60 t v8::base::RingBuffer<(anonymous namespace)::type_c>::Count() const
0000000100002980 t v8::base::RingBuffer<double>::Count() const
00000001000028c0 t v8::base::RingBuffer<int>::Count() const
0000000100003ef0 T v8::base::RingBufferBase::Count() const
0000000100008010 d __dyld_private
0000000100000000 T __mh_execute_header
00000001000022c0 T _main
                 U _malloc
                 U _memcpy
                 U dyld_stub_binder
```

+ O2

```bash
clang++ -O2 -std=c++14 ./main.cxx ./x.cxx ./y.cxx ./z.cxx ./ring-buffer-base.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 192
-rw-r--r--  1 unnamed  staff   106B  3 26 22:28 main.cxx
-rwxr-xr-x  1 unnamed  staff    49K  3 26 22:40 main.exe
-rw-r--r--  1 unnamed  staff   5.4K  3 26 22:28 ring-buffer-base.cxx
-rw-r--r--  1 unnamed  staff   1.0K  3 26 22:28 ring-buffer-base.hxx
-rw-r--r--  1 unnamed  staff   1.7K  3 26 22:28 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:28 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 z.hxx
0000000100002ba0 T x()
0000000100003110 T y()
0000000100003670 T z()
0000000100003f20 T v8::base::RingBufferBase::x(void const*)
0000000100003c40 T v8::base::RingBufferBase::Push1(void const*)
0000000100003ca0 T v8::base::RingBufferBase::Push2(void const*)
0000000100003d00 T v8::base::RingBufferBase::Push3(void const*)
0000000100003d30 T v8::base::RingBufferBase::Push4(void const*)
0000000100003d60 T v8::base::RingBufferBase::Push5(void const*)
0000000100003dc0 T v8::base::RingBufferBase::Push6(void const*)
0000000100003e20 T v8::base::RingBufferBase::Push7(void const*)
0000000100003e50 T v8::base::RingBufferBase::Push8(void const*)
0000000100003eb0 T v8::base::RingBufferBase::Push9(void const*)
0000000100003c10 T v8::base::RingBufferBase::RingBufferBase(int)
0000000100003be0 T v8::base::RingBufferBase::RingBufferBase(int)
0000000100003f10 T v8::base::RingBufferBase::Count() const
0000000100008010 d __dyld_private
0000000100000000 T __mh_execute_header
0000000100002b80 T _main
                 U _malloc
                 U _memcpy
                 U dyld_stub_binder
```

+ O3

```bash
$ clang++ -O3 -std=c++14 ./main.cxx ./x.cxx ./y.cxx ./z.cxx ./ring-buffer-base.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 192
-rw-r--r--  1 unnamed  staff   106B  3 26 22:28 main.cxx
-rwxr-xr-x  1 unnamed  staff    49K  3 26 22:40 main.exe
-rw-r--r--  1 unnamed  staff   5.4K  3 26 22:28 ring-buffer-base.cxx
-rw-r--r--  1 unnamed  staff   1.0K  3 26 22:28 ring-buffer-base.hxx
-rw-r--r--  1 unnamed  staff   1.7K  3 26 22:28 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:28 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 z.hxx
0000000100002ba0 T x()
0000000100003110 T y()
0000000100003670 T z()
0000000100003f20 T v8::base::RingBufferBase::x(void const*)
0000000100003c40 T v8::base::RingBufferBase::Push1(void const*)
0000000100003ca0 T v8::base::RingBufferBase::Push2(void const*)
0000000100003d00 T v8::base::RingBufferBase::Push3(void const*)
0000000100003d30 T v8::base::RingBufferBase::Push4(void const*)
0000000100003d60 T v8::base::RingBufferBase::Push5(void const*)
0000000100003dc0 T v8::base::RingBufferBase::Push6(void const*)
0000000100003e20 T v8::base::RingBufferBase::Push7(void const*)
0000000100003e50 T v8::base::RingBufferBase::Push8(void const*)
0000000100003eb0 T v8::base::RingBufferBase::Push9(void const*)
0000000100003c10 T v8::base::RingBufferBase::RingBufferBase(int)
0000000100003be0 T v8::base::RingBufferBase::RingBufferBase(int)
0000000100003f10 T v8::base::RingBufferBase::Count() const
0000000100008010 d __dyld_private
0000000100000000 T __mh_execute_header
0000000100002b80 T _main
                 U _malloc
                 U _memcpy
                 U dyld_stub_binder
```

+Os

```bash
$ clang++ -Os -std=c++14 ./main.cxx ./x.cxx ./y.cxx ./z.cxx ./ring-buffer-base.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 192
-rw-r--r--  1 unnamed  staff   106B  3 26 22:28 main.cxx
-rwxr-xr-x  1 unnamed  staff    49K  3 26 22:41 main.exe
-rw-r--r--  1 unnamed  staff   5.4K  3 26 22:28 ring-buffer-base.cxx
-rw-r--r--  1 unnamed  staff   1.0K  3 26 22:28 ring-buffer-base.hxx
-rw-r--r--  1 unnamed  staff   1.7K  3 26 22:28 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:28 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 z.hxx
0000000100002af3 T x()
00000001000030b3 T y()
000000010000366d T z()
0000000100003f2e T v8::base::RingBufferBase::x(void const*)
0000000100003c80 T v8::base::RingBufferBase::Push1(void const*)
0000000100003cde T v8::base::RingBufferBase::Push2(void const*)
0000000100003d36 T v8::base::RingBufferBase::Push3(void const*)
0000000100003d66 T v8::base::RingBufferBase::Push4(void const*)
0000000100003d96 T v8::base::RingBufferBase::Push5(void const*)
0000000100003df4 T v8::base::RingBufferBase::Push6(void const*)
0000000100003e46 T v8::base::RingBufferBase::Push7(void const*)
0000000100003e6e T v8::base::RingBufferBase::Push8(void const*)
0000000100003ec6 T v8::base::RingBufferBase::Push9(void const*)
0000000100003c56 T v8::base::RingBufferBase::RingBufferBase(int)
0000000100003c2c T v8::base::RingBufferBase::RingBufferBase(int)
0000000100003f24 T v8::base::RingBufferBase::Count() const
0000000100008010 d __dyld_private
0000000100000000 T __mh_execute_header
0000000100002adc T _main
                 U _malloc
                 U _memcpy
                 U dyld_stub_binder
```

+ Oz

```bash
$ clang++ -Oz -std=c++14 ./main.cxx ./x.cxx ./y.cxx ./z.cxx ./ring-buffer-base.cxx -o main.exe && ls -lh && nm --demangle main.exe
total 192
-rw-r--r--  1 unnamed  staff   106B  3 26 22:28 main.cxx
-rwxr-xr-x  1 unnamed  staff    49K  3 26 22:42 main.exe
-rw-r--r--  1 unnamed  staff   5.4K  3 26 22:28 ring-buffer-base.cxx
-rw-r--r--  1 unnamed  staff   1.0K  3 26 22:28 ring-buffer-base.hxx
-rw-r--r--  1 unnamed  staff   1.7K  3 26 22:28 ring-buffer.hxx
-rw-r--r--  1 unnamed  staff   1.9K  3 26 22:28 x.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 x.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 y.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 y.hxx
-rw-r--r--  1 unnamed  staff   1.8K  3 26 22:28 z.cxx
-rw-r--r--  1 unnamed  staff    75B  3 26 22:28 z.hxx
0000000100002bcc T x()
0000000100003166 T y()
00000001000036d8 T z()
0000000100003156 t v8::base::RingBuffer<double>::RingBuffer()
0000000100003146 t v8::base::RingBuffer<int>::RingBuffer()
0000000100003f1e T v8::base::RingBufferBase::x(void const*)
0000000100003c84 T v8::base::RingBufferBase::Push1(void const*)
0000000100003cde T v8::base::RingBufferBase::Push2(void const*)
0000000100003d36 T v8::base::RingBufferBase::Push3(void const*)
0000000100003d66 T v8::base::RingBufferBase::Push4(void const*)
0000000100003d96 T v8::base::RingBufferBase::Push5(void const*)
0000000100003df0 T v8::base::RingBufferBase::Push6(void const*)
0000000100003e3e T v8::base::RingBufferBase::Push7(void const*)
0000000100003e66 T v8::base::RingBufferBase::Push8(void const*)
0000000100003eba T v8::base::RingBufferBase::Push9(void const*)
0000000100003c7a T v8::base::RingBufferBase::RingBufferBase(int)
0000000100003c52 T v8::base::RingBufferBase::RingBufferBase(int)
0000000100003f14 T v8::base::RingBufferBase::Count() const
0000000100008010 d __dyld_private
0000000100000000 T __mh_execute_header
0000000100002bb4 T _main
                U _malloc
                U _memcpy
                U dyld_stub_binder
```
