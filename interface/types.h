#ifndef Analysis_Utils_types_h
#define Analysis_Utils_types_h 1

// -*- C++ -*-
//
// Package:    Analysis/Utils
// 
/**

 Implementation:
     [Notes on implementation]
*/
//
// Original Author:  Roberval Walsh Bastos Rangel
//         Created:  Mon, 20 Oct 2014 14:24:08 GMT
//
//

// system include files
#include <string>
#include <optional>

// 
// user include files
#include "JetMETCorrections/Modules/interface/JetResolution.h"
#include "CondFormats/JetMETObjects/interface/JetCorrectorParameters.h"
#include "CondFormats/JetMETObjects/interface/JetCorrectionUncertainty.h"
#include "JetMETCorrections/Objects/interface/JetCorrectionsRecord.h"
#include "FWCore/Utilities/interface/InputTag.h"

//
// class declaration
//

namespace analysis {
   namespace utils {
      
      struct TitleIndex {
         std::string title;
         unsigned int index;
      };
      struct TitleAlias {
         std::string title;
         std::string alias;
      };
      
      struct JerESTokens {
         std::string record;
         JME::JetResolution::Token resolutionsToken;
         JME::JetResolutionScaleFactor::Token scaleFactorsToken;
      };
      
      struct JecESTokens {
         std::string record;
         edm::ESGetToken<JetCorrectorParametersCollection, JetCorrectionsRecord> jecToken;
      };

      struct PrefiringTags {
         std::optional<edm::InputTag> nominal;
         std::optional<edm::InputTag> up;
         std::optional<edm::InputTag> down;
      };

   }
}   

#endif  // Analysis_Utils_types_h
