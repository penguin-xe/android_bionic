/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LINUX_IOPRIO_H
#define _UAPI_LINUX_IOPRIO_H
#include <linux/stddef.h>
#include <linux/types.h>
#define IOPRIO_CLASS_SHIFT 13
#define IOPRIO_NR_CLASSES 8
#define IOPRIO_CLASS_MASK (IOPRIO_NR_CLASSES - 1)
#define IOPRIO_PRIO_MASK ((1UL << IOPRIO_CLASS_SHIFT) - 1)
#define IOPRIO_PRIO_CLASS(ioprio) (((ioprio) >> IOPRIO_CLASS_SHIFT) & IOPRIO_CLASS_MASK)
#define IOPRIO_PRIO_DATA(ioprio) ((ioprio) & IOPRIO_PRIO_MASK)
enum {
  IOPRIO_CLASS_NONE = 0,
  IOPRIO_CLASS_RT = 1,
  IOPRIO_CLASS_BE = 2,
  IOPRIO_CLASS_IDLE = 3,
  IOPRIO_CLASS_INVALID = 7,
};
#define IOPRIO_LEVEL_NR_BITS 3
#define IOPRIO_NR_LEVELS (1 << IOPRIO_LEVEL_NR_BITS)
#define IOPRIO_LEVEL_MASK (IOPRIO_NR_LEVELS - 1)
#define IOPRIO_PRIO_LEVEL(ioprio) ((ioprio) & IOPRIO_LEVEL_MASK)
#define IOPRIO_BE_NR IOPRIO_NR_LEVELS
enum {
  IOPRIO_WHO_PROCESS = 1,
  IOPRIO_WHO_PGRP,
  IOPRIO_WHO_USER,
};
#define IOPRIO_NORM 4
#define IOPRIO_BE_NORM IOPRIO_NORM
#define IOPRIO_HINT_SHIFT IOPRIO_LEVEL_NR_BITS
#define IOPRIO_HINT_NR_BITS 10
#define IOPRIO_NR_HINTS (1 << IOPRIO_HINT_NR_BITS)
#define IOPRIO_HINT_MASK (IOPRIO_NR_HINTS - 1)
#define IOPRIO_PRIO_HINT(ioprio) (((ioprio) >> IOPRIO_HINT_SHIFT) & IOPRIO_HINT_MASK)
enum {
  IOPRIO_HINT_NONE = 0,
  IOPRIO_HINT_DEV_DURATION_LIMIT_1 = 1,
  IOPRIO_HINT_DEV_DURATION_LIMIT_2 = 2,
  IOPRIO_HINT_DEV_DURATION_LIMIT_3 = 3,
  IOPRIO_HINT_DEV_DURATION_LIMIT_4 = 4,
  IOPRIO_HINT_DEV_DURATION_LIMIT_5 = 5,
  IOPRIO_HINT_DEV_DURATION_LIMIT_6 = 6,
  IOPRIO_HINT_DEV_DURATION_LIMIT_7 = 7,
};
#define IOPRIO_BAD_VALUE(val,max) ((val) < 0 || (val) >= (max))
#define IOPRIO_PRIO_VALUE(class,level) ioprio_value(class, level, IOPRIO_HINT_NONE)
#define IOPRIO_PRIO_VALUE_HINT(class,level,hint) ioprio_value(class, level, hint)
#endif
