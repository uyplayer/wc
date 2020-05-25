# main : wc.o bytes.o chars.o help.o lines.o version.o words.o
# 	gcc *.o -o mywc
# wc.o : wc.c
# 	gcc -c wc.c -o wc.o 
# bytes.o: bytes.c
# 	gcc -c bytes.c -o bytes.o
# chars.o: chars.c
# 	gcc -c chars.c -o chars.o
# help.o: help.c
# 	gcc -c help.c -o help.o
# lines.o: lines.c
# 	gcc -c lines.c -o lines.o
# version.o: version.c
# 	gcc -c version.c -o version.o
# words.o: words.c
# 	gcc -c words.c -o words.o
# .PHONY: clean
# clean:
# 	-rm -rf *.o

# simple edition 

#　　$^    Represents of all dependent files
#　　$@    Represent all target files
#　　$<    Represents the first dependent file


# .PHONY:clean

# main: main.o add.o sub.o
# main.o: main.c  
#    gcc -c $< -o $@
# add.o: add.c
#    gcc -c $^ -o $@  
# sub.o: sub.c
#    gcc -c $^ -o $@

# clean:
#    rm -rf *.o


# .PHONY:clean

# obj=wc.o bytes.o chars.o help.o lines.o version.o words.o

# mywc : $(obj)
# 	gcc *.o -o $@

# clean:
# 	rm -rf *.o

# %.0:%.c
# 	gcc -c $? -o $@



.PHONY:clean

OBJS = wc.o bytes.o chars.o help.o lines.o version.o words.o

mywc : $(OBJS)

%.o : %.c
	gcc -c $^ -o $@

clean:
	-rm -rf $(OBJS)