#!/bin/bash

GHCSS1=https://devoxx4kidsfr.github.io/materials/stylesheets/styles.css
GHCSS2=https://devoxx4kidsfr.github.io/materials/stylesheets/pygment_trac.css
HEADER="--include-before-body=$(dirname $0)/header.html"
HTML_OPTIONS="--from=markdown --to=html5 --standalone --css $GHCSS1 --css $GHCSS2 $HEADER"

for folder in "ateliers" "logistique" "presse-medias"
do
    for mdfile in $(find $folder -name "*.md" -anewer $(dirname $0)/gen-docs-timestamp)
    do
	echo $mdfile
	pandoc $mdfile $HTML_OPTIONS --output=$(dirname $mdfile)/$(basename $mdfile .md).html
    done
done

touch $(dirname $0)/gen-docs-timestamp

#pandoc test.md --from=markdown --to=pdf --chapters --number-sections --output=test.pdf 