#!/bin/bash

# Loop through all files in the current directory
for file in *.txt; do
  # Extract the filename without the extension
  filename="${file%.*}"

  # Convert the .txt file to a .pdf file using text2PDF
  ./text2pdf "$file" > "$filename.pdf"

  # Print a success message
  echo "Converted $file to $filename.pdf"
done
# chmod +x pdfGeneratorFromTest.sh 
# ./pdfGeneratorFromTest.sh
