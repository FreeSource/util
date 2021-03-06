# --------------------------------------------------------------------------
#    DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
#    
#    File: Makefile
#    Version: 1.0.0
#    Copyright: (C) 2012 by Enzo Roberto Verlato
#    Contact: enzover@ig.com.br
#    All rights reserved.
#    
# --------------------------------------------------------------------------
#    This file is part of the CommandLine Class Project
#    
#    This file may be used under the terms of the GNU General Public
#    License version 2.0 as published by the Free Software Foundation
#    and appearing in the file LICENSE.GPL2 included in the packaging of
#    this file.
#    
#    This file is provided "AS IS" in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY OF ANY KIND, INCLUDING THE WARRANTIES OF DESIGN;
#    without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
#    PARTICULAR PURPOSE. See the GNU General Public License for more details.
#    
#    You should have received a copy of the GNU General Public License
#    along with this program; if not, write to the Free Software Foundation,
#    Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
# --------------------------------------------------------------------------

OSTYPE = $(shell gcc -dumpmachine)

ifneq (,$(findstring mingw,$(OSTYPE)))
    OSTYPE = windows
else
    ifneq (,$(findstring linux,$(OSTYPE)))
        OSTYPE = linux
    else
        ifneq (,$(findstring freebsd,$(OSTYPE)))
            OSTYPE = freebsd
        else
            ifneq (,$(findstring pc-solaris,$(OSTYPE)))
                OSTYPE = openindiana
            else
                ifneq (,$(findstring solaris,$(OSTYPE)))
                    OSTYPE = solaris
                else
                    ifneq (,$(findstring darwin,$(OSTYPE)))
                        OSTYPE = macosx
                    else
                        $(error Operating System not found)
                    endif
                endif
            endif
        endif
    endif
endif

BINARY_DIR  = ../build/${OSTYPE}/bin
EXEC = $(BINARY_DIR)/myapp.exe
OUTPUT = result.txt

all :
	@echo Autotest...
	@"$(EXEC)" "C++ is a statically typed, free-form, multi-paradigm, compiled, general-purpose programming language." " " > $(OUTPUT)
	@"$(EXEC)" "C++#-##-##-##-#is#-##-##-##-#a#-#statically#-#typed,#-#free-form,#-#multi-paradigm,#-#compiled,#-#general-purpose#-#programming#-#language." "#-#" >> $(OUTPUT)
	@"$(EXEC)" "C++     is       a     statically      typed,         free-form,      multi-paradigm,    compiled,    general-purpose  programming  language." " " >> $(OUTPUT)
	@"$(EXEC)" "C++||||is||a||statically||typed,||free-form,||multi-paradigm,||compiled,||general-purpose||||programming||language." "||" >> $(OUTPUT)