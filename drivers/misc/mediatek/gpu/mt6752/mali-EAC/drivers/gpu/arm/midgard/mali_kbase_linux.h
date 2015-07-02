/*
 *
 * (C) COPYRIGHT ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU licence.
 *
 * A copy of the licence is included with the program, and can also be obtained
 * from Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA  02110-1301, USA.
 *
 */






#ifndef _KBASE_LINUX_H_
#define _KBASE_LINUX_H_

#include <linux/platform_device.h>
#include <linux/miscdevice.h>
#include <linux/list.h>
#include <linux/module.h>
#include <linux/atomic.h>

#if defined(MALI_KERNEL_TEST_API)
#if (1 == MALI_KERNEL_TEST_API)
#define KBASE_EXPORT_TEST_API(func)		EXPORT_SYMBOL(func);
#else
#define KBASE_EXPORT_TEST_API(func)
#endif
#else
#define KBASE_EXPORT_TEST_API(func)
#endif

#define KBASE_EXPORT_SYMBOL(func)		EXPORT_SYMBOL(func);

#endif				