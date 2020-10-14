# yt-c-vd-learn
Welcome to check out here.
Here is Jay's first repo to save the files and learning files.
At first, the first IDE I used is CodeBlock .This ide is nice but I use vscode now,Codeblock is a nice ide that is fit for the beginners.
Second, the video I watched to learn is this:
https://www.youtube.com/watch?v=KJgsSFOSQv0&loop=0
The video was made by freecodecamp, which has the best learning resource.
If you guys like it, you can also sub to support it.
That is the end.
SEE YOU NEXT TIME.
# Git ssh got and tutorial
This was written for me in order to remind me if I forgot.
## Git ssh got 
**Before you use git, you have to get ssh key first.(if you have got, you can skip this)**
First, the way of this is from [this video](https://www.youtube.com/watch?v=H5qNpRGB7Qw&loop=0)
and [there](https://blog.jaycetyle.com/2018/02/github-ssh/)
**step 1. type this command in the git bash:**
```
ssh-keygen- -t rsa -b 4096 -C "your email/gmail address here that you register in the github"
```
ex. mine:
```
ssh-keygen- -t rsa -b 4096 -C "smartjay1206@gamil.com"
```
After doing this, it'll generate the key and then press enter until it shows the fingerprint.
**step 2. type this:**
```
eval "$(ssh-agent -s)"
```
and it shows your agent pid(it's different from all of us)  
**step 3.and type this:**
```
ssh-add ~/ssh/id_rsa
```
almost done.  
**step 4. add your ssh key on github**  
**step5. type this on your git bash:**
```
$ cat (your save location)
```
ex.
```
$ cat /smart/desktop/.ssh/id_rsa.pub
```
**step 6. copy all of the this to the key "board" of the add key page on github**  
**done**
## Git push or something tutorial
1. first save all the files here
2. type `git add .`
3. type `git status`
4. type `git commit -m"Added to my c vd learn repo" -m"some description"`
5. type `git push`
6. done

**see you guys !**
