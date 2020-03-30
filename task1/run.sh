#!/bin/bash

base_dir=$1
format=$2
backup_dir_name=$3
archive_name=$4

mkdir $backup_dir_name

find $base_dir -name "*.$format" -exec cp --backup=t {} ./$backup_dir_name \;

tar -zcf $archive_name ./$backup_dir_name
echo 'done'
