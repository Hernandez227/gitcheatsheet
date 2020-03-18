git clone---- Clone a repository into a new directory 
git init----- Create an empty Git repository or reinitialize an exisiting one 
git add------ add file contents to the index 
git mv------- Move or rename a file, a directory, or a symlink
git reset---- Reset current HEAD to the specified state 
git status--- You can see the status of your file or repository 
git rm------- Remove files from the working tree and from the index 
git reset---- Reset current HEAD to the specified state
git checkout- Switch branches or restore working tree files 
git commit--- Record changes to the repository
git diff----- Show changes between commits, commit and working tree, etc
git merge---- Join two or more development histories together 
git rebase--- Reapply commits on top of another base trip
git tag------ Create, list, delete or verify a tag object signed with GPG
git pull----- Fetch from and integrate with another repository or a local branch
git push----- Update remote refs along with associated objects 
git remote--- Show you all the names of every remote that you have 
echo--------- You need to write this for print whatever you want
.gitignore--- Is for archives that you not want to upload or save in your branch
git log------ List the confirmations made over in your repository
git log--stat If you want to see a stadistics of every confirmation of your edited archive
-- pretty--- Modify the output format
the main options of "git log"
-p --------- Shows the patch entered in each confirmation
--name-status It shows the list of affected files, also indicating if they were added, modified or deleted.
--relative-date Show the date in relative format
--graph----- Displays an ASCII chart with branch and junction history
--abbrev-commit  It shows only the first characters of the SHA-1 sum, instead of the 40 characters of which it is composed.
--name-only   Displays the list of affected files.
--shortstat   Show only the summary line of the --stat option.
--since, --after   Shows those confirmations made after the specified date.
--until, --before  Shows those confirmations made before the specified date.
--committer   Shows only those commits whose commit matches the specified string.
--author   Show only those commits whose author matches the specified string.

git fetch -- If you want to obtain your remote projects
git remote rename-- This is for rename the file that you uploaded
git show---- You can see the tag information along with the commit
git diff--staged This command compares your prepared changes with the last confirmed snapshot.
git diff--cached To see what you have prepared so far
git difftoolyou will be able to see the changes with programs of this type like Araxis, emerge, vimdiff and more.
git commit -a You will have Git automatically prepare all tracked files before committing them, saving you from the git add step
echo 'project1' >README If you want to create a new file when you have little description of your code 
git status -s   You will get a much more simplified output.
git commit -v For a more explicit way to remember what you have changed
git rm --cached Keep the file on your hard drive but without Git still tracking it.
git rm log/\*.log  You can pass files, directories and glob patterns to it.
git rm \*~   This command deletes all files with the extension
git log -p  Shows the differences entered in each confirmation
git log --stat   For code reviews, or to quickly view what has happened in confirmations submitted by a contributor.
git log --pretty  Modify the format of the output.
git log -Sfunction_name    It receives a string and only shows the commits that changed the code by adding or removing the string.
git commit --amend  If you want to redo the confirmation
git remote -v  Shows the URLs that Git has associated with the name and that will be used when reading and writing on that remote
git remote add  Add a new remote and associate it with a name that you can easily reference
git fetch pb  It is not to write the full URL
git fetch origin   It brings all the new work that has been sent to that server since you cloned it
git remote show   If you want to see more information about a particular remote
git remote rename   If you want to change the reference name of a remote
git config --global alias.   If you don't want to type the full name of each Git command, you can easily set an alias
git branch   If you want to create a new branch
git log --oneline --decorate   To show you where each branch points.
git log --oneline --decorate --graph --all   It will show the history of your confirmations, indicating where the pointers of your branches are and how your history has diverged.
git checkout -b   To create and jump to a new branch, in one step
git merge   You can perform the appropriate tests, make sure that the solution is correct, and incorporate the changes into the master branch to put them into production.
git branch -d  Is to delete a branch forever
git mergetool   If instead of solving directly you prefer to use a graphical tool
git branch -v  To view the latest change confirmation for each branch
git branch --merged   If you want to see the branches that have been merged with the active branch
git branch --no-merged    To show all branches containing unbound jobs
git fetch teamone  To retrieve all content from the remote
git checkout --track   Prepare other monitoring branches if you want to have some that follow other remote branches or not follow the master branch.
git checkout -b   To prepare a local branch with a different name than the remote one, you can use the first version with a different local branch name
git push origin --delete  You can delete the remote branch using it
git rebase  You can capture all confirmed changes in one branch and reapply them to another.
git rebase --onto  You can take changes from the client that are not on server and reapply them on your main branch
git push --force  To overwrite the registry on the server
