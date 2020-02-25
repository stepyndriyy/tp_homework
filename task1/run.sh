#!/bin/bash
chmod +x run.sh

base_dir=$1
format=$2
backup_dir_name=$3
archive_name=$4
            
//archive_dir=$base_dir/$backup_dir_name

mkdir $backup_dir_name

find $base_dir -name "*.$format" -exec cp --backup=t {} ./$backup_dir_name \;

tar -zcf $archive_name ./$backup_dir_name
echo 'done'
