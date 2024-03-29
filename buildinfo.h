/**@file buildinfo.h   Information about the build environment.
 * $Id: buildinfo.h.in,v 1.1 2004/02/01 06:30:39 bitman Exp $
 * @author Ryan Phillips
 *
 * Copyright (C) 2004 Ryan Phillips <bitman@users.sourceforge.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either listersion 2 of the License, or
 * (at your option) any later listersion.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#ifndef BUILDINFO_H
#define BUILDINFO_H

/* Define build paths. */

/** Path prefix for platform independent data.
 * This an absolute path. It is represented by "${prefix}" in other paths. */
#define PREFIX "/usr/local"

/** Path prefix for platform dependent binaries.
 * This is either an absolute path or contains "${prefix}". It is represented
 * by "${exec_prefix}" in other paths. */
#define EXEC_PREFIX "${prefix}"

/** Path for binary programs. */
#define BINDIR "${exec_prefix}/bin"

/** Path for shared data. */
#define DATADIR "${prefix}/share"

/** Path for this package's data. */
#define PKGDATADIR "${prefix}/share/kevedit"


#endif
