#include "benchmark_utils.h"

#include <fstream>
#include <iostream>

#include "./mysql/MySqlLexer.h"
#include "./mysql/MySqlParser.h"
#include "antlr4-runtime.h"


size_t getNumTokens(const std::string& query) {
  antlr4::ANTLRInputStream input(query);
  parsers::MySqlLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);

  return tokens.getNumberOfOnChannelTokens();
}

void BM_TokenizeBenchmark(benchmark::State& st, const std::string& query) {
  st.counters["num_tokens"] = getNumTokens(query);
  st.counters["num_chars"] = query.size();

  antlr4::ANTLRInputStream input(query);
  parsers::MySqlLexer lexer(&input);

  
  while (st.KeepRunning()) {
    antlr4::CommonTokenStream tokens(&lexer);
    tokens.getNumberOfOnChannelTokens();
  }
}

void BM_ParseBenchmark(benchmark::State& st, const std::string& query) {
  st.counters["num_tokens"] = getNumTokens(query);
  st.counters["num_chars"] = query.size();

  while (st.KeepRunning()) {
    antlr4::ANTLRInputStream input(query);
    parsers::MySqlLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    parsers::MySqlParser parser(&tokens);
  }
}

std::string readFileContents(const std::string& file_path) {
  std::ifstream t(file_path.c_str());
  std::string text((std::istreambuf_iterator<char>(t)),
                   std::istreambuf_iterator<char>());
  return text;
}
