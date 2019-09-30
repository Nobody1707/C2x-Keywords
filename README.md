# C2x-Keywords
New Keywords and Feature Test Macros from C2x.

`c2x_keywords.h` contains a forwards compatible implementation of the new keyword macros
from C2x. As it only contains (conditional) macro definitions, it does not need an
include guard.

All of the new keywords are their own feature test macro, and I make no attempt to
undefine any of these macros, so this file is safe to include even after your compiler
starts supporting these keywords natively.

It's also safe, but not recommended, to pre-include the standard headers that define
these macros, except for `<stdbool.h>`, as the versions of `true` and `false` in that
header are defined as `int`s instead of as `_Bool`s.
