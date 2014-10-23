#ifndef INCLUDE_RUBY_CONFIG_H
#define INCLUDE_RUBY_CONFIG_H 1
/* confdefs.h */
#define CANONICALIZATION_FOR_MATHN 1
#define STDC_HEADERS 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_MEMORY_H 1
#define HAVE_STRINGS_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_UNISTD_H 1
#define __EXTENSIONS__ 1
#define _ALL_SOURCE 1
#define _GNU_SOURCE 1
#define _POSIX_PTHREAD_SEMANTICS 1
#define _TANDEM_SOURCE 1
#define HAVE_LONG_LONG 1
#define HAVE_OFF_T 1
#define SIZEOF_INT 4
#define SIZEOF_SHORT 2
#define SIZEOF_LONG 4
#define SIZEOF_LONG_LONG 8
#define SIZEOF___INT64 8
#define SIZEOF_OFF_T 8
#define SIZEOF_VOIDP 4
#define SIZEOF_FLOAT 4
#define SIZEOF_DOUBLE 8
#define SIZEOF_TIME_T 4
#define PRI_LL_PREFIX "I64"
#define rb_pid_t pid_t
#define PIDT2NUM(v) INT2NUM(v)
#define NUM2PIDT(v) NUM2INT(v)
#define PRI_PIDT_PREFIX PRI_INT_PREFIX
#define rb_uid_t int
#define UIDT2NUM(v) INT2NUM(v)
#define NUM2UIDT(v) NUM2INT(v)
#define PRI_UIDT_PREFIX PRI_INT_PREFIX
#define rb_gid_t int
#define GIDT2NUM(v) INT2NUM(v)
#define NUM2GIDT(v) NUM2INT(v)
#define PRI_GIDT_PREFIX PRI_INT_PREFIX
#define rb_time_t time_t
#define TIMET2NUM(v) LONG2NUM(v)
#define NUM2TIMET(v) NUM2LONG(v)
#define PRI_TIMET_PREFIX PRI_LONG_PREFIX
#define rb_dev_t dev_t
#define DEVT2NUM(v) UINT2NUM(v)
#define NUM2DEVT(v) NUM2UINT(v)
#define PRI_DEVT_PREFIX PRI_INT_PREFIX
#define rb_mode_t mode_t
#define MODET2NUM(v) UINT2NUM(v)
#define NUM2MODET(v) NUM2UINT(v)
#define PRI_MODET_PREFIX PRI_INT_PREFIX
#define rb_rlim_t int long "long long"
#define RLIM2NUM(v) LONG2NUM(v)
#define NUM2RLIM(v) NUM2LONG(v)
#define PRI_RLIM_PREFIX PRI_LONG_PREFIX
#define HAVE_PROTOTYPES 1
#define TOKEN_PASTE(x,y) x##y
#define STRINGIZE(expr) STRINGIZE0(expr)
#define HAVE_STDARG_PROTOTYPES 1
#define HAVE_VA_ARGS_MACRO 1
#define NORETURN(x) __attribute__ ((noreturn)) x
#define DEPRECATED(x) __attribute__ ((deprecated)) x
#define NOINLINE(x) __attribute__ ((noinline)) x
#define FUNC_STDCALL(x) __attribute__ ((stdcall)) x
#define FUNC_CDECL(x) __attribute__ ((cdecl)) x
#define FUNC_FASTCALL(x) __attribute__ ((fastcall)) x
#define RUBY_ALIAS_FUNCTION_TYPE(type, prot, name, args) type prot __attribute__((alias(#name)));
#define RUBY_ALIAS_FUNCTION_VOID(prot, name, args) RUBY_ALIAS_FUNCTION_TYPE(void, prot, name, args)
#define HAVE_GCC_ATOMIC_BUILTINS 1
#define RUBY_FUNC_EXPORTED __attribute__ ((visibility("default"))) extern
#define HAVE_DECL_SYS_NERR 1
#define HAVE_DIRENT_H 1
#define HAVE__BOOL 1
#define HAVE_STDBOOL_H 1
#define HAVE_LIMITS_H 1
#define HAVE_SYS_FILE_H 1
#define HAVE_FCNTL_H 1
#define HAVE_SYS_FCNTL_H 1
#define HAVE_DIRECT_H 1
#define HAVE_SYS_UTIME_H 1
#define HAVE_FLOAT_H 1
#define HAVE_LOCALE_H 1
#define HAVE_TIME_H 1
#define HAVE_PROCESS_H 1
#define SIZEOF_SIZE_T 4
#define SIZEOF_PTRDIFF_T 4
#define HAVE_STRUCT_STAT_ST_RDEV 1
#define HAVE_ST_RDEV 1
#define SIZEOF_STRUCT_STAT_ST_SIZE SIZEOF_INT
#define HAVE_STRUCT_TIMEVAL 1
#define HAVE_RB_FD_INIT 1
#define HAVE_INT8_T 1
#define SIZEOF_INT8_T 1
#define HAVE_UINT8_T 1
#define SIZEOF_UINT8_T 1
#define HAVE_INT16_T 1
#define SIZEOF_INT16_T 2
#define HAVE_UINT16_T 1
#define SIZEOF_UINT16_T 2
#define HAVE_INT32_T 1
#define SIZEOF_INT32_T 4
#define HAVE_UINT32_T 1
#define SIZEOF_UINT32_T 4
#define HAVE_INT64_T 1
#define SIZEOF_INT64_T 8
#define HAVE_UINT64_T 1
#define SIZEOF_UINT64_T 0
#define HAVE_INTPTR_T 1
#define SIZEOF_INTPTR_T 4
#define HAVE_UINTPTR_T 1
#define SIZEOF_UINTPTR_T 4
#define HAVE_SSIZE_T 1
#define SIZEOF_SSIZE_T 4
#define uid_t int
#define gid_t int
#define GETGROUPS_T int
#define RETSIGTYPE void
#define HAVE_ALLOCA 1
#define HAVE_DUP2 1
#define HAVE_MEMMOVE 1
#define HAVE_STRERROR 1
#define HAVE_STRCHR 1
#define HAVE_STRSTR 1
#define HAVE_FLOCK 1
#define HAVE_ISNAN 1
#define HAVE_FINITE 1
#define HAVE_ISINF 1
#define HAVE_HYPOT 1
#define HAVE_ACOSH 1
#define HAVE_ERF 1
#define HAVE_TGAMMA 1
#define HAVE_CBRT 1
#define HAVE_SIGNBIT 1
#define HAVE_FMOD 1
#define HAVE_WAITPID 1
#define HAVE_SPAWNV 1
#define HAVE_GETCWD 1
#define HAVE_FTRUNCATE 1
#define HAVE_CHSIZE 1
#define HAVE_TIMES 1
#define HAVE_FCNTL 1
#define HAVE_FTELLO64 1
#define HAVE_FSEEKO 1
#define HAVE_FSEEKO64 1
#define HAVE_LINK 1
#define HAVE_FSYNC 1
#define HAVE_CLOSE 1
#define HAVE__SETJMP 1
#define HAVE_TELLDIR 1
#define HAVE_SEEKDIR 1
#define HAVE_COSH 1
#define HAVE_SINH 1
#define HAVE_TANH 1
#define HAVE_LOG2 1
#define HAVE_ROUND 1
#define HAVE_MKTIME 1
#define HAVE_GETTIMEOFDAY 1
#define RUBY_SETJMP(env) setjmp(env)
#define RUBY_LONGJMP(env,val) longjmp(env,val)
#define RUBY_JMP_BUF jmp_buf
#define HAVE_DECL_TZNAME 1
#define HAVE_TZNAME 1
#define HAVE_DAYLIGHT 1
#define HAVE_VAR_TIMEZONE 1
#define TYPEOF_VAR_TIMEZONE long
#define HAVE_TIMEZONE 1
#define TIMEZONE_VOID 1
#define RSHIFT(x,y) ((x)>>(int)(y))
#define FILE_COUNT _cnt
#define FILE_READPTR _ptr
#define SIZEOF_STRUCT_STAT_ST_INO 2
#define STACK_GROW_DIRECTION -1
#define DLEXT_MAXLEN 3
#define DLEXT ".so"
#define LIBDIR_BASENAME "lib"
#define EXECUTABLE_EXTS ".exe",".com",".cmd",".bat"
#define LOAD_RELATIVE 1
#define RUBY_LIB_VERSION_STYLE 3	/* full */
#define RUBY_EXEC_PREFIX ""
#define RUBY_LIB_PREFIX RUBY_EXEC_PREFIX"/lib/ruby"
#define RUBY_SITE_LIB RUBY_LIB_PREFIX"/site_ruby"
#define RUBY_VENDOR_LIB RUBY_LIB_PREFIX"/vendor_ruby"
#define RUBY_PLATFORM "i386-mingw32"
#define RUBY_SITEARCH "i386-msvcrt"
#endif /* INCLUDE_RUBY_CONFIG_H */
