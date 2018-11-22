#!/bin/bash

./GenerateIndex.sh > README.md
git add README.md
git commit -m "Index Regenerated $(date)"
git pull origin master
git push origin master


