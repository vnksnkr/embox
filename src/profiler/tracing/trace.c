/**
 * @file
 * @brief TODO
 *
 * @date 18.03.2012
 * @author Alina Kramar
 */

#include <string.h>

#include <util/array.h>
#include <profiler/tracing/trace.h>

ARRAY_SPREAD_DEF_TERMINATED(typeof(struct __trace_point *), __trace_points_array, NULL);
ARRAY_SPREAD_DEF_TERMINATED(typeof(struct __trace_block *), __trace_blocks_array, NULL);
