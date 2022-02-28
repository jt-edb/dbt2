/*
 * This file is released under the terms of the Artistic License.  Please see
 * the file LICENSE, included in this package, for details.
 *
 * Copyright (C) 2002      Open Source Development Labs, Inc.
 *               2002-2022 Mark Wong
 *
 * 13 May 2003
 */

#ifndef _MYSQL_NEW_ORDER_H_
#define _MYSQL_NEW_ORDER_H_

#include "db.h"

int execute_new_order_mysql(struct db_context_t *, struct new_order_t *);

#endif /* _MYSQL_NEW_ORDER_H_ */
