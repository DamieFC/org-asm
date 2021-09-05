# org-asm :smirk:
An assembly lanugage for fun (and for the sake of orgasms). Started as a joke on Discord. It's going to be used for [dfcpu](https://github.com/DamieFC/dfcpu)
## How should I say this so I don't get sent to the Dean's office?
Say it as "orgasm assembly" or "org assembly". If you say the first, you'll still be questioned (citation: 9-3-21: got questioned for talking about this project, got sent to dean, had to explain this. Not fun).
## Building
```sh
make all
```
## Using
You can currently run an assembly program but not really assemble. Anyways, you use:
```
./org-asm run <file.asm>
```
You can do .s or if you want .S or .ASM  but that's it. Currently it segfaults (waaaaaaah)
## I want to code this but I don't necessarily want to run it on dfcpu, can I still use this?
Sure, I'm going to port this code to dfcpu, this will still basically run in a terminal. So actually, just using this it won't run on dfcpu, because I need to create microcode.
