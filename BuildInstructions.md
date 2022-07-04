# Building

This is a summary of instructions from this **2 hour** (!!!) stream: [Intermit.Tech #13 - Compiling WLED from scratch](https://www.youtube.com/watch?v=fRxyp5Yhivc), that is a tutorial from the [WLED site](https://kno.wled.ge/basics/tutorials/).

20220701: This is the software environment used:
* Windows 10 on x86 with *Windows Subsystem Linux 2* (WSL 2) with Ubuntu 20.04 LTS installed
* Visual Studio Code installed with WSL package

1. Git clone `WLED` repository onto WSL (i.e. Linux) filesystem.
In Visual Studio Code with WLED repository open (e.g. run `code .` in the directory containing `WLED` repository), 
2. Add, from Marketplace, the *PlatformIO IDE*
3. Press the check mark in the bottom task bar to build.
4. Try again if not all "modules" build.

The resulting output is in `WLED/build_output/firmware/` and `WLED/build_output/release`.

# Pulling new updates from original WLED github repository into this forked GitHub repository

cf. https://stackoverflow.com/questions/3903817/pull-new-updates-from-original-github-repository-into-forked-github-repository

```
git remote add upstream https://github.com/Aircoookie/WLED
git fetch upstream
git merge upstream/main main
git rebase upstream/main
```
# Configuring PlatformIO

cf. https://docs.platformio.org/en/latest/integration/ide/vscode.html

The `WLED/platformio.ini` is for configuration.

# WLED directory structure

`build_output` - output
`images` - inconsequential images
