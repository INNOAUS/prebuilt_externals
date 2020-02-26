#!/bin/bash

for f in *.a ; do
	tarfile=$f.tar.bz2
	tar cvfj $tarfile $f
done


for f in *.so* ; do
	tarfile=$f.tar.bz2
	tar cvfj $tarfile $f
done
