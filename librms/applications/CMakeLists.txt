add_executable( rms_extract  rms_extract.c )
add_executable( rms_setname  rms_setname.c )
add_executable( rms_stat     rms_stat.c    )
add_executable( rms_test     rms_test.c    )
add_executable( tag_list     tag_list.c    )


set(program_list rms_extract rms_setname rms_stat rms_test tag_list)
foreach(prog ${program_list})
   target_link_libraries( ${prog} rms ${ECL_LIBRARY} ${UTIL_LIBRARY} )
   if (USE_RUNPATH)
      add_runpath( ${prog} )
   endif()   

   #-----------------------------------------------------------------

   set (destination ${CMAKE_INSTALL_PREFIX}/bin)

   if (INSTALL_ERT)
      install(TARGETS ${prog} DESTINATION ${destination})
      if (INSTALL_GROUP)
         install(CODE "EXECUTE_PROCESS(COMMAND chgrp ${INSTALL_GROUP} ${destination}/${prog})")
         install(CODE "EXECUTE_PROCESS(COMMAND chmod g+w ${destination}/${prog})")
      endif()
   endif()
endforeach()
