### `dep`

This directory contains transient (.Td) and processed (.d) dependency files,
which map each translation unit to the files it references. The dependency
files are generated by GNU Make via Makefile using an implementation of
auto-dependency generation, specifically the GCC approach as modified by
Lukas Waymann and found at [make.mad-scientist.net][1].

<i>
This is one of several README files used to track directories that would otherwi
se be ignored, since they store derivative files excluded by .gitignore, but are
 necessary for these derivative files to be created. The best alternative is dir
ectory sentinels, but there are caveats regarding portability of directory creat
ion. The current approach exposes the directory structure to version control dir
ectly, so that changes are documented in the repository history and the current 
state and purpose is documented inherently.
</i>

[1]: http://make.mad-scientist.net/papers/advanced-auto-dependency-generation/
