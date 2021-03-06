/*
 *                         Vortex OpenSplice
 *
 *   This software and documentation are Copyright 2006 to TO_YEAR ADLINK
 *   Technology Limited, its affiliated companies and licensors. All rights
 *   reserved.
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 *
 */
#ifndef _XBE_EXCEPTIONLIST_H
#define _XBE_EXCEPTIONLIST_H

#include "xps_vector.h"

class be_exception;

// an DDSVector of be_Arguments; includes functions for querying the list

class be_ExceptionList: public DDSVector<be_exception*>
{
   public:
      be_ExceptionList()
      {
      }

      be_ExceptionList(const TList<be_exception*>& oldlist)
      {
         TList<be_exception*>::iterator iter;

         for (iter = oldlist.begin(); iter != oldlist.end(); ++iter)
         {
            push_back (*iter);
         }
      }

      be_ExceptionList(const be_ExceptionList& that)
         : DDSVector<be_exception*>(that)
      {
      }
};

#endif // _XBE_ARGLIST_H
