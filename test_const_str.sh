# Copyright (C) 2015 Jesse Busman
# You may not distribute this program or parts of this
# program in any way, shape or form without written
# permission from Jesse Busman (born 17 march 1996).
# This program is distributed in the hope that it will
# be useful, but WITHOUT ANY WARRANTY; without even the
# implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE. This message may not be changed
# or removed.

rm test_const_str.exe
g++ const_str.cpp test_const_str.cpp -std=c++11 -o test_const_str.exe
./test_const_str.exe
