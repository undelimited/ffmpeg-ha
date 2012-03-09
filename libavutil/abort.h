/*
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef AVUTIL_ABORT_H
#define AVUTIL_ABORT_H

/**
 * Causes abnormal program termination. By default, av_abort_callback calls
 * abort() from the stdlib. This behavior can be altered by setting a
 * different av_abort callback function.
 */

void av_abort_internal(void);
void av_abort_set_callback(void (*)(void));
void av_abort_default_callback(void);

#define av_abort()    do { av_log(NULL, AV_LOG_ERROR, "Abort at %s:%d\n", __FILE__, __LINE__); av_abort_internal(); } while(0)

#endif /* AVUTIL_ABORT_H */
