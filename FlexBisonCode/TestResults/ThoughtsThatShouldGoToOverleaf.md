First run on 100 Documents produced errors in 74 of them.
    - It appears that the all the PDF's that passed were single page PDF;s.
        - I am going to test with 100 single page PDF's
            - 0 Errors. So the issue with the manual code is it does not cover pages very well.

After investigating, it was determined the grammar for handling multiple pages worked. Where it failed is on the Kids Array. I did not anticipate that there would be multiple values here for each page.


What I did was remove manual token for /Kids and added that into the regex for the KIDSLOOP token
and then just called KIDSLOOP in the grammar
Grammar changed to this (\/Kids[ \t\r])(\[)([ \t\r]+(?:[0-9]+[ \t\r]+)+[a-zA-Z]?)+[ \t\r](\])  

After that change I got 0 errors out of 200 documents consisting of various page lengths, various paragraph and word lengths.