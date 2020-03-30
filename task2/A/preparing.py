import sys

if __name__ == '__main__':
    output_file = sys.argv[1]
    with open(output_file, 'w') as f:
        f.write('#pragma once\n#include<iostream>')