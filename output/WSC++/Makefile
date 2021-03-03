-include config.mk
-include ../config.mk

SRC =  $(subst WSC++/,,$(subst \,/,$(IMPL_FILES)))
			
OBJECTS   = $(addsuffix .o,$(basename $(SRC)))

# The name of the application.
PROGRAM   = ws.exe

#
CPPFLAGS += -I. 
#

#CPPFLAGS += -D SPEED_KMH
#CPPFLAGS += -D SPEED_KNOT
#CPPFLAGS += -D SPEED_BFT

#CPPFLAGS += -D FAHRENHEIT


# Build the executable application file.
$(PROGRAM): $(OBJECTS)
	g++ -o $(PROGRAM) $(OBJECTS)
	
clean:
	rm -f $(OBJECTS) $(PROGRAM)

-include webinar.mk
