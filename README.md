# Pipex

The goal of pipex was to recreate the behavior of this command: ``$> < file1 cmd1 | cmd2 > file2``.

Essentially, I've learned a lot about the flow of inputs, outputs and fds with redirections and pipes. Dealing with different fds, closing some and duplicating others so they become another fd's input instead of the output, was quite a puzzle.

I've also discovered the notion of parent and child process, which is an interesting and usefull concept!
