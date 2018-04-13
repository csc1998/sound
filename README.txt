#---------------------------- Sound Level Sensor ------------------------- 
sound level meter project made by Che Sicheng, Fed.2018.

This project uses a Paspberry Pi 3 Mode B a sound sensor. A USB sound card
with microphone and a RJ45 cable are needed as peripheral. The application
runs periodically every second and take record from microphone at a sample
rate of 16000 Hz. The sound is then calculated into 80 pieces of RMS value 
and displayed as a bar chart on terminalscreee. If communication is enable
(conditional complication), the sound will be re-calculated into 8 pieces 
of Fast Level data and sent out to a PHP server program.

List of Contents:
1. Configuration instruction
2. Installation instruction
3. Operating Instructions
4. File manifest
5. Copyright and license
6. Contact informatiomn

----------------------------
1. Configuration instruction
   Software: Putty 
   Hardware: USB Sound Card, RJ45 Cable, Raspberry Pi 3, microphone
---------------------------
2.Installation instruction
   The user should connect the computer screen with HDMI cable.
  
   First, enter some code to default the configuration of the Raspberry
   PI.
   Second, users just need to use Raspberry Pi and RJ45 cable to 
   connect the computer system, and the mirophone and sound card also 
   need to connect the Rasepberry Pi.  
------------------------
3. Operating instruction
   First, the user should finish the connection of computer system and 
   Raspberry.
   
   Second, the user will receive a E-mail which is about the boot IP, and
   use this IP to run Putty.
   
   Third, the user can git clone the "sound" file from GitHub to Putty, 
   and 'make' it and run the "sound.a".
   
   Next, the user can make some sound to the mirophone, and you will 
   get the sound signal on the Putty and receive the "sound.php" on 
   your drive.
   
   Finally, "Ctrl+c" stop the program.
----------------
4. File manifest
   comm.c    comm.h   main.c   makefile  screen.c 
   screen.h  sound.c  sound.h  README.md

----------------
5. Copyright and license
        Copyright (C) <2018>  <Che Sicheng>
        
     This program is free software: you can redistribute it and/or modify
     it under the terms of the GNU General Public License as published by
     the Free Software Foundation, either version 3 of the License, or
     (at your option) any later version.
                        
     This program is distributed in the hope that it will be useful,
     but WITHOUT ANY WARRANTY; without even the implied warranty of
     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
     GNU General Public License for more details.
                                        
     You should have received a copy of the GNU General Public License
     along with this program.  If not, see <https://www.gnu.org/licenses/>. 
------------------
6. Contact information
   E-mail: chesicheng1998@outlook.com
   
   
   
   
	Che Sicheng
	Dept. of Information Technology
	Vaasa University of Applied Sciences
	Woffinitie 30, 65100, VAASA, Finland
	Page  www.cc.puv.fi/~e1700704
	E-mail: chesicheng1998@outlook.com
