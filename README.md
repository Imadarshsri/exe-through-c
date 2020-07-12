# Repository to execute a python exe file in C program by passing arguments to later through command line

## Steps to pass arguments and execute the exe file passing these arguments in a c file

1. Open command prompt.

2. Navigate to the `exe_generation` folder in command-prompt.

3. Compile the `exec.c` file as follows :

   ```c
   gcc exec.c -o exec
   ```

4. Run the above compiled output file as folows :

   ```c
   exec <num1> <num2> <num3> .\dist\sum\sum.exe
   ```

   ```html
   Usage :
   <o-file(compiled c file)>
     <num-1>
       <num2>
         <num3> <exe-file-name></exe-file-name></num3></num2></num-1
   ></o-file(compiled>
   ```

## On Error related to exe file

Try these :

1. Delete following folders/files from repo

   - dist
   - build
   - \_\_pycache\_\_
   - sum.spec

2. Run `pip install pyinstaller` in command prompt

3. On successfull completion of above command. Run following command :
   `pyinstaller sum.py`

4. On successfull compilation, follow the steps mentioned above.

## Info

- C program : `exec.c`
- Python program : `sum.py`
- Generated exe file : `sum.exe` => (Path of the exe file : .\dist\sum\sum.exe)

Thank You :smile:
