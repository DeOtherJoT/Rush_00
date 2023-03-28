The 'old' directory contains the files that were submitted in the old Piscine.

The 'autorun' directory now contains a way to compare the Rush project to be evaluated.

How to use autorun :-
cd into the directory, run 
make diff IN_X=<the value of x> IN_Y=<the value of y> TARGET=<which rush to compile>

if there is a difference between the two files, there is an error in either the generated
answer or evaluated answer, most likely the latter. Careful inspection is still necessary.

If the files match, then diff does not output anything.