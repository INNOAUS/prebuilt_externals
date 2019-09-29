#!/bin/bash
#
# This script is part of the BDR quick-start guide.
#

brew install readline flex bison talloc

tar xvfj bdr-pg-src.tar.bz2
tar xvfj bdr-plugin-src.tar.bz2

DESTDIR=$PWD/bdr
pushd bdr-pg-src
./configure --prefix=$DESTDIR 2>&1 | tee -a "$LOGFILE"
make -j8 -s | tee -a "$LOGFILE"
make -j8 -s install 2>&1 | tee -a "$LOGFILE"
make -j8 -s -C contrib 2>&1 | tee -a "$LOGFILE"
make -j8 -s -C contrib install 2>&1 | tee -a "$LOGFILE"
popd

echo "PostgreSQL for BDR compiled and installed."
echo "Preparing BDR extension..."

pushd bdr-plugin-src
PATH=$DESTDIR/bin:$PATH ./configure 2>&1 | tee -a "$LOGFILE"
make -j8 -s 2>&1 | tee -a "$LOGFILE"
make -j8 -s install 2>&1 | tee -a "$LOGFILE"
popd

echo
echo "---------------------------"
echo "BDR compiled and installed."
echo
echo "Sources at $BASEDIR/bdr-src"
echo "Installed to $BASEDIR/bdr"
echo
echo "Now add it to your PATH:"
echo "    export PATH=$BASEDIR/bdr/bin:\$PATH"
echo "and carry on with the quickstart in the documentation."
echo
echo "WARNING: this is just a toy BDR install for testing and experimentation!"
echo
echo "---------------------------"

trap "" EXIT
