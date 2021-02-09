# Hands on GIT and GITHUB workflow practice.
### Follow the instructions

1. **Fork** the repo to your account.

2. Clone the forked repo to your local machine using git clone command.
   - **$ git clone https://github.com/harishankarpv/SEPM_project_practice_repo.git**

3.cd into the cloned folder and do the followng. 

4. Do the following in the terminal
    - **$ git remote -v**
        - (will list URLs of your repo since you clone from it.)
    - **$ git remote add upstream https://github.com/harishankarpv/SEPM_project_practice_repo.git**
        - (will connect the original forked repo)
    - **$ git remote -v**
        - (You must see 4 URLs, 2 yours and 2 of the original forked repo.)
    - **$ git pull upstream master**
        - (should get the mesage: Already up to date.)

5. Open testfile.cpp in editor **(vscode)** and do your task and save it.

6. Create a new branch
   - **$ git branch** 
        (Will list all branches, currently only master)
   - **$ git checkout hari**
        (command will create a new branch hari and checkout to it. Name your branches your name)
   - **$ git branch**
        (Now you should see both master and hari branch)

7. Open testfile.cpp in a code editor (preferably vscode) and perform task assigned.

8. Commiting your changes. Run the following commands in terminal
   - **$ git status** -> will show you have changes to be commited.
   - **$ git add .** -> add the changed file to staging area.
   - **$ git commit -m "your message here" -m "your name here"**-> your first message must be like, Successfully uncommented bubble sort function and second message must be your name in UPPERCASE.
   - **$ git status** -> will show working tree is clean, since you commited you changes.
   - **$ git log** -> will show all commits made so far.

9. Push code to your repo
   - **$ git push orign hari** -> you will be pushing to your new branch, so change to yours in command.

10. Create a pull request. Go to your GITHUB account and create pull request.
    - *You are creating a pull request from your forked repos -> your branch to original repos-> master branch*
    - **create pull request**
    - **I will merege the pull request, then the changes will be seen in the files on the original repo**





