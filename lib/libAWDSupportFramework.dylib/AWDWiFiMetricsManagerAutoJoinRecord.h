/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerAutoJoinRecord : PBCodable <NSCopying> {
    unsigned int  _bandExclusionReason;
    unsigned int  _bandScanCount24;
    unsigned int  _bandScanCount5;
    unsigned long long  _beganTimestamp;
    unsigned int  _ccaBitmap;
    unsigned long long  _endedTimestamp;
    unsigned long long  _enteredKnownNetworkGeotagLocationTimeStamp;
    struct { 
        unsigned int beganTimestamp : 1; 
        unsigned int endedTimestamp : 1; 
        unsigned int enteredKnownNetworkGeotagLocationTimeStamp : 1; 
        unsigned int timestamp : 1; 
        unsigned int wakeTimestamp : 1; 
        unsigned int bandExclusionReason : 1; 
        unsigned int bandScanCount24 : 1; 
        unsigned int bandScanCount5 : 1; 
        unsigned int ccaBitmap : 1; 
        unsigned int knownNetworksFoundInScans : 1; 
        unsigned int lastScanError : 1; 
        unsigned int lastScanType : 1; 
        unsigned int nwExclusionCount : 1; 
        unsigned int resetReason : 1; 
        unsigned int resetTypes : 1; 
        unsigned int retryIndex : 1; 
        unsigned int rssiBitmap : 1; 
        unsigned int scanResultFound : 1; 
        unsigned int scanTypes : 1; 
        unsigned int state : 1; 
    }  _has;
    unsigned int  _knownNetworksFoundInScans;
    unsigned int  _lastScanError;
    unsigned int  _lastScanType;
    NSMutableArray * _networksExcludedFromAJDueToThresholds;
    unsigned int  _nwExclusionCount;
    unsigned int  _resetReason;
    unsigned int  _resetTypes;
    unsigned int  _retryIndex;
    unsigned int  _rssiBitmap;
    unsigned int  _scanResultFound;
    unsigned int  _scanTypes;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _scannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
    unsigned int  _state;
    unsigned long long  _timestamp;
    unsigned long long  _wakeTimestamp;
}

@property (nonatomic) unsigned int bandExclusionReason;
@property (nonatomic) unsigned int bandScanCount24;
@property (nonatomic) unsigned int bandScanCount5;
@property (nonatomic) unsigned long long beganTimestamp;
@property (nonatomic) unsigned int ccaBitmap;
@property (nonatomic) unsigned long long endedTimestamp;
@property (nonatomic) unsigned long long enteredKnownNetworkGeotagLocationTimeStamp;
@property (nonatomic) bool hasBandExclusionReason;
@property (nonatomic) bool hasBandScanCount24;
@property (nonatomic) bool hasBandScanCount5;
@property (nonatomic) bool hasBeganTimestamp;
@property (nonatomic) bool hasCcaBitmap;
@property (nonatomic) bool hasEndedTimestamp;
@property (nonatomic) bool hasEnteredKnownNetworkGeotagLocationTimeStamp;
@property (nonatomic) bool hasKnownNetworksFoundInScans;
@property (nonatomic) bool hasLastScanError;
@property (nonatomic) bool hasLastScanType;
@property (nonatomic) bool hasNwExclusionCount;
@property (nonatomic) bool hasResetReason;
@property (nonatomic) bool hasResetTypes;
@property (nonatomic) bool hasRetryIndex;
@property (nonatomic) bool hasRssiBitmap;
@property (nonatomic) bool hasScanResultFound;
@property (nonatomic) bool hasScanTypes;
@property (nonatomic) bool hasState;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasWakeTimestamp;
@property (nonatomic) unsigned int knownNetworksFoundInScans;
@property (nonatomic) unsigned int lastScanError;
@property (nonatomic) unsigned int lastScanType;
@property (nonatomic, retain) NSMutableArray *networksExcludedFromAJDueToThresholds;
@property (nonatomic) unsigned int nwExclusionCount;
@property (nonatomic) unsigned int resetReason;
@property (nonatomic) unsigned int resetTypes;
@property (nonatomic) unsigned int retryIndex;
@property (nonatomic) unsigned int rssiBitmap;
@property (nonatomic) unsigned int scanResultFound;
@property (nonatomic) unsigned int scanTypes;
@property (nonatomic, readonly) unsigned int*scannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
@property (nonatomic, readonly) unsigned long long scannedNetworksExcludedFromAJDueToBlacklistReasonCountsCount;
@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long wakeTimestamp;

+ (Class)networksExcludedFromAJDueToThresholdsType;

- (void)addNetworksExcludedFromAJDueToThresholds:(id)arg1;
- (void)addScannedNetworksExcludedFromAJDueToBlacklistReasonCounts:(unsigned int)arg1;
- (unsigned int)bandExclusionReason;
- (unsigned int)bandScanCount24;
- (unsigned int)bandScanCount5;
- (unsigned long long)beganTimestamp;
- (unsigned int)ccaBitmap;
- (void)clearNetworksExcludedFromAJDueToThresholds;
- (void)clearScannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)endedTimestamp;
- (unsigned long long)enteredKnownNetworkGeotagLocationTimeStamp;
- (bool)hasBandExclusionReason;
- (bool)hasBandScanCount24;
- (bool)hasBandScanCount5;
- (bool)hasBeganTimestamp;
- (bool)hasCcaBitmap;
- (bool)hasEndedTimestamp;
- (bool)hasEnteredKnownNetworkGeotagLocationTimeStamp;
- (bool)hasKnownNetworksFoundInScans;
- (bool)hasLastScanError;
- (bool)hasLastScanType;
- (bool)hasNwExclusionCount;
- (bool)hasResetReason;
- (bool)hasResetTypes;
- (bool)hasRetryIndex;
- (bool)hasRssiBitmap;
- (bool)hasScanResultFound;
- (bool)hasScanTypes;
- (bool)hasState;
- (bool)hasTimestamp;
- (bool)hasWakeTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)knownNetworksFoundInScans;
- (unsigned int)lastScanError;
- (unsigned int)lastScanType;
- (void)mergeFrom:(id)arg1;
- (id)networksExcludedFromAJDueToThresholds;
- (id)networksExcludedFromAJDueToThresholdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)networksExcludedFromAJDueToThresholdsCount;
- (unsigned int)nwExclusionCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)resetReason;
- (unsigned int)resetTypes;
- (unsigned int)retryIndex;
- (unsigned int)rssiBitmap;
- (unsigned int)scanResultFound;
- (unsigned int)scanTypes;
- (unsigned int*)scannedNetworksExcludedFromAJDueToBlacklistReasonCounts;
- (unsigned int)scannedNetworksExcludedFromAJDueToBlacklistReasonCountsAtIndex:(unsigned long long)arg1;
- (unsigned long long)scannedNetworksExcludedFromAJDueToBlacklistReasonCountsCount;
- (void)setBandExclusionReason:(unsigned int)arg1;
- (void)setBandScanCount24:(unsigned int)arg1;
- (void)setBandScanCount5:(unsigned int)arg1;
- (void)setBeganTimestamp:(unsigned long long)arg1;
- (void)setCcaBitmap:(unsigned int)arg1;
- (void)setEndedTimestamp:(unsigned long long)arg1;
- (void)setEnteredKnownNetworkGeotagLocationTimeStamp:(unsigned long long)arg1;
- (void)setHasBandExclusionReason:(bool)arg1;
- (void)setHasBandScanCount24:(bool)arg1;
- (void)setHasBandScanCount5:(bool)arg1;
- (void)setHasBeganTimestamp:(bool)arg1;
- (void)setHasCcaBitmap:(bool)arg1;
- (void)setHasEndedTimestamp:(bool)arg1;
- (void)setHasEnteredKnownNetworkGeotagLocationTimeStamp:(bool)arg1;
- (void)setHasKnownNetworksFoundInScans:(bool)arg1;
- (void)setHasLastScanError:(bool)arg1;
- (void)setHasLastScanType:(bool)arg1;
- (void)setHasNwExclusionCount:(bool)arg1;
- (void)setHasResetReason:(bool)arg1;
- (void)setHasResetTypes:(bool)arg1;
- (void)setHasRetryIndex:(bool)arg1;
- (void)setHasRssiBitmap:(bool)arg1;
- (void)setHasScanResultFound:(bool)arg1;
- (void)setHasScanTypes:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasWakeTimestamp:(bool)arg1;
- (void)setKnownNetworksFoundInScans:(unsigned int)arg1;
- (void)setLastScanError:(unsigned int)arg1;
- (void)setLastScanType:(unsigned int)arg1;
- (void)setNetworksExcludedFromAJDueToThresholds:(id)arg1;
- (void)setNwExclusionCount:(unsigned int)arg1;
- (void)setResetReason:(unsigned int)arg1;
- (void)setResetTypes:(unsigned int)arg1;
- (void)setRetryIndex:(unsigned int)arg1;
- (void)setRssiBitmap:(unsigned int)arg1;
- (void)setScanResultFound:(unsigned int)arg1;
- (void)setScanTypes:(unsigned int)arg1;
- (void)setScannedNetworksExcludedFromAJDueToBlacklistReasonCounts:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setState:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setWakeTimestamp:(unsigned long long)arg1;
- (unsigned int)state;
- (unsigned long long)timestamp;
- (unsigned long long)wakeTimestamp;
- (void)writeTo:(id)arg1;

@end
