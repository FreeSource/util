/*--------------------------------------------------------------------------
    DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
    
    File: main.cpp
    Version: 1.0.1
    Copyright: (C) 2012 by Enzo Roberto Verlato
    Contact: enzover@ig.com.br
    All rights reserved.
    
----------------------------------------------------------------------------
    This file is part of the CommandLine Class.
    
    This file may be used under the terms of the GNU General Public
    License version 2.0 as published by the Free Software Foundation
    and appearing in the file LICENSE.GPL2 included in the packaging of
    this file.
    
    This file is provided "AS IS" in the hope that it will be useful,
    but WITHOUT ANY WARRANTY OF ANY KIND, INCLUDING THE WARRANTIES OF DESIGN;
    without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
    PARTICULAR PURPOSE. See the GNU General Public License for more details.
    
    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software Foundation,
    Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
--------------------------------------------------------------------------*/

#include <charseq.h>

#include <iostream>

using std::cout;
using std::endl;
using namespace util;

int main( int argc, char *argv[] ) {
    
    cout << "ORIGINAL->" << argv[1] << "<-" << endl;
    cout << "DELIMITER->" << argv[2] << "<-" << endl;
    
    string text = argv[1];
    replaceAll( text, string( argv[2] ) + string( argv[2] ), argv[2] );
    cout << "REMOVE DUPLICATES->" << text << "<-" << endl;
    
    replaceAll( text, argv[2], "|" );
    cout << "CONVERT DELIMITER TO PIPE->" << text << "<-" << endl;
    
    vector<string> stringArray;
    stringArray = split( argv[1], argv[2]);
    cout << "SPLIT:" << endl;
    for ( unsigned position = 0; position < stringArray.size(); ++position ) {
        cout << "->" << stringArray.at( position ) << "<-" << endl;
    }
    cout << "------------------------------------------------------------------" << endl;
}
