#!/bin/bash

bcm_sdk_dir=$1 # BCM SDK source code directory (probably, just current directory)
bcm_to_dir=$2  # BCM SDK artifacts directory in "main" project

to_dir_deploy=$bcm_to_dir/deploy
if [ ! -d $to_dir_deploy ] ; then
    mkdir $to_dir_deploy
fi

from_dir=`find $bcm_sdk_dir/systems/linux/user/ -type d -name "x86-smp_generic-*"`
if [ -z $from_dir ] ; then
	echo "Couldn't locate artifacts source folder"
	exit 1
fi;

#from_dir=$bcm_sdk_dir/systems/linux/user/x86-smp_generic-2_6
cp $from_dir/linux-kernel-bde.ko $to_dir_deploy
cp $from_dir/linux-user-bde.ko   $to_dir_deploy