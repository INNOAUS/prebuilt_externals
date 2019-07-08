#!/bin/bash

for f in *.a ; do
	tarfile=$f.tar.bz2
	tar cvfj $tarfile $f
done
