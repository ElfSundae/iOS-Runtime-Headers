/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOStateTimingFeedbackCollection : PBCodable <NSCopying> {
    double  _durationInOldState;
    struct { 
        unsigned int has_sessionID : 1; 
        unsigned int has_durationInOldState : 1; 
        unsigned int has_sessionRelativeTimestamp : 1; 
    }  _flags;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
    double  _sessionRelativeTimestamp;
    NSMutableArray * _stateTransitions;
}

@property (nonatomic) double durationInOldState;
@property (nonatomic) bool hasDurationInOldState;
@property (nonatomic) bool hasSessionID;
@property (nonatomic) bool hasSessionRelativeTimestamp;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic, retain) NSMutableArray *stateTransitions;

+ (bool)isValid:(id)arg1;
+ (Class)stateTransitionType;

- (void).cxx_destruct;
- (void)addStateTransition:(id)arg1;
- (void)clearStateTransitions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)durationInOldState;
- (bool)hasDurationInOldState;
- (bool)hasSessionID;
- (bool)hasSessionRelativeTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionID;
- (double)sessionRelativeTimestamp;
- (void)setDurationInOldState:(double)arg1;
- (void)setHasDurationInOldState:(bool)arg1;
- (void)setHasSessionID:(bool)arg1;
- (void)setHasSessionRelativeTimestamp:(bool)arg1;
- (void)setSessionID:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSessionRelativeTimestamp:(double)arg1;
- (void)setStateTransitions:(id)arg1;
- (id)stateTransitionAtIndex:(unsigned long long)arg1;
- (id)stateTransitions;
- (unsigned long long)stateTransitionsCount;
- (void)writeTo:(id)arg1;

@end
