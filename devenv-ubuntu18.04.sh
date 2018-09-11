#!/bin/sh
  
sudo apt upgrade
sudo apt -y install build-essential
sudo apt -y install cmake git

sudo apt -y install curl libcurlpp-dev 
sudo apt -y install python-dev
sudo apt -y install libtalloc-dev libtool libhiredis-dev libpqxx-dev 

sudo apt -y install php-all-dev


#sudo apt-key adv --keyserver keyserver.ubuntu.com --recv B6391CB2CFBA643D
sudo apt-key add ./GPG-KEY-zeroc-release-B6391CB2CFBA643D
sudo apt-add-repository "deb http://zeroc.com/download/Ice/3.7/ubuntu18.04 stable main"
sudo apt-get update

sudo apt-get install zeroc-ice-all-runtime zeroc-ice-all-dev
sudo apt-get install libzeroc-freeze-dev zeroc-freeze-utils

sudo apt-get install bison bisonc++ libbison-dev libfl-dev flexc++ flex 

sudo apt-get install libssl-dev


