#!/usr/bin/env python3
print('Welcome to CS 150')
print('This script will configure your online VSCode IDE')
print()

#configure cs 150 variables
print()
sname = input('What is your name (first last)? ')
email = input('What is your student email address? ')
sid = input('What is your student ID (like C01234567)? ')
if email.find('@student.cccd.edu') == -1:
    print('Email address:', email, 'is not a valid OCC student email.')
    email = input('What is your student email address? ')
    if email.find('@student.cccd.edu') == -1:
        print('Sorry,', email, 'is still not a valid OCC student email. Quitting.')
        exit()
student = email[0:email.find('@')].lower();
sid = sid.upper()
if not sid.startswith('C'):
    sid = 'C' + sid
print()
print('Configuring VSCode ...')
import os

# create the profile in the current directory
with open(os.path.expanduser('./.profile.txt'), 'w') as myfile:
    print('export CXX="g++"', file=myfile)
    print('export CXXFLAGS="-std=c++17 -Wall -Wextra -Werror -O0 -ggdb3 -fsanitize=signed-integer-overflow -fsanitize=undefined -Wno-unused-parameter -Wno-unused-variable -Wshadow"', file=myfile)
    print('export CS150NAME="' + sname + '"', file=myfile)
    print('export CS150USER=' + student, file=myfile)
    print('export CS150SID=' + sid, file=myfile)

#copy the profile into /home/ubuntu
os.system('cp .profile.txt /home/ubuntu/.profile')

#write .submit.txt into current directory. NOTE hardcoded key CS150S22
with open(os.path.expanduser('./.submit.txt'), 'w') as myfile:
    print('-A CS150S22 --data id=' + student + '&sid=' + sid + '&data=', file=myfile)

#add additional file types to .gitignore
with open(os.path.expanduser('./.gitignore'), 'a') as myfile:
    print('!makefile', file=myfile)
    print('!*.a', file=myfile)
    print('!*.tests', file=myfile)
    print('!*.jpg', file=myfile)
    print('!*.png', file=myfile)

print("Your system has been configured.")


