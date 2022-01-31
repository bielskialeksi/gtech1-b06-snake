uml/classes_jeremy.png: jeremy/*.hpp
	./uml/mk_uml.sh uml/classes_jeremy.png jeremy/*.hpp

uml/classes_aleksi.png: aleksi/*.hpp
	./uml/mk_uml.sh uml/classes_aleksi.png aleksi/*.hpp

uml/classes_test.png: test/*.hpp
	./uml/mk_uml.sh uml/classes_test.png test/*.hpp

nblines:
	@wc -l *.h *.[ch]pp
