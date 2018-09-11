#!/bin/sh
  
# install basic packages
sudo yum -y upgrade
sudo yum -y install yum-utils wget bc vim-enhanced

# install devtoolset-7
sudo yum install -y centos-release-scl
sudo yum-config-manager --enable rhel-server-rhscl-7-rpms
sudo yum --disablerepo='*' --enablerepo='centos-sclo-rh' --enablerepo='centos-sclo-sclo' list available

sudo yum install -y devtoolset-7
echo ". /opt/rh/devtoolset-7/enable" | tee -a $HOME/.bash_profile
. /opt/rh/devtoolset-7/enable

sudo yum -y install libcurl-devel curl

wget https://cmake.org/files/v3.11/cmake-3.11.4.tar.gz
tar xvfz cmake-3.11.4.tar.gz
cd cmake-3.11.4
./bootstrap
make
sudo make install
cd ..

curl "https://bootstrap.pypa.io/get-pip.py" -o "get-pip.py"
sudo python get-pip.py
sudo pip install conan

# install dev libs
sudo yum install -y git libtool libtalloc-devel hiredis-devel openssl-devel libpqxx-devel
sudo yum install -y redhat-lsb-core

# install php71
sudo rpm -Uvh https://dl.fedoraproject.org/pub/epel/epel-release-latest-7.noarch.rpm
sudo rpm -Uvh https://mirror.webtatic.com/yum/el7/webtatic-release.rpm

sudo yum install -y php71w php71w-opcache rh-php71-php-devel rh-php71
sudo yum install -y yum-plugin-replace
echo "export PATH=$PATH:/opt/rh/rh-php71/root/usr/bin" | tee -a $HOME/.bash_profile
export PATH=$PATH:/opt/rh/rh-php71/root/usr/bin 

# install zeroc-ice
sudo yum -y install ice-all-runtime ice-all-devel
sudo yum -y install libfreeze-c++-devel freeze-utils


