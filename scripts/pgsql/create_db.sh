#!/bin/sh

# create_db.sh
#
# This file is released under the terms of the Artistic License.  Please see
# the file LICENSE, included in this package, for details.
#
# Copyright (C) 2002 Mark Wong & Open Source Development Lab, Inc.
#
# 01 May 2003

. ./init_env.sh

# su to user postgres
# createuser $USERNAME
# answer yes to all questions
# where $USERNAME is the persion you're trying to create

# Create database
echo "Creating database..."
initdb -D $PGDATA
postmaster -i -D $PGDATA
createdb $DB_NAME