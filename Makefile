DEST ?= build

compile:
	mkdir -p $(DEST)
	g++ -o $(DEST)/main main.cpp

run:
	./$(DEST)/main

clean:
	rm -rf $(DEST)

run_only_long_no_repeats:
	./$(DEST)/main  --add --delete --verbose --create all --file tmp

run_only_short_no_repeats:
	./$(DEST)/main  -a -d -v -c all -f tmp

run_mixed_w_repeats:
	./$(DEST)/main -a --add -d --delete -d -d -d --verbose --create all -f tmp --file tmp
