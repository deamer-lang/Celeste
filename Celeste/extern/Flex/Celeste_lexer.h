#ifndef CelesteHEADER_H
#define CelesteHEADER_H 1
#define CelesteIN_HEADER 1

#line 6 "./Celeste_lexer.h"

#define  YY_INT_ALIGNED short int

/* A lexical scanner generated by flex */

#define FLEX_SCANNER
#define YY_FLEX_MAJOR_VERSION 2
#define YY_FLEX_MINOR_VERSION 6
#define YY_FLEX_SUBMINOR_VERSION 4
#if YY_FLEX_SUBMINOR_VERSION > 0
#define FLEX_BETA
#endif

#ifdef yy_create_buffer
#define Celeste_create_buffer_ALREADY_DEFINED
#else
#define yy_create_buffer Celeste_create_buffer
#endif

#ifdef yy_delete_buffer
#define Celeste_delete_buffer_ALREADY_DEFINED
#else
#define yy_delete_buffer Celeste_delete_buffer
#endif

#ifdef yy_scan_buffer
#define Celeste_scan_buffer_ALREADY_DEFINED
#else
#define yy_scan_buffer Celeste_scan_buffer
#endif

#ifdef yy_scan_string
#define Celeste_scan_string_ALREADY_DEFINED
#else
#define yy_scan_string Celeste_scan_string
#endif

#ifdef yy_scan_bytes
#define Celeste_scan_bytes_ALREADY_DEFINED
#else
#define yy_scan_bytes Celeste_scan_bytes
#endif

#ifdef yy_init_buffer
#define Celeste_init_buffer_ALREADY_DEFINED
#else
#define yy_init_buffer Celeste_init_buffer
#endif

#ifdef yy_flush_buffer
#define Celeste_flush_buffer_ALREADY_DEFINED
#else
#define yy_flush_buffer Celeste_flush_buffer
#endif

#ifdef yy_load_buffer_state
#define Celeste_load_buffer_state_ALREADY_DEFINED
#else
#define yy_load_buffer_state Celeste_load_buffer_state
#endif

#ifdef yy_switch_to_buffer
#define Celeste_switch_to_buffer_ALREADY_DEFINED
#else
#define yy_switch_to_buffer Celeste_switch_to_buffer
#endif

#ifdef yypush_buffer_state
#define Celestepush_buffer_state_ALREADY_DEFINED
#else
#define yypush_buffer_state Celestepush_buffer_state
#endif

#ifdef yypop_buffer_state
#define Celestepop_buffer_state_ALREADY_DEFINED
#else
#define yypop_buffer_state Celestepop_buffer_state
#endif

#ifdef yyensure_buffer_stack
#define Celesteensure_buffer_stack_ALREADY_DEFINED
#else
#define yyensure_buffer_stack Celesteensure_buffer_stack
#endif

#ifdef yylex
#define Celestelex_ALREADY_DEFINED
#else
#define yylex Celestelex
#endif

#ifdef yyrestart
#define Celesterestart_ALREADY_DEFINED
#else
#define yyrestart Celesterestart
#endif

#ifdef yylex_init
#define Celestelex_init_ALREADY_DEFINED
#else
#define yylex_init Celestelex_init
#endif

#ifdef yylex_init_extra
#define Celestelex_init_extra_ALREADY_DEFINED
#else
#define yylex_init_extra Celestelex_init_extra
#endif

#ifdef yylex_destroy
#define Celestelex_destroy_ALREADY_DEFINED
#else
#define yylex_destroy Celestelex_destroy
#endif

#ifdef yyget_debug
#define Celesteget_debug_ALREADY_DEFINED
#else
#define yyget_debug Celesteget_debug
#endif

#ifdef yyset_debug
#define Celesteset_debug_ALREADY_DEFINED
#else
#define yyset_debug Celesteset_debug
#endif

#ifdef yyget_extra
#define Celesteget_extra_ALREADY_DEFINED
#else
#define yyget_extra Celesteget_extra
#endif

#ifdef yyset_extra
#define Celesteset_extra_ALREADY_DEFINED
#else
#define yyset_extra Celesteset_extra
#endif

#ifdef yyget_in
#define Celesteget_in_ALREADY_DEFINED
#else
#define yyget_in Celesteget_in
#endif

#ifdef yyset_in
#define Celesteset_in_ALREADY_DEFINED
#else
#define yyset_in Celesteset_in
#endif

#ifdef yyget_out
#define Celesteget_out_ALREADY_DEFINED
#else
#define yyget_out Celesteget_out
#endif

#ifdef yyset_out
#define Celesteset_out_ALREADY_DEFINED
#else
#define yyset_out Celesteset_out
#endif

#ifdef yyget_leng
#define Celesteget_leng_ALREADY_DEFINED
#else
#define yyget_leng Celesteget_leng
#endif

#ifdef yyget_text
#define Celesteget_text_ALREADY_DEFINED
#else
#define yyget_text Celesteget_text
#endif

#ifdef yyget_lineno
#define Celesteget_lineno_ALREADY_DEFINED
#else
#define yyget_lineno Celesteget_lineno
#endif

#ifdef yyset_lineno
#define Celesteset_lineno_ALREADY_DEFINED
#else
#define yyset_lineno Celesteset_lineno
#endif

#ifdef yywrap
#define Celestewrap_ALREADY_DEFINED
#else
#define yywrap Celestewrap
#endif

#ifdef yyalloc
#define Celestealloc_ALREADY_DEFINED
#else
#define yyalloc Celestealloc
#endif

#ifdef yyrealloc
#define Celesterealloc_ALREADY_DEFINED
#else
#define yyrealloc Celesterealloc
#endif

#ifdef yyfree
#define Celestefree_ALREADY_DEFINED
#else
#define yyfree Celestefree
#endif

#ifdef yytext
#define Celestetext_ALREADY_DEFINED
#else
#define yytext Celestetext
#endif

#ifdef yyleng
#define Celesteleng_ALREADY_DEFINED
#else
#define yyleng Celesteleng
#endif

#ifdef yyin
#define Celestein_ALREADY_DEFINED
#else
#define yyin Celestein
#endif

#ifdef yyout
#define Celesteout_ALREADY_DEFINED
#else
#define yyout Celesteout
#endif

#ifdef yy_flex_debug
#define Celeste_flex_debug_ALREADY_DEFINED
#else
#define yy_flex_debug Celeste_flex_debug
#endif

#ifdef yylineno
#define Celestelineno_ALREADY_DEFINED
#else
#define yylineno Celestelineno
#endif

/* First, we deal with  platform-specific or compiler-specific issues. */

/* begin standard C headers. */
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

/* end standard C headers. */

/* flex integer type definitions */

#ifndef FLEXINT_H
#define FLEXINT_H

/* C99 systems have <inttypes.h>. Non-C99 systems may or may not. */

#if defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L

/* C99 says to define __STDC_LIMIT_MACROS before including stdint.h,
 * if you want the limit (max/min) macros for int types. 
 */
#ifndef __STDC_LIMIT_MACROS
#define __STDC_LIMIT_MACROS 1
#endif

#include <inttypes.h>
typedef int8_t flex_int8_t;
typedef uint8_t flex_uint8_t;
typedef int16_t flex_int16_t;
typedef uint16_t flex_uint16_t;
typedef int32_t flex_int32_t;
typedef uint32_t flex_uint32_t;
#else
typedef signed char flex_int8_t;
typedef short int flex_int16_t;
typedef int flex_int32_t;
typedef unsigned char flex_uint8_t; 
typedef unsigned short int flex_uint16_t;
typedef unsigned int flex_uint32_t;

/* Limits of integral types. */
#ifndef INT8_MIN
#define INT8_MIN               (-128)
#endif
#ifndef INT16_MIN
#define INT16_MIN              (-32767-1)
#endif
#ifndef INT32_MIN
#define INT32_MIN              (-2147483647-1)
#endif
#ifndef INT8_MAX
#define INT8_MAX               (127)
#endif
#ifndef INT16_MAX
#define INT16_MAX              (32767)
#endif
#ifndef INT32_MAX
#define INT32_MAX              (2147483647)
#endif
#ifndef UINT8_MAX
#define UINT8_MAX              (255U)
#endif
#ifndef UINT16_MAX
#define UINT16_MAX             (65535U)
#endif
#ifndef UINT32_MAX
#define UINT32_MAX             (4294967295U)
#endif

#ifndef SIZE_MAX
#define SIZE_MAX               (~(size_t)0)
#endif

#endif /* ! C99 */

#endif /* ! FLEXINT_H */

/* begin standard C++ headers. */

/* TODO: this is always defined, so inline it */
#define yyconst const

#if defined(__GNUC__) && __GNUC__ >= 3
#define yynoreturn __attribute__((__noreturn__))
#else
#define yynoreturn
#endif

/* Size of default input buffer. */
#ifndef YY_BUF_SIZE
#ifdef __ia64__
/* On IA-64, the buffer size is 16k, not 8k.
 * Moreover, YY_BUF_SIZE is 2*YY_READ_BUF_SIZE in the general case.
 * Ditto for the __ia64__ case accordingly.
 */
#define YY_BUF_SIZE 32768
#else
#define YY_BUF_SIZE 16384
#endif /* __ia64__ */
#endif

#ifndef YY_TYPEDEF_YY_BUFFER_STATE
#define YY_TYPEDEF_YY_BUFFER_STATE
typedef struct yy_buffer_state *YY_BUFFER_STATE;
#endif

#ifndef YY_TYPEDEF_YY_SIZE_T
#define YY_TYPEDEF_YY_SIZE_T
typedef size_t yy_size_t;
#endif

extern int yyleng;

extern FILE *yyin, *yyout;

#ifndef YY_STRUCT_YY_BUFFER_STATE
#define YY_STRUCT_YY_BUFFER_STATE
struct yy_buffer_state
	{
	FILE *yy_input_file;

	char *yy_ch_buf;		/* input buffer */
	char *yy_buf_pos;		/* current position in input buffer */

	/* Size of input buffer in bytes, not including room for EOB
	 * characters.
	 */
	int yy_buf_size;

	/* Number of characters read into yy_ch_buf, not including EOB
	 * characters.
	 */
	int yy_n_chars;

	/* Whether we "own" the buffer - i.e., we know we created it,
	 * and can realloc() it to grow it, and should free() it to
	 * delete it.
	 */
	int yy_is_our_buffer;

	/* Whether this is an "interactive" input source; if so, and
	 * if we're using stdio for input, then we want to use getc()
	 * instead of fread(), to make sure we stop fetching input after
	 * each newline.
	 */
	int yy_is_interactive;

	/* Whether we're considered to be at the beginning of a line.
	 * If so, '^' rules will be active on the next match, otherwise
	 * not.
	 */
	int yy_at_bol;

    int yy_bs_lineno; /**< The line count. */
    int yy_bs_column; /**< The column count. */

	/* Whether to try to fill the input buffer when we reach the
	 * end of it.
	 */
	int yy_fill_buffer;

	int yy_buffer_status;

	};
#endif /* !YY_STRUCT_YY_BUFFER_STATE */

void yyrestart ( FILE *input_file  );
void yy_switch_to_buffer ( YY_BUFFER_STATE new_buffer  );
YY_BUFFER_STATE yy_create_buffer ( FILE *file, int size  );
void yy_delete_buffer ( YY_BUFFER_STATE b  );
void yy_flush_buffer ( YY_BUFFER_STATE b  );
void yypush_buffer_state ( YY_BUFFER_STATE new_buffer  );
void yypop_buffer_state ( void );

YY_BUFFER_STATE yy_scan_buffer ( char *base, yy_size_t size  );
YY_BUFFER_STATE yy_scan_string ( const char *yy_str  );
YY_BUFFER_STATE yy_scan_bytes ( const char *bytes, int len  );

void *yyalloc ( yy_size_t  );
void *yyrealloc ( void *, yy_size_t  );
void yyfree ( void *  );

/* Begin user sect3 */

#define Celestewrap() (/*CONSTCOND*/1)
#define YY_SKIP_YYWRAP

extern int yylineno;

extern char *yytext;
#ifdef yytext_ptr
#undef yytext_ptr
#endif
#define yytext_ptr yytext

#ifdef YY_HEADER_EXPORT_START_CONDITIONS
#define INITIAL 0

#endif

#ifndef YY_NO_UNISTD_H
/* Special case for "unistd.h", since it is non-ANSI. We include it way
 * down here because we want the user's section 1 to have been scanned first.
 * The user has a chance to override it with an option.
 */
#include <unistd.h>
#endif

#ifndef YY_EXTRA_TYPE
#define YY_EXTRA_TYPE void *
#endif

/* Accessor methods to globals.
   These are made visible to non-reentrant scanners for convenience. */

int yylex_destroy ( void );

int yyget_debug ( void );

void yyset_debug ( int debug_flag  );

YY_EXTRA_TYPE yyget_extra ( void );

void yyset_extra ( YY_EXTRA_TYPE user_defined  );

FILE *yyget_in ( void );

void yyset_in  ( FILE * _in_str  );

FILE *yyget_out ( void );

void yyset_out  ( FILE * _out_str  );

			int yyget_leng ( void );

char *yyget_text ( void );

int yyget_lineno ( void );

void yyset_lineno ( int _line_number  );

/* Macros after this point can all be overridden by user definitions in
 * section 1.
 */

#ifndef YY_SKIP_YYWRAP
#ifdef __cplusplus
extern "C" int yywrap ( void );
#else
extern int yywrap ( void );
#endif
#endif

#ifndef yytext_ptr
static void yy_flex_strncpy ( char *, const char *, int );
#endif

#ifdef YY_NEED_STRLEN
static int yy_flex_strlen ( const char * );
#endif

#ifndef YY_NO_INPUT

#endif

/* Amount of stuff to slurp up with each read. */
#ifndef YY_READ_BUF_SIZE
#ifdef __ia64__
/* On IA-64, the buffer size is 16k, not 8k */
#define YY_READ_BUF_SIZE 16384
#else
#define YY_READ_BUF_SIZE 8192
#endif /* __ia64__ */
#endif

/* Number of entries by which start-condition stack grows. */
#ifndef YY_START_STACK_INCR
#define YY_START_STACK_INCR 25
#endif

/* Default declaration of generated scanner - a define so the user can
 * easily add parameters.
 */
#ifndef YY_DECL
#define YY_DECL_IS_OURS 1

extern int yylex (void);

#define YY_DECL int yylex (void)
#endif /* !YY_DECL */

/* yy_get_previous_state - get the state just before the EOB char was reached */

#undef YY_NEW_FILE
#undef YY_FLUSH_BUFFER
#undef yy_set_bol
#undef yy_new_buffer
#undef yy_set_interactive
#undef YY_DO_BEFORE_ACTION

#ifdef YY_DECL_IS_OURS
#undef YY_DECL_IS_OURS
#undef YY_DECL
#endif

#ifndef Celeste_create_buffer_ALREADY_DEFINED
#undef yy_create_buffer
#endif
#ifndef Celeste_delete_buffer_ALREADY_DEFINED
#undef yy_delete_buffer
#endif
#ifndef Celeste_scan_buffer_ALREADY_DEFINED
#undef yy_scan_buffer
#endif
#ifndef Celeste_scan_string_ALREADY_DEFINED
#undef yy_scan_string
#endif
#ifndef Celeste_scan_bytes_ALREADY_DEFINED
#undef yy_scan_bytes
#endif
#ifndef Celeste_init_buffer_ALREADY_DEFINED
#undef yy_init_buffer
#endif
#ifndef Celeste_flush_buffer_ALREADY_DEFINED
#undef yy_flush_buffer
#endif
#ifndef Celeste_load_buffer_state_ALREADY_DEFINED
#undef yy_load_buffer_state
#endif
#ifndef Celeste_switch_to_buffer_ALREADY_DEFINED
#undef yy_switch_to_buffer
#endif
#ifndef Celestepush_buffer_state_ALREADY_DEFINED
#undef yypush_buffer_state
#endif
#ifndef Celestepop_buffer_state_ALREADY_DEFINED
#undef yypop_buffer_state
#endif
#ifndef Celesteensure_buffer_stack_ALREADY_DEFINED
#undef yyensure_buffer_stack
#endif
#ifndef Celestelex_ALREADY_DEFINED
#undef yylex
#endif
#ifndef Celesterestart_ALREADY_DEFINED
#undef yyrestart
#endif
#ifndef Celestelex_init_ALREADY_DEFINED
#undef yylex_init
#endif
#ifndef Celestelex_init_extra_ALREADY_DEFINED
#undef yylex_init_extra
#endif
#ifndef Celestelex_destroy_ALREADY_DEFINED
#undef yylex_destroy
#endif
#ifndef Celesteget_debug_ALREADY_DEFINED
#undef yyget_debug
#endif
#ifndef Celesteset_debug_ALREADY_DEFINED
#undef yyset_debug
#endif
#ifndef Celesteget_extra_ALREADY_DEFINED
#undef yyget_extra
#endif
#ifndef Celesteset_extra_ALREADY_DEFINED
#undef yyset_extra
#endif
#ifndef Celesteget_in_ALREADY_DEFINED
#undef yyget_in
#endif
#ifndef Celesteset_in_ALREADY_DEFINED
#undef yyset_in
#endif
#ifndef Celesteget_out_ALREADY_DEFINED
#undef yyget_out
#endif
#ifndef Celesteset_out_ALREADY_DEFINED
#undef yyset_out
#endif
#ifndef Celesteget_leng_ALREADY_DEFINED
#undef yyget_leng
#endif
#ifndef Celesteget_text_ALREADY_DEFINED
#undef yyget_text
#endif
#ifndef Celesteget_lineno_ALREADY_DEFINED
#undef yyget_lineno
#endif
#ifndef Celesteset_lineno_ALREADY_DEFINED
#undef yyset_lineno
#endif
#ifndef Celesteget_column_ALREADY_DEFINED
#undef yyget_column
#endif
#ifndef Celesteset_column_ALREADY_DEFINED
#undef yyset_column
#endif
#ifndef Celestewrap_ALREADY_DEFINED
#undef yywrap
#endif
#ifndef Celesteget_lval_ALREADY_DEFINED
#undef yyget_lval
#endif
#ifndef Celesteset_lval_ALREADY_DEFINED
#undef yyset_lval
#endif
#ifndef Celesteget_lloc_ALREADY_DEFINED
#undef yyget_lloc
#endif
#ifndef Celesteset_lloc_ALREADY_DEFINED
#undef yyset_lloc
#endif
#ifndef Celestealloc_ALREADY_DEFINED
#undef yyalloc
#endif
#ifndef Celesterealloc_ALREADY_DEFINED
#undef yyrealloc
#endif
#ifndef Celestefree_ALREADY_DEFINED
#undef yyfree
#endif
#ifndef Celestetext_ALREADY_DEFINED
#undef yytext
#endif
#ifndef Celesteleng_ALREADY_DEFINED
#undef yyleng
#endif
#ifndef Celestein_ALREADY_DEFINED
#undef yyin
#endif
#ifndef Celesteout_ALREADY_DEFINED
#undef yyout
#endif
#ifndef Celeste_flex_debug_ALREADY_DEFINED
#undef yy_flex_debug
#endif
#ifndef Celestelineno_ALREADY_DEFINED
#undef yylineno
#endif
#ifndef Celestetables_fload_ALREADY_DEFINED
#undef yytables_fload
#endif
#ifndef Celestetables_destroy_ALREADY_DEFINED
#undef yytables_destroy
#endif
#ifndef CelesteTABLES_NAME_ALREADY_DEFINED
#undef yyTABLES_NAME
#endif

#line 395 "./Celeste_lexer.l"


#line 708 "./Celeste_lexer.h"
#undef CelesteIN_HEADER
#endif /* CelesteHEADER_H */
