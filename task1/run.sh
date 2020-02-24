#!/bin/bash
mkdir $1/$3
find $1 -name "*.$2" -exec cp --backup=t -- {} $1/$3/ \;
tar -czf $1/$4 $1/$3
rm -r $1/$3
echo 'done'
