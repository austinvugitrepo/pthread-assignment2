# pthread-assignment2
For assignment 2 in my operating systems course, in which the focus is pthread programming

---> There are 3 parts to this project and the following source codes are required: <--- 
-------------------------------------------------------------------------------------------

---> Part A:
-------------------------------------------------------------------------------------------
The following files are located in proj2a subdirectory:
Makefile 
proj2a.c
Project2-Pthread-parta.xlsx

---> Part B:
-------------------------------------------------------------------------------------------
The following files are located in proj2b subdirectory:
Makefile
proj2b.c

---> Part C:
-------------------------------------------------------------------------------------------
The following files are located in proj2c subdirectory:
Makefile
proj2c.c

----> Instructions:
--------------------------------------------------------------------------------------------
--------------------------------------------------------------------------------------------

- If not already provided please git clone this to your chosen directory: 
    [ git clone https://github.com/austinvugitrepo/pthread-assignment2.git ]
- Then be sure to [ cd ] into the repository:
     [ cd pthread-assignment2 ]
- Then proceed to test any particular part, which have their own subdirectories which are represented above

---TIP---
- The Makefiles are intended to be run with gcc, but can be substituted for other C compilers such as clang
- Besides Part B, despite offering make run, as a recommendation do not run it. Part A and Part C are executed in a way that needs arguments which I will not
  bother figuring it out to include in the Makefiles
- to properly run make and/or make clean for a particular program [ cd ] to that particular subdirectory and run it there
- If all else fails please compile manually via this format:
    [ gcc -o "executable name" "program name" -lpthread ]
     then [ ./"program executable"] in the current directory (add extra arguments depending on the part)
- To run proj2b.c in a docker container: docker pull austinvudockerrepo/whalehub:project2_b
