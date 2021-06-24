CC := g++ -std=c++17

all : Project

Project : date.o initializer.o order.o orderhandler.o orderlineservice.o payment.o service.o servicecatalog.o servicedescription.o task.o taskhandler.o user.o dao.o
		$(CC) date.o initializer.o order.o orderhandler.o orderlineservice.o payment.o service.o servicecatalog.o servicedescription.o task.o taskhandler.o user.o dao.o -o Project

date.o : date.cpp date.hpp
	$(CC) -c date.cpp

initializer.o : initializer.cpp initializer.hpp user.hpp orderhandler.hpp taskhandler.hpp servicecatalog.hpp servicedescription.hpp
	$(CC) -c initializer.cpp

order.o : order.cpp order.hpp date.hpp orderlineservice.hpp payment.hpp
	$(CC) -c order.cpp

orderhandler.o : orderhandler.cpp orderhandler.hpp order.hpp servicecatalog.hpp payment.hpp dao.hpp
	$(CC) -c orderhandler.cpp

orderlineservice.o : orderlineservice.cpp orderlineservice.hpp service.hpp date.hpp
	$(CC) -c orderlineservice.cpp

payment.o : payment.cpp payment.hpp
	$(CC) -c payment.cpp

service.o : service.cpp service.hpp date.hpp taskhandler.hpp
	$(CC) -c service.cpp

servicecatalog.o : servicecatalog.cpp servicecatalog.hpp servicedescription.hpp
	$(CC) -c servicecatalog.cpp

servicedescription.o : servicedescription.cpp servicedescription.hpp
	$(CC) -c servicedescription.cpp

task.o : task.cpp task.hpp
	$(CC) -c task.cpp

taskhandler.o : taskhandler.cpp taskhandler.hpp task.hpp
	$(CC) -c taskhandler.cpp

user.o : user.cpp user.hpp
	$(CC) -c user.cpp

dao.o : dao.cpp dao.hpp
	$(CC) -c dao.cpp

clean:
	rm *.o Network r_link_* w_link_*
