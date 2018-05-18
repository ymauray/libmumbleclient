dist_doc_DATA = README.md
data_DATA = LICENSE
noinst_LIBRARIES = libmumbleclient.a
libmumbleclient_a_SOURCES = src/contrib/tlse.c src/protocol/Mumble.pb-c.c src/mumbleclient.c

noinst_PROGRAMS = climumble
climumble_SOURCES = src/examples/climumble.c
climumble_LDADD = libmumbleclient.a
