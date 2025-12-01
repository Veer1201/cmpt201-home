cmake_minimum_required(VERSION 3.22)

project(
<<<<<<< HEAD
  CryptoLab
  VERSION 1.0
  DESCRIPTION "This is for lab12."
  LANGUAGES C)

add_executable(verifier lab11.c)

find_package(OpenSSL REQUIRED)
target_link_libraries(verifier OpenSSL::Crypto)
=======
  NetworkExcersise
  VERSION 1.0
  DESCRIPTION "This is for lab9."
  LANGUAGES C)

add_executable(server server.c)
add_executable(client client.c)
>>>>>>> f8a071b572c267b785ffd211db1ae2297355eb15
