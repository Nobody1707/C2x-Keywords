/* This header contains a forwards compatible implementation of the new keyword macros
 * from C2x. As it only contains (conditional) macro definitions, it does not need an
 * include guard.
 *
 * All of the new keywords are their own feature test macro, and I make no attempt to
 * undefine any of these macros, so this file is safe to include even after your compiler
 * starts supporting these keywords natively.
 *
 * It's also safe, but not recommended, to pre-include the standard headers that define
 * these macros, except for <stdbool.h>, as the versions of true and false in that header
 * are defined as ints instead of as _Bools.
 */

#ifndef __cplusplus // C versions of the macros.

#ifndef alignas
#define alignas _Alignas
#endif
#ifndef alignof
#define alignof _Alignof
#endif
#ifndef thread_local
#define thread_local _Thread_local
#endif
#ifndef static_assert
#define static_assert _Static_assert
#endif
#ifndef nullptr
#define nullptr ((void*)0)
#endif
// Do I really need to check the boolean macros individually?
#ifndef bool
#define bool _Bool
#endif
// I think these plus signs are redundant, but they were definitions given in the
// official proposal, so I'm keeping them just in case.
#ifndef true
#define true ((bool)+1)
#endif
#ifndef false
#define false ((bool)+0)
#endif

#else // C++ versions of the macros.

#ifndef alignas
#define alignas alignas
#endif
#ifndef alignof
#define alignof alignof
#endif
#ifndef thread_local
#define thread_local thread_local
#endif
#ifndef static_assert
#define static_assert static_assert
#endif
#ifndef nullptr
#define nullptr nullptr
#endif
// Do I really need to check the boolean macros individually?
#ifndef bool
#define bool bool
#endif
#ifndef true
#define true true
#endif
#ifndef false
#define false false
#endif

#endif
