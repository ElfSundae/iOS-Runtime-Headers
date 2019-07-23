/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerAwdlUsage : PBCodable <NSCopying> {
    unsigned int  _advertiseAddFilteredCount;
    unsigned int  _advertiseAddTotalCount;
    unsigned int  _advertiseDeleteFilteredCount;
    unsigned int  _advertiseDeleteTotalCount;
    unsigned int  _appRxBytes;
    unsigned int  _appTxBytes;
    unsigned int  _browseAddFilteredCount;
    unsigned int  _browseAddTotalCount;
    unsigned int  _browseDeleteFilteredCount;
    unsigned int  _browseDeleteTotalCount;
    unsigned int  _cachedPeersDifferentInfra;
    unsigned int  _cachedPeersNotAssociated;
    unsigned int  _cachedPeersOn24G;
    unsigned int  _cachedPeersOn5G;
    unsigned int  _cachedPeersOnDFS;
    unsigned int  _cachedPeersSameInfra;
    unsigned int  _dfspAirplayConnected;
    unsigned int  _dfspAirplayFailed;
    unsigned int  _dfspCSAReceivedFromAP;
    unsigned int  _dfspCSAReceivedFromPeer;
    unsigned int  _dfspResume;
    unsigned int  _dfspSuspect;
    unsigned int  _flags;
    struct { 
        unsigned int noServiceIdleTime : 1; 
        unsigned int syncChangesCount : 1; 
        unsigned int timestamp : 1; 
        unsigned int advertiseAddFilteredCount : 1; 
        unsigned int advertiseAddTotalCount : 1; 
        unsigned int advertiseDeleteFilteredCount : 1; 
        unsigned int advertiseDeleteTotalCount : 1; 
        unsigned int appRxBytes : 1; 
        unsigned int appTxBytes : 1; 
        unsigned int browseAddFilteredCount : 1; 
        unsigned int browseAddTotalCount : 1; 
        unsigned int browseDeleteFilteredCount : 1; 
        unsigned int browseDeleteTotalCount : 1; 
        unsigned int cachedPeersDifferentInfra : 1; 
        unsigned int cachedPeersNotAssociated : 1; 
        unsigned int cachedPeersOn24G : 1; 
        unsigned int cachedPeersOn5G : 1; 
        unsigned int cachedPeersOnDFS : 1; 
        unsigned int cachedPeersSameInfra : 1; 
        unsigned int dfspAirplayConnected : 1; 
        unsigned int dfspAirplayFailed : 1; 
        unsigned int dfspCSAReceivedFromAP : 1; 
        unsigned int dfspCSAReceivedFromPeer : 1; 
        unsigned int dfspResume : 1; 
        unsigned int dfspSuspect : 1; 
        unsigned int flags : 1; 
        unsigned int ifPacketFailures : 1; 
        unsigned int ifRxBytes : 1; 
        unsigned int ifTxBytes : 1; 
        unsigned int numAirplaySessions : 1; 
        unsigned int numDynSdbAirplayAllowed : 1; 
        unsigned int numDynSdbEntrySuccess : 1; 
        unsigned int numDynSdbExitDueToRate : 1; 
        unsigned int numDynSdbReEntrySuccess : 1; 
        unsigned int numOfCachedPeers : 1; 
        unsigned int numOfPeers : 1; 
        unsigned int peerInfraChannel : 1; 
        unsigned int periodInMinutes : 1; 
        unsigned int selfInfraChannel : 1; 
    }  _has;
    NSMutableArray * _hopCountHistograms;
    unsigned int  _ifPacketFailures;
    unsigned int  _ifRxBytes;
    unsigned int  _ifTxBytes;
    unsigned long long  _noServiceIdleTime;
    unsigned int  _numAirplaySessions;
    unsigned int  _numDynSdbAirplayAllowed;
    unsigned int  _numDynSdbEntrySuccess;
    unsigned int  _numDynSdbExitDueToRate;
    unsigned int  _numDynSdbReEntrySuccess;
    unsigned int  _numOfCachedPeers;
    unsigned int  _numOfPeers;
    NSMutableArray * _parentRssiHistograms;
    unsigned int  _peerInfraChannel;
    unsigned int  _periodInMinutes;
    unsigned int  _selfInfraChannel;
    NSMutableArray * _services;
    NSMutableArray * _states;
    unsigned long long  _syncChangesCount;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int advertiseAddFilteredCount;
@property (nonatomic) unsigned int advertiseAddTotalCount;
@property (nonatomic) unsigned int advertiseDeleteFilteredCount;
@property (nonatomic) unsigned int advertiseDeleteTotalCount;
@property (nonatomic) unsigned int appRxBytes;
@property (nonatomic) unsigned int appTxBytes;
@property (nonatomic) unsigned int browseAddFilteredCount;
@property (nonatomic) unsigned int browseAddTotalCount;
@property (nonatomic) unsigned int browseDeleteFilteredCount;
@property (nonatomic) unsigned int browseDeleteTotalCount;
@property (nonatomic) unsigned int cachedPeersDifferentInfra;
@property (nonatomic) unsigned int cachedPeersNotAssociated;
@property (nonatomic) unsigned int cachedPeersOn24G;
@property (nonatomic) unsigned int cachedPeersOn5G;
@property (nonatomic) unsigned int cachedPeersOnDFS;
@property (nonatomic) unsigned int cachedPeersSameInfra;
@property (nonatomic) unsigned int dfspAirplayConnected;
@property (nonatomic) unsigned int dfspAirplayFailed;
@property (nonatomic) unsigned int dfspCSAReceivedFromAP;
@property (nonatomic) unsigned int dfspCSAReceivedFromPeer;
@property (nonatomic) unsigned int dfspResume;
@property (nonatomic) unsigned int dfspSuspect;
@property (nonatomic) unsigned int flags;
@property (nonatomic) bool hasAdvertiseAddFilteredCount;
@property (nonatomic) bool hasAdvertiseAddTotalCount;
@property (nonatomic) bool hasAdvertiseDeleteFilteredCount;
@property (nonatomic) bool hasAdvertiseDeleteTotalCount;
@property (nonatomic) bool hasAppRxBytes;
@property (nonatomic) bool hasAppTxBytes;
@property (nonatomic) bool hasBrowseAddFilteredCount;
@property (nonatomic) bool hasBrowseAddTotalCount;
@property (nonatomic) bool hasBrowseDeleteFilteredCount;
@property (nonatomic) bool hasBrowseDeleteTotalCount;
@property (nonatomic) bool hasCachedPeersDifferentInfra;
@property (nonatomic) bool hasCachedPeersNotAssociated;
@property (nonatomic) bool hasCachedPeersOn24G;
@property (nonatomic) bool hasCachedPeersOn5G;
@property (nonatomic) bool hasCachedPeersOnDFS;
@property (nonatomic) bool hasCachedPeersSameInfra;
@property (nonatomic) bool hasDfspAirplayConnected;
@property (nonatomic) bool hasDfspAirplayFailed;
@property (nonatomic) bool hasDfspCSAReceivedFromAP;
@property (nonatomic) bool hasDfspCSAReceivedFromPeer;
@property (nonatomic) bool hasDfspResume;
@property (nonatomic) bool hasDfspSuspect;
@property (nonatomic) bool hasFlags;
@property (nonatomic) bool hasIfPacketFailures;
@property (nonatomic) bool hasIfRxBytes;
@property (nonatomic) bool hasIfTxBytes;
@property (nonatomic) bool hasNoServiceIdleTime;
@property (nonatomic) bool hasNumAirplaySessions;
@property (nonatomic) bool hasNumDynSdbAirplayAllowed;
@property (nonatomic) bool hasNumDynSdbEntrySuccess;
@property (nonatomic) bool hasNumDynSdbExitDueToRate;
@property (nonatomic) bool hasNumDynSdbReEntrySuccess;
@property (nonatomic) bool hasNumOfCachedPeers;
@property (nonatomic) bool hasNumOfPeers;
@property (nonatomic) bool hasPeerInfraChannel;
@property (nonatomic) bool hasPeriodInMinutes;
@property (nonatomic) bool hasSelfInfraChannel;
@property (nonatomic) bool hasSyncChangesCount;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *hopCountHistograms;
@property (nonatomic) unsigned int ifPacketFailures;
@property (nonatomic) unsigned int ifRxBytes;
@property (nonatomic) unsigned int ifTxBytes;
@property (nonatomic) unsigned long long noServiceIdleTime;
@property (nonatomic) unsigned int numAirplaySessions;
@property (nonatomic) unsigned int numDynSdbAirplayAllowed;
@property (nonatomic) unsigned int numDynSdbEntrySuccess;
@property (nonatomic) unsigned int numDynSdbExitDueToRate;
@property (nonatomic) unsigned int numDynSdbReEntrySuccess;
@property (nonatomic) unsigned int numOfCachedPeers;
@property (nonatomic) unsigned int numOfPeers;
@property (nonatomic, retain) NSMutableArray *parentRssiHistograms;
@property (nonatomic) unsigned int peerInfraChannel;
@property (nonatomic) unsigned int periodInMinutes;
@property (nonatomic) unsigned int selfInfraChannel;
@property (nonatomic, retain) NSMutableArray *services;
@property (nonatomic, retain) NSMutableArray *states;
@property (nonatomic) unsigned long long syncChangesCount;
@property (nonatomic) unsigned long long timestamp;

+ (Class)hopCountHistogramType;
+ (Class)parentRssiHistogramType;
+ (Class)servicesType;
+ (Class)statesType;

- (void)addHopCountHistogram:(id)arg1;
- (void)addParentRssiHistogram:(id)arg1;
- (void)addServices:(id)arg1;
- (void)addStates:(id)arg1;
- (unsigned int)advertiseAddFilteredCount;
- (unsigned int)advertiseAddTotalCount;
- (unsigned int)advertiseDeleteFilteredCount;
- (unsigned int)advertiseDeleteTotalCount;
- (unsigned int)appRxBytes;
- (unsigned int)appTxBytes;
- (unsigned int)browseAddFilteredCount;
- (unsigned int)browseAddTotalCount;
- (unsigned int)browseDeleteFilteredCount;
- (unsigned int)browseDeleteTotalCount;
- (unsigned int)cachedPeersDifferentInfra;
- (unsigned int)cachedPeersNotAssociated;
- (unsigned int)cachedPeersOn24G;
- (unsigned int)cachedPeersOn5G;
- (unsigned int)cachedPeersOnDFS;
- (unsigned int)cachedPeersSameInfra;
- (void)clearHopCountHistograms;
- (void)clearParentRssiHistograms;
- (void)clearServices;
- (void)clearStates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)dfspAirplayConnected;
- (unsigned int)dfspAirplayFailed;
- (unsigned int)dfspCSAReceivedFromAP;
- (unsigned int)dfspCSAReceivedFromPeer;
- (unsigned int)dfspResume;
- (unsigned int)dfspSuspect;
- (id)dictionaryRepresentation;
- (unsigned int)flags;
- (bool)hasAdvertiseAddFilteredCount;
- (bool)hasAdvertiseAddTotalCount;
- (bool)hasAdvertiseDeleteFilteredCount;
- (bool)hasAdvertiseDeleteTotalCount;
- (bool)hasAppRxBytes;
- (bool)hasAppTxBytes;
- (bool)hasBrowseAddFilteredCount;
- (bool)hasBrowseAddTotalCount;
- (bool)hasBrowseDeleteFilteredCount;
- (bool)hasBrowseDeleteTotalCount;
- (bool)hasCachedPeersDifferentInfra;
- (bool)hasCachedPeersNotAssociated;
- (bool)hasCachedPeersOn24G;
- (bool)hasCachedPeersOn5G;
- (bool)hasCachedPeersOnDFS;
- (bool)hasCachedPeersSameInfra;
- (bool)hasDfspAirplayConnected;
- (bool)hasDfspAirplayFailed;
- (bool)hasDfspCSAReceivedFromAP;
- (bool)hasDfspCSAReceivedFromPeer;
- (bool)hasDfspResume;
- (bool)hasDfspSuspect;
- (bool)hasFlags;
- (bool)hasIfPacketFailures;
- (bool)hasIfRxBytes;
- (bool)hasIfTxBytes;
- (bool)hasNoServiceIdleTime;
- (bool)hasNumAirplaySessions;
- (bool)hasNumDynSdbAirplayAllowed;
- (bool)hasNumDynSdbEntrySuccess;
- (bool)hasNumDynSdbExitDueToRate;
- (bool)hasNumDynSdbReEntrySuccess;
- (bool)hasNumOfCachedPeers;
- (bool)hasNumOfPeers;
- (bool)hasPeerInfraChannel;
- (bool)hasPeriodInMinutes;
- (bool)hasSelfInfraChannel;
- (bool)hasSyncChangesCount;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)hopCountHistogramAtIndex:(unsigned long long)arg1;
- (id)hopCountHistograms;
- (unsigned long long)hopCountHistogramsCount;
- (unsigned int)ifPacketFailures;
- (unsigned int)ifRxBytes;
- (unsigned int)ifTxBytes;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)noServiceIdleTime;
- (unsigned int)numAirplaySessions;
- (unsigned int)numDynSdbAirplayAllowed;
- (unsigned int)numDynSdbEntrySuccess;
- (unsigned int)numDynSdbExitDueToRate;
- (unsigned int)numDynSdbReEntrySuccess;
- (unsigned int)numOfCachedPeers;
- (unsigned int)numOfPeers;
- (id)parentRssiHistogramAtIndex:(unsigned long long)arg1;
- (id)parentRssiHistograms;
- (unsigned long long)parentRssiHistogramsCount;
- (unsigned int)peerInfraChannel;
- (unsigned int)periodInMinutes;
- (bool)readFrom:(id)arg1;
- (unsigned int)selfInfraChannel;
- (id)services;
- (id)servicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)servicesCount;
- (void)setAdvertiseAddFilteredCount:(unsigned int)arg1;
- (void)setAdvertiseAddTotalCount:(unsigned int)arg1;
- (void)setAdvertiseDeleteFilteredCount:(unsigned int)arg1;
- (void)setAdvertiseDeleteTotalCount:(unsigned int)arg1;
- (void)setAppRxBytes:(unsigned int)arg1;
- (void)setAppTxBytes:(unsigned int)arg1;
- (void)setBrowseAddFilteredCount:(unsigned int)arg1;
- (void)setBrowseAddTotalCount:(unsigned int)arg1;
- (void)setBrowseDeleteFilteredCount:(unsigned int)arg1;
- (void)setBrowseDeleteTotalCount:(unsigned int)arg1;
- (void)setCachedPeersDifferentInfra:(unsigned int)arg1;
- (void)setCachedPeersNotAssociated:(unsigned int)arg1;
- (void)setCachedPeersOn24G:(unsigned int)arg1;
- (void)setCachedPeersOn5G:(unsigned int)arg1;
- (void)setCachedPeersOnDFS:(unsigned int)arg1;
- (void)setCachedPeersSameInfra:(unsigned int)arg1;
- (void)setDfspAirplayConnected:(unsigned int)arg1;
- (void)setDfspAirplayFailed:(unsigned int)arg1;
- (void)setDfspCSAReceivedFromAP:(unsigned int)arg1;
- (void)setDfspCSAReceivedFromPeer:(unsigned int)arg1;
- (void)setDfspResume:(unsigned int)arg1;
- (void)setDfspSuspect:(unsigned int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setHasAdvertiseAddFilteredCount:(bool)arg1;
- (void)setHasAdvertiseAddTotalCount:(bool)arg1;
- (void)setHasAdvertiseDeleteFilteredCount:(bool)arg1;
- (void)setHasAdvertiseDeleteTotalCount:(bool)arg1;
- (void)setHasAppRxBytes:(bool)arg1;
- (void)setHasAppTxBytes:(bool)arg1;
- (void)setHasBrowseAddFilteredCount:(bool)arg1;
- (void)setHasBrowseAddTotalCount:(bool)arg1;
- (void)setHasBrowseDeleteFilteredCount:(bool)arg1;
- (void)setHasBrowseDeleteTotalCount:(bool)arg1;
- (void)setHasCachedPeersDifferentInfra:(bool)arg1;
- (void)setHasCachedPeersNotAssociated:(bool)arg1;
- (void)setHasCachedPeersOn24G:(bool)arg1;
- (void)setHasCachedPeersOn5G:(bool)arg1;
- (void)setHasCachedPeersOnDFS:(bool)arg1;
- (void)setHasCachedPeersSameInfra:(bool)arg1;
- (void)setHasDfspAirplayConnected:(bool)arg1;
- (void)setHasDfspAirplayFailed:(bool)arg1;
- (void)setHasDfspCSAReceivedFromAP:(bool)arg1;
- (void)setHasDfspCSAReceivedFromPeer:(bool)arg1;
- (void)setHasDfspResume:(bool)arg1;
- (void)setHasDfspSuspect:(bool)arg1;
- (void)setHasFlags:(bool)arg1;
- (void)setHasIfPacketFailures:(bool)arg1;
- (void)setHasIfRxBytes:(bool)arg1;
- (void)setHasIfTxBytes:(bool)arg1;
- (void)setHasNoServiceIdleTime:(bool)arg1;
- (void)setHasNumAirplaySessions:(bool)arg1;
- (void)setHasNumDynSdbAirplayAllowed:(bool)arg1;
- (void)setHasNumDynSdbEntrySuccess:(bool)arg1;
- (void)setHasNumDynSdbExitDueToRate:(bool)arg1;
- (void)setHasNumDynSdbReEntrySuccess:(bool)arg1;
- (void)setHasNumOfCachedPeers:(bool)arg1;
- (void)setHasNumOfPeers:(bool)arg1;
- (void)setHasPeerInfraChannel:(bool)arg1;
- (void)setHasPeriodInMinutes:(bool)arg1;
- (void)setHasSelfInfraChannel:(bool)arg1;
- (void)setHasSyncChangesCount:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHopCountHistograms:(id)arg1;
- (void)setIfPacketFailures:(unsigned int)arg1;
- (void)setIfRxBytes:(unsigned int)arg1;
- (void)setIfTxBytes:(unsigned int)arg1;
- (void)setNoServiceIdleTime:(unsigned long long)arg1;
- (void)setNumAirplaySessions:(unsigned int)arg1;
- (void)setNumDynSdbAirplayAllowed:(unsigned int)arg1;
- (void)setNumDynSdbEntrySuccess:(unsigned int)arg1;
- (void)setNumDynSdbExitDueToRate:(unsigned int)arg1;
- (void)setNumDynSdbReEntrySuccess:(unsigned int)arg1;
- (void)setNumOfCachedPeers:(unsigned int)arg1;
- (void)setNumOfPeers:(unsigned int)arg1;
- (void)setParentRssiHistograms:(id)arg1;
- (void)setPeerInfraChannel:(unsigned int)arg1;
- (void)setPeriodInMinutes:(unsigned int)arg1;
- (void)setSelfInfraChannel:(unsigned int)arg1;
- (void)setServices:(id)arg1;
- (void)setStates:(id)arg1;
- (void)setSyncChangesCount:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)states;
- (id)statesAtIndex:(unsigned long long)arg1;
- (unsigned long long)statesCount;
- (unsigned long long)syncChangesCount;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
