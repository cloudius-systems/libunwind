    ./configure --enable-static --disable-shared \
               --enable-cxx-exceptions --disable-block-signals \
               CFLAGS="-U_FORTIFY_SOURCE -fno-stack-protector"
