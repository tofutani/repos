.phony: orig step1 step2 step3 step4 grep ifnames

orig:
	cp WeatherStation.cc.orig WeatherStation.cc
	cp WeatherStation.h.orig WeatherStation.h
	cp Makefile.orig Makefile 


step1:
	cp Makefile.step1.pv Makefile 

step2:
	cp WeatherStation.cc.pv WeatherStation.cc

step3:
	cp WeatherStation.h.pv WeatherStation.h

step4:
	cp Makefile.step4.pv Makefile 

grep:
	grep "#define" `find -name \*.h -o -name \*.cc`

ifnames:
	ifnames `find -name \*.h -o -name \*.cc`


