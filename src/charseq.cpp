/*--------------------------------------------------------------------------
    DO NOT ALTER OR REMOVE COPYRIGHT NOTICES OR THIS FILE HEADER.
    
    File: util.cpp
    Version: 2.0.0
    Copyright: (C) 2012 by Enzo Roberto Verlato
    Contact: enzover@ig.com.br
    All rights reserved.
    
----------------------------------------------------------------------------
    This file is part of the util library.
    
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

#include <sstream>

namespace util {
    
    using std::istringstream;
    
    void replaceAll( string &source, const string &find, const string &replace ) {
        while ( source.find( find ) != string::npos ) {
            source.replace( source.find( find ), find.length(), replace );
        }
    }
    
    const vector<string> split( string text, const string &delimiter ) {
        vector<string> strArray;
        replaceAll( text, delimiter, "|" );
        string buffer;
        istringstream str( text );
        while ( getline( str, buffer, '|' ) ) {
            strArray.push_back( buffer );
        }
        return strArray;
    }
    
    void trim( string &text ) {
        static const char whitespace[] = " \n\t\v\r\f ";
        text.erase( 0, text.find_first_not_of( whitespace ) );
        text.erase( text.find_last_not_of( whitespace ) + 1U );
    }
    
    const vector<string> wrapText( string text, const size_t &length ) {
        vector<string> lines;
        string::size_type spacePos;
        
        while ( !text.empty() ) {
            spacePos = text.rfind( ' ', length );
            
            if ( spacePos == string::npos || text.size() <= length ) {
                lines.push_back( text );
                break;
            } else {
                lines.push_back( text.substr( 0, spacePos + 1 ) );
                text.erase( 0, spacePos + 1 );
            }
        }
        return lines;
    }
}
