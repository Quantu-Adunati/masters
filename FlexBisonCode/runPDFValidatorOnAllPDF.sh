#!/bin/bash

# Directory containing the PDF files
DIRECTORY="./Test Documents"

# Initialize error counter
error_count=0

# Count the total number of PDF files
total_files=$(find "$DIRECTORY" -type f -name "*.pdf" | wc -l)

# Loop through all PDF files in the specified directory
for pdf_file in "$DIRECTORY"/*.pdf; do
  # Check if the file exists to avoid errors
  if [[ -f "$pdf_file" ]]; then
    # Run the pdfValidator on the current PDF file
    ./pdfValidator "$pdf_file" 2>&1 | grep -q "Error | Line:"

    # Check if the grep command returned a match (indicating an error)
    if [[ $? -eq 0 ]]; then
      ((error_count++))
      echo "Error found in $pdf_file"
    fi
  else
    echo "No PDF files found in $DIRECTORY."
  fi
done

# Calculate the error percentage
error_percentage=$(echo "scale=2; $error_count / $total_files * 100" | bc)

# Print the results
echo "Total errors: $error_count out of $total_files documents ($error_percentage%)"


# chmod +x runPDFValidatorOnAllPDF.sh 
# ./runPDFValidatorOnAllPDF.sh