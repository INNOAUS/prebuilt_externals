/*-------------------------------------------------------------------------
 *
 * fastpath.h
 *
 *
 * Portions Copyright (c) 1996-2014, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * src/include/tcop/fastpath.h
 *
 *-------------------------------------------------------------------------
 */
#ifndef FASTPATH_H
#define FASTPATH_H

#include "lib/stringinfo.h"

extern int GetOldFunctionMessage(StringInfo buf);
extern void HandleFunctionRequest(StringInfo msgBuf);

#endif   /* FASTPATH_H */
