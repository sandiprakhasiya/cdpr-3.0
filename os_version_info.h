/* os_version_info.h
 * Declarations of outines to report operating system version information
 * By Gerald Combs <gerald@wireshark.org>
 * Copyright 1998 Gerald Combs
 *
 * Modified by Tim Dorssers
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __WSUTIL_OS_VERSION_INFO_H__
#define __WSUTIL_OS_VERSION_INFO_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*
 * Get the OS version, and append it to a char.
 */
void get_os_version_info(char *str);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __WSUTIL_OS_VERSION_INFO_H__ */
