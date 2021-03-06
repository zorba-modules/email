/*
 * Copyright 2006-2008 The FLWOR Foundation.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ZORBA_EMAILMODULE_IMAP_H
#define ZORBA_EMAILMODULE_IMAP_H

#include <zorba/zorba_string.h>

#include "imap_function.h"


namespace zorba { 
  
  class ItemFactory;
  class SerializationItemProvider;

  namespace emailmodule {

//*****************************************************************************

  class StatusFunction : public ImapFunction
  {
    public:
      StatusFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "status-impl"; }
  
      virtual ItemSequence_t 
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class CreateFunction : public ImapFunction
  {
    public:
      CreateFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "create-impl"; }
  
      virtual ItemSequence_t 
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class DeleteFunction : public ImapFunction
  {
    public:
      DeleteFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "delete-impl"; }
  
      virtual ItemSequence_t 
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class RenameFunction : public ImapFunction
  {
    public:
      RenameFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "rename-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class ListFunction : public ImapFunction
  {
    public:
      ListFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "list-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class SubscribeFunction : public ImapFunction
  {
    public:
      SubscribeFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "subscribe-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class UnsubscribeFunction : public ImapFunction
  {
    public:
      UnsubscribeFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "unsubscribe-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class ExpungeFunction : public ImapFunction
  {
    public:
      ExpungeFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "expunge-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class SearchFunction : public ImapFunction
  {
    public:
      SearchFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "search-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class CopyFunction : public ImapFunction
  {
    public:
      CopyFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "copy-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class FetchEnvelopeFunction : public ImapFunction
  {
    public:
      FetchEnvelopeFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "fetch-envelope-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  
  
  };

//*****************************************************************************

  class FetchFlagsFunction : public ImapFunction
  {
    public:
      FetchFlagsFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "fetch-flags-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;


  };

//*****************************************************************************

  class SetFlagsFunction : public ImapFunction
  {
    public:
      SetFlagsFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "set-flags-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;

      static void 
      getFlagsVector(const ExternalFunction::Arguments_t& aArgs, std::vector<int>& aFlags);
  };

//*****************************************************************************

  class FetchSubjectFunction : public ImapFunction
  {
    public:
      FetchSubjectFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "fetch-subject-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class FetchFromFunction: public ImapFunction
  {
    public:
      FetchFromFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "fetch-from-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class FetchUidFunction: public ImapFunction
  {
    public:
      FetchUidFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "fetch-uid-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class FetchMessageSequenceNumberFunction: public ImapFunction
  {
    public:
      FetchMessageSequenceNumberFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "fetch-message-sequence-number-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

//*****************************************************************************

  class FetchMessageFunction : public ImapFunction
  {
    public:
      FetchMessageFunction(const ImapModule* aModule);

      virtual String
      getLocalName() const { return "fetch-message-impl"; }

      virtual ItemSequence_t
      evaluate(const ExternalFunction::Arguments_t& args,
               const StaticContext* aSctxCtx,
               const DynamicContext* aDynCtx) const;
  };

  
} /* namespace emailmodule */
} /* namespace zorba */

#endif /* ZORBA_EMAILMODULE_FILE_H */
