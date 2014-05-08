#!/bin/bash
for mdfile in $(find ./ateliers -name "*.md" -anewer $(dirname $0)/gen-docs-timestamp)
do
    echo $mdfile
   pandoc $mdfile --from=markdown --to=html5 --standalone --number-sections --output=$(dirname $mdfile)/$(basename $mdfile .md).html
done

touch $(dirname $0)/gen-docs-timestamp

#pandoc test.md --from=markdown --to=pdf --chapters --number-sections --output=test.pdf 