 #!/bin/sh
	# Installation script for OSP-plugin for Ubuntu
	# http://stellarium.sourceforge.net/wiki/index.php/Build_Dependencies_(Qt5)

before_reboot(){
	echo "Checking Internet connection ...... "
	wget -q --tries=10 --timeout=20 --spider http://google.com
	while [[ $? -ne 0 ]] 
	do
		wget -q --tries=10 --timeout=20 --spider http://google.com
	done
	printf 'y\n' | sudo apt-get install g++ wget

	cd
	echo '======== Downloading qt for Linux ========'
	MACHINE_TYPE=`uname -m`
	if [ ${MACHINE_TYPE} == 'x86_64' ]; then
		echo "Checking Internet connection ......"
		wget -q --tries=10 --timeout=20 --spider http://google.com
		while [[ $? -ne 0 ]] 
		do
			wget -q --tries=10 --timeout=20 --spider http://google.com
		done
		wget http://download.qt.io/official_releases/qt/5.7/5.7.0/qt-opensource-linux-x64-5.7.0.run 
		echo '======== Installing qt 5.7.0 ========'
		chmod 777 qt-opensource-linux-x64-5.7.0.run
		./qt-opensource-linux-x64-5.7.0.run
		echo "Setting environment variables for qt"
		echo  "export QTPATH=/home/$USER/Qt5.7.0/5.7/gcc_64
			export QTDIR=/home/$USER/Qt5.7.0/5.7/gcc_64
			export QT_SELECT=5
			export PATH=/home/$USER/Qt5.7.0/5.7/gcc_64/bin:${PATH}
			export LD_LIBRARY_PATH=${QTPATH}/lib:${LD_LIBRARY_PATH}">> ~/.bashrc	
		source ~/.bashrc	
		sudo sh -c "echo "/home/$USER/Qt5.7.0/5.7/gcc_64/lib">>/etc/ld.so.conf.d/x86_64-linux-gnu_GL.conf"
		sudo ldconfig
		sudo sh -c "echo "/home/$USER/Qt5.7.0/5.7/gcc_64/bin">/usr/lib/x86_64-linux-gnu/qtchooser/5.conf"
		sudo sh -c "echo "/home/$USER/Qt5.7.0/5.7/gcc_64/lib">>/usr/lib/x86_64-linux-gnu/qtchooser/5.conf"             
	else	
		wget http://download.qt.io/official_releases/qt/5.7/5.7.0/single/qt-everywhere-opensource-src-5.7.0.tar.gz
		gunzip qt-everywhere-opensource-src-5.7.0.tar.gz        # uncompress the archive
		tar xvf qt-everywhere-opensource-src-5.7.0.tar          # unpack it
		echo '========Installing build dependencies for qt========'	
		#sudo apt-get install libxcb-xinerama0-dev 
		echo "Checking Internet connection ...... "
		wget -q --tries=10 --timeout=20 --spider http://google.com
		while [[ $? -ne 0 ]] 
		do
			wget -q --tries=10 --timeout=20 --spider http://google.com
		done
		printf 'y\n' | sudo apt-get install '^libxcb.*-dev' libx11-xcb-dev libglu1-mesa-dev libxrender-dev libxi-dev
		echo '======== Building qt 5.7.0 from source ========'		
		cd qt-everywhere-opensource-src-5.7.0
		printf 'o\nyes\ny\n' | ./configure 
		make && sudo make install
		echo "PATH=/usr/local/Qt-5.7.0/bin:$PATH
		export PATH">> ~/.bashrc
		sudo sh -c "echo "/usr/local/Qt-5.7.0/bin">>/usr/lib/i386-linux-gnu/qt-default/qtchooser/default.conf"             
		sudo sh -c "echo "/usr/local/Qt-5.7.0/lib">>/usr/lib/i386-linux-gnu/qt-default/qtchooser/default.conf"            
		 
	fi	
	echo '======== Installing dependencies ========'
	echo "Checking Internet connection ...... "
	wget -q --tries=10 --timeout=20 --spider http://google.com
	while [[ $? -ne 0 ]] 
	do
		wget -q --tries=10 --timeout=20 --spider http://google.com
	done
	printf 'y\n' | sudo apt-get install build-essential cmake zlib1g-dev libgl1-mesa-dev gcc g++  \
	     qtbase5-dev qtscript5-dev libqt5svg5-dev qttools5-dev-tools qttools5-dev libqt5opengl5-dev qtmultimedia5-dev \
	     libqt5multimedia5-plugins libqt5serialport5 libqt5serialport5-dev qtpositioning5-dev libgps-dev \
	     libqt5positioning5 libqt5positioning5-plugins
	 
	echo "Verifying required version of cmake"
	currentver="$(set `cmake -version`; echo $3)"
	requiredver="3.5.1"
	if [ "$(printf "$requiredver\n$currentver" | sort -V | head -n1)" == "$currentver" ] && [ "$currentver" != "$requiredver" ]; then 
	       printf 'y\n' | sudo apt remove cmake
	       cd
		echo "Checking Internet connection ...... "
		wget -q --tries=10 --timeout=20 --spider http://google.com
		while [[ $? -ne 0 ]] 
		do
			wget -q --tries=10 --timeout=20 --spider http://google.com
		done
	       wget http://www.cmake.org/files/v3.5/cmake-3.5.1.tar.gz
	       tar xzf cmake-3.5.1.tar.gz
	       cd cmake-3.5.1
	       ./configure --prefix=/opt/cmake
	       make && sudo make install
		echo  "export PATH=/opt/cmake/bin:$PATH
		export LD_LIBRARY_PATH=/opt/cmake/bin:$LD_LIBRARY_PATH">> ~/.bashrc
	 fi

	echo '======== Creating Qt-Creator.desktop ========'
	cd ~/.local/share/applications
	txt="[Desktop Entry]
	Version=1.0
	Encoding=UTF-8
	Type=Application
	Name=QtCreator
	Comment=QtCreator
	NoDsiplay=true
	Exec=/home/akanksha/Qt5.7.0/Tools/QtCreator/bin/qtcreator %f
	Icon=/home/akanksha/Qt5.7.0/5.7/Src/qtdoc/doc/images/landing/icon_QtCreator_78x78px.png
	Name[en_US]=Qt-Creator"
	echo $txt >> Qt-Creator.desktop
	echo "text/qtcreator=Qt-Creator.desktop;" >> defaults.list
	echo "[added Associations]
	application/vnd.nokia.qt.qmakeprofile=qtcreator.desktop" >> mimeapps.list
	sudo update-mime-database /usr/share/mime


	echo '======== Updating .bashrc ========'
	echo  "export STELROOT=/home/$USER/stellarium-0.15.2">> ~/.bashrc	

	echo '======== Installing stellarium ========'
	cd
	echo "Checking Internet connection ...... "
	wget -q --tries=10 --timeout=20 --spider http://google.com
	while [[ $? -ne 0 ]] 
	do
		wget -q --tries=10 --timeout=20 --spider http://google.com
	done
	wget http://sourceforge.net/projects/stellarium/files/Stellarium-sources/0.15.2/stellarium-0.15.2.tar.gz
	tar xzf stellarium-0.15.2.tar.gz
	cd ~/stellarium-0.15.2
	mkdir -p builds/unix
	cd builds/unix && sudo rm -r *
	cmake ../.. 
	make && sudo make install

	echo '======== Installing OSP-plugin ========'
	cd ~/stellarium-0.15.2/plugins
	echo "Checking Internet connection ...... "
	wget -q --tries=10 --timeout=20 --spider http://google.com
	while [[ $? -ne 0 ]] 
	do
		wget -q --tries=10 --timeout=20 --spider http://google.com
	done
	printf 'y\n' | sudo apt-get install git
	git clone https://github.com/SudhakarKuma/OSP-plugin 
	cd OSP-plugin/builds/unix && sudo rm -r * 
	cmake ../.. 
	#make && sudo make install	
}

after_reboot(){
	cd ~/stellarium-0.15.2/plugins/OSP-plugin/builds/unix
	make && sudo make install
	echo "OSP-plugin successfully installed. Do you want to launch Stellarium now? [y/n]."
	read input
   	if [[ $input == "Y" || $input == "y" ]]; 
	then 
		echo "After Stellarium is launched, following these steps to launch OSP plugin:\n"
		echo "1. Press Fn + F2.\n"
		echo "2. Goto plugins, click on Open Sky Planetarium plugin.\n"
		echo "3. Check 'load at startup'.\n"
		echo "4. Press CTRL + Q to restart stellarium and launch plugin from the plugins widget."
		echo "Press any key to continue ..."
		read input
		sudo stellarium
	fi

}

if [ -f /var/run/rebooting-for-updates ]; then
    after_reboot
    sudo rm /var/run/rebooting-for-updates
else
    before_reboot
    sudo touch /var/run/rebooting-for-updates
    echo "Restart required, kindly run the script again after reboot completes. Do you want to continue? [Y/n]."
    read input
    if [[ $input == "Y" || $input == "y" ]]; then	
		sudo reboot
    else 
		echo "Kindly restart later and run the script again."
    fi
fi
