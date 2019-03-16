add_library (libsample
	sample.cpp
    sample.hpp)

target_compile_definitions(libsample
	PRIVATE
		-DEMPTY_VERSION_MAJOR=${CPACK_PACKAGE_VERSION_MAJOR}
		-DEMPTY_VERSION_MINOR=${CPACK_PACKAGE_VERSION_MINOR})

set_target_properties (libsample
	PROPERTIES
		COMPILE_FLAGS
			"-DSOMEPROP=1")
