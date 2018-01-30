#ifndef _MVISOR_TYPES_H_
#define _MVISOR_TYPES_H_

#include <config/mvisor_config.h>

#ifdef	CONFIG_ARM_AARCH64

typedef unsigned long		_u64;
typedef unsigned int		_u32;
typedef unsigned short		_u16;
typedef unsigned char		_u8;
typedef signed long		_s64;
typedef signed int		_s32;
typedef signed short		_s16;
typedef signed char		_s8;

typedef _u32 			uint32_t;
typedef _s32 			int32_t;
typedef _u16 			uint16_t;
typedef _s16 			int16_t;
typedef _u8 			uint8_t;
typedef _s8 			int8_t;
typedef _u64 			uint64_t;
typedef _s64			int64_t;

typedef uint64_t		size_t;
typedef uint64_t		phy_addr_t;

#else

typedef unsigned long long	_u64;
typedef unsigned int		_u32;
typedef unsigned short		_u16;
typedef unsigned char		_u8;
typedef signed long long	_s64;
typedef signed int		_s32;
typedef signed short		_s16;
typedef signed char		_s8;

typedef _u32 			uint32_t;
typedef _s32 			int32_t;
typedef _u16 			uint16_t;
typedef _s16 			int16_t;
typedef _u8 			uint8_t;
typedef _s8 			int8_t;
typedef _u64 			uint64_t;
typedef _s64			int64_t;

typedef uint32_t		size_t;
typedef uint32_t		phy_addr_t;

#endif


#define MAX(a, b)	a > b ? a : b
#define MIN(a, b)	a < b ? a : b

#define u8_to_u16(low, high)	((high << 8) | low)
#define u8_to_u32(u1, u2, u3, u4)	\
	((u4 << 24) | (u3 << 16) | (u2 << 8) | (u1))
#define u16_to_u32(low, high)	((high << 16) | low)

#define NULL ((void *)0)

#define container_of(ptr, name, member) \
	(name *)((unsigned char *)ptr - ((unsigned char *)&(((name *)0)->member)))

#define BIT(nr) (1 << (nr))

#define ALIGN(num, size)	((num) & ~(size - 1))
#define BALIGN(num, size)	(((num) + (size - 1)) & ~(size - 1))

#define stringify_no_expansion(x) #x
#define stringify(x) stringify_no_expansion(x)

#define SIZE_1G		(0x40000000)
#define SIZE_4K		(0x1000)
#define SIZE_1M		(0x100000)
#define SIZE_1K		(0x400)

#define SIZE_16K	(16 * SIZE_1K)
#define SIZE_32M	(32 * SIZE_1M)
#define SIZE_64K	(64 * SIZE_1K)
#define SIZE_512M	(512 * SIZE_1M)
#define SIZE_2M		(2 * 1024 * 1024)
#define SIZE_8M		(8 * 1024 * 1024)

#endif