#!/usr/bin/env python

import os
import re

if __name__ == "__main__":
    word_count = 0

    dir_path = os.path.dirname(os.path.realpath(__file__))
    for subdir, _, files in os.walk(dir_path):
        for file in files:
            if file.endswith(".txt"):
                with open(subdir + os.sep + file) as f:
                    words = re.findall(r"\b[a-zA-Z]{2}\b", f.read())
                    word_count += len(words)
                print("word_count is {0} after parsing {1}".format(word_count, subdir + os.sep + file))
    print("final word count is {0}".format(word_count))
