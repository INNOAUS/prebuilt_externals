#!/bin/sh

for f in *.a ; do
	tarfile=$f.tar.bz2
	tar cvfj $tarfile $f
done
for f in *.dylib* ; do
	tarfile=$f.tar.bz2
	tar cvfj $tarfile $f
done
