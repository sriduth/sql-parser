#include "benchmark_utils.h"

#include <fstream>
#include <iostream>

#include "./mysql/MySqlLexer.h"
#include "./mysql/MySqlParser.h"
#include "antlr4-runtime.h"
#include "ConsoleErrorListener.h"


std::string uppercase(const std::string& ref) {
  std::string new_str = "";
  for (auto & c: ref) new_str += toupper(c);
  return new_str;
}

size_t getNumTokens(const std::string& query) {
  std::string new_query = uppercase(query);
  
  antlr4::ANTLRInputStream input(new_query);
  parsers::MySqlLexer lexer(&input);
  antlr4::CommonTokenStream tokens(&lexer);

  return tokens.getNumberOfOnChannelTokens();
}

void BM_TokenizeBenchmark(benchmark::State& st, const std::string& query) {
  std::string new_query = uppercase(query);
  st.counters["num_tokens"] = getNumTokens(new_query);
  st.counters["num_chars"] = query.size();

  antlr4::ANTLRInputStream input(new_query);
  parsers::MySqlLexer lexer(&input);

  
  while (st.KeepRunning()) {
    antlr4::CommonTokenStream tokens(&lexer);;
  }
}

void BM_ParseBenchmark(benchmark::State& st, const std::string& query) {
  std::string new_query = uppercase(query);
  st.counters["num_tokens"] = getNumTokens(new_query);
  st.counters["num_chars"] = query.size();

  while (st.KeepRunning()) {
    antlr4::ANTLRInputStream input(new_query);
    parsers::MySqlLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    parsers::MySqlParser parser(&tokens);
    parser.root();
    if (parser.getNumberOfSyntaxErrors() > 0) {
      st.SkipWithError("Parsing failed!");
    }
  }
}

std::string readFileContents(const std::string& file_path) {
  std::ifstream t(file_path.c_str());
  std::string text((std::istreambuf_iterator<char>(t)),
                   std::istreambuf_iterator<char>());
  uppercase(text);

  return text;
}
