all: library

#######################################
############# Directories #############
#######################################
BIN        = bin
SRC        = src
INCLUDE    = include/sqlparser
SRCPARSER  = src/parser

INSTALL     = /usr/local

######################################
############ Compile Mode ############
######################################
# Set compile mode to -g or -O3.
# Debug mode: make mode=debug

mode ?= release
MODE_LOG = ""
OPT_FLAG =
ifeq ($(mode), debug)
	OPT_FLAG = -g
	MODE_LOG = "Building in \033[1;31mdebug\033[0m mode"
else
	OPT_FLAG = -O3
	MODE_LOG = "Building in \033[0;32mrelease\033[0m mode ('make mode=debug' for debug mode)"
endif

GMAKE = make mode=$(mode)

BM_BUILD  = $(BIN)/benchmark
BM_CFLAGS = -std=c++17 -Wall -I./antlr-runtime/ -I./mysql/ -L./
BM_PATH   = benchmark
BM_CPP    = $(shell find . -name '*.cpp')
BM_ALL    = $(shell find . -name '*.cpp' -or -name '*.h')

benchmark: $(BM_BUILD)

run_benchmarks: benchmark
	./$(BM_BUILD) --benchmark_counters_tabular=true
	# --benchmark_filter="abc

save_benchmarks: benchmark
	./$(BM_BUILD) --benchmark_format=csv > benchmarks.csv

$(BM_BUILD): $(BM_ALL) $(LIB_BUILD)
	@mkdir -p $(BIN)/
	$(CXX) $(BM_CFLAGS) $(BM_CPP) -o $(BM_BUILD) -lbenchmark -lpthread -lstdc++fs
