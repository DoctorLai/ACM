#!/bin/bash

python3 ./list.py > README.md
git add *.md
git commit -m "Index Regenerated $(date)"
git pull origin master
git push origin master


