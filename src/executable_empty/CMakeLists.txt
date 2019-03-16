# sources of this exec
add_executable (empty
	empty.cpp)

# some compile definitions
target_compile_definitions(empty
	PRIVATE
		-DEMPTY_VERSION_MAJOR=${CPACK_PACKAGE_VERSION_MAJOR}
		-DEMPTY_VERSION_MINOR=${CPACK_PACKAGE_VERSION_MINOR})

# some properties
set_target_properties (empty
	PROPERTIES
		COMPILE_FLAGS
			"-DSOMEPROP=1")

# link with our library, and default platform libraries
target_link_libraries (empty
	libsample
	${PLATFORM_LIBS}
)

if (NOT APPLE)
	install(TARGETS empty
			RUNTIME DESTINATION bin
			LIBRARY DESTINATION lib
			ARCHIVE DESTINATION lib
	)
endif()
