/*
   Copyright (C) 2011  Statoil ASA, Norway. 
    
   The file 'active_node.h' is part of ERT - Ensemble based Reservoir Tool. 
    
   ERT is free software: you can redistribute it and/or modify 
   it under the terms of the GNU General Public License as published by 
   the Free Software Foundation, either version 3 of the License, or 
   (at your option) any later version. 
    
   ERT is distributed in the hope that it will be useful, but WITHOUT ANY 
   WARRANTY; without even the implied warranty of MERCHANTABILITY or 
   FITNESS FOR A PARTICULAR PURPOSE.   
    
   See the GNU General Public License at <http://www.gnu.org/licenses/gpl.html> 
   for more details. 
*/

#ifndef __ACTIVE_NODE_H__
#define __ACTIVE_NODE_H__


typedef struct active_var_struct active_var_type;
typedef struct active_obs_struct active_obs_type;


typedef void (active_config_destructor_ftype) (void *);  /* A destructor for the (node-spesific) object holding inactive/active information. */

#endif
