# V-Pal

## THIS VOTING SOFTWARE PROJECT WAS CREATED FOR CSCI 5801 

### Team Members: Joel Alfveby, Bat-Ider Ganbold, Kanoog Moua, Ramanish Singh

Description: 

    V-Pal is a voting software that processes election results for Instant Runoff Voting, Open Party List Voting, and Popularity Voting systems. 
    
    Ballots are processed in the form of CSV files (format of ballot files are detailed in the SRS document). V-Pal processes the ballots and creates a Media/Summary file for the public and an Audit file for the election officials. Furthermore, a summary of the results will be printed on the screen of who the winner is and their stats (party affiliation and number of votes received).

    A Software Requirements Specification (SRS) and Software Design Document (SDD) are inlcuded that follows IEEE standard documentation and 
    can be referred to.



Tools/Techniques:

    - Waterfall methodology and Agile Scrum ceremonies were utilized at different points in this project. 
    - C/C++ Programming
    - Google C++ Testing

# Setup

### Step 1: Downloading the Software

To start, download the software from this link:

https://github.com/Kanoog/V-Pal-csci5801

### Step 2: Creating an Executable

To compile the project, open the terminal, navigate to V-Pal-csci5801/V-Pal/src/, and
type:

```make```

This will compile the executable 'main' in the current directory.

### Step 3: Running the Program

The program can be run with this command:

```./main```

The program will prompt for a csv file. When you input the file, the program will
automatically calculate the results, displaying the winner(s) to the screen.
A summary file will be created, along with an audit file detailing
the exact calculations.

# Generating Documentation

### HTML Documentation

All of the code is compatible with doxygen, so users can generate readable html documentation. 
The user is first required to have doxygen for the documentation and GraphViz to generate class diagrams.

Navigate to V-Pal-csci5801/V-Pal/documentation and run:

```doxygen Doxyfile```

in the terminal. Once the program 
finishes, navigate into the new html/ folder, then open index.html.

### Code Documentation

Alongside the doxygen documentation, the code is readable and has comments for maximum understandability.

# Running Tests

### Step 1 : Creating the testing executable

Navigate to the folder V-Pal-csci5801/V-Pal/testing/, and type "make" in the terminal. It will create a file named "unittest" in the folder.

### Step 2: Running the unit test

Running the unit test using the following command: 

```./unittest```

The results will be presented on the screen. 
