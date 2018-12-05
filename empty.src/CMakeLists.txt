add_executable (empty
	empty.cpp)

target_link_libraries (empty
	${PLATFORM_LIBS}
)

target_compile_definitions(empty
	PRIVATE
		-DEMPTY_VERSION_MAJOR=${CPACK_PACKAGE_VERSION_MAJOR}
		-DEMPTY_VERSION_MINOR=${CPACK_PACKAGE_VERSION_MINOR})

set_target_properties (empty
	PROPERTIES
		COMPILE_FLAGS
			"-DSOMEPROP=1")

if (NOT APPLE)
	install(TARGETS empty
			RUNTIME DESTINATION bin
			LIBRARY DESTINATION lib
			ARCHIVE DESTINATION lib
	)
endif()
