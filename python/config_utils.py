import FWCore.ParameterSet.Config as cms

def merge_vpsets(*vpsets):
    result = cms.VPSet()
    for vpset in vpsets:
        result.extend(vpset)
    return result