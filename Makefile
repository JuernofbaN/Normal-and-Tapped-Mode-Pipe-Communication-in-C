all: isp consumer producer
isp: isp.c
	gcc -o isp isp.c
consumer: consumer.c
	gcc -o consumer consumer.c
producer: producer.c
	gcc -o producer producer.c
clean:
	rm isp consumer producer
