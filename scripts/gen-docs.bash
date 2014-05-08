#!/bin/bash

GHCSS1=https://devoxx4kidsfr.github.io/materials/stylesheets/styles.css
GHCSS2=https://devoxx4kidsfr.github.io/materials/stylesheets/pygment_trac.css

for mdfile in $(find ./ateliers -name "*.md" -anewer $(dirname $0)/gen-docs-timestamp)
do
    echo $mdfile
   pandoc $mdfile --from=markdown --to=html5 --standalone --css $GHCSS1 --css $GHCSS2 --output=$(dirname $mdfile)/$(basename $mdfile .md).html
done



touch $(dirname $0)/gen-docs-timestamp

#pandoc test.md --from=markdown --to=pdf --chapters --number-sections --output=test.pdf 