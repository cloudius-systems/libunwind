/* Provide a real file - not a symlink - as it would cause multiarch conflicts
   when multiple different arch releases are installed simultaneously.  */

#if defined __arm__
# include "tdep-arm/jmpbuf.h"
#elif defined __hppa__
# include "tdep-hppa/jmpbuf.h"
#elif defined __ia64__
# include "tdep-ia64/jmpbuf.h"
#elif defined __mips__
# include "tdep-mips/jmpbuf.h"
#elif defined __powerpc__ && !defined __powerpc64__
# include "tdep-ppc32/jmpbuf.h"
#elif defined __powerpc64__
# include "tdep-ppc64/jmpbuf.h"
#elif defined __i386__
# include "tdep-x86/jmpbuf.h"
#elif defined __x86_64__
# include "tdep-x86_64/jmpbuf.h"
#else
# error "Unsupported arch"
#endif
