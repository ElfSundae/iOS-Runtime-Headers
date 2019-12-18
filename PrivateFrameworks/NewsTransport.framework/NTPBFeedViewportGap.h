/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewportGap : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _activeGroupEmitterIDRefs;
    NSMutableArray * _cursors;
    NTPBFeedRefreshSessionForYouConfig * _forYouConfig;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _groupEmitterIDRefs;
    struct { 
        unsigned int isOffline : 1; 
        unsigned int reachedEnd : 1; 
    }  _has;
    NSString * _identifier;
    bool  _isOffline;
    NTPBFeedViewportEdition * _lastCompletedEdition;
    NTPBDate * _modificationDate;
    NSMutableArray * _pendingGroups;
    bool  _reachedEnd;
    NTPBDate * _refreshDate;
}

@property (nonatomic, readonly) int*activeGroupEmitterIDRefs;
@property (nonatomic, readonly) unsigned long long activeGroupEmitterIDRefsCount;
@property (nonatomic, retain) NSMutableArray *cursors;
@property (nonatomic, retain) NTPBFeedRefreshSessionForYouConfig *forYouConfig;
@property (nonatomic, readonly) int*groupEmitterIDRefs;
@property (nonatomic, readonly) unsigned long long groupEmitterIDRefsCount;
@property (nonatomic, readonly) bool hasForYouConfig;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIsOffline;
@property (nonatomic, readonly) bool hasLastCompletedEdition;
@property (nonatomic, readonly) bool hasModificationDate;
@property (nonatomic) bool hasReachedEnd;
@property (nonatomic, readonly) bool hasRefreshDate;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isOffline;
@property (nonatomic, retain) NTPBFeedViewportEdition *lastCompletedEdition;
@property (nonatomic, retain) NTPBDate *modificationDate;
@property (nonatomic, retain) NSMutableArray *pendingGroups;
@property (nonatomic) bool reachedEnd;
@property (nonatomic, retain) NTPBDate *refreshDate;

+ (Class)cursorsType;
+ (Class)pendingGroupsType;

- (int*)activeGroupEmitterIDRefs;
- (int)activeGroupEmitterIDRefsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeGroupEmitterIDRefsCount;
- (void)addActiveGroupEmitterIDRefs:(int)arg1;
- (void)addCursors:(id)arg1;
- (void)addGroupEmitterIDRef:(int)arg1;
- (void)addPendingGroups:(id)arg1;
- (void)clearActiveGroupEmitterIDRefs;
- (void)clearCursors;
- (void)clearGroupEmitterIDRefs;
- (void)clearPendingGroups;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cursors;
- (id)cursorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)cursorsCount;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)forYouConfig;
- (int)groupEmitterIDRefAtIndex:(unsigned long long)arg1;
- (int*)groupEmitterIDRefs;
- (unsigned long long)groupEmitterIDRefsCount;
- (bool)hasForYouConfig;
- (bool)hasIdentifier;
- (bool)hasIsOffline;
- (bool)hasLastCompletedEdition;
- (bool)hasModificationDate;
- (bool)hasReachedEnd;
- (bool)hasRefreshDate;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isOffline;
- (id)lastCompletedEdition;
- (void)mergeFrom:(id)arg1;
- (id)modificationDate;
- (id)pendingGroups;
- (id)pendingGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pendingGroupsCount;
- (bool)reachedEnd;
- (bool)readFrom:(id)arg1;
- (id)refreshDate;
- (void)setActiveGroupEmitterIDRefs:(int*)arg1 count:(unsigned long long)arg2;
- (void)setCursors:(id)arg1;
- (void)setForYouConfig:(id)arg1;
- (void)setGroupEmitterIDRefs:(int*)arg1 count:(unsigned long long)arg2;
- (void)setHasIsOffline:(bool)arg1;
- (void)setHasReachedEnd:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsOffline:(bool)arg1;
- (void)setLastCompletedEdition:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setPendingGroups:(id)arg1;
- (void)setReachedEnd:(bool)arg1;
- (void)setRefreshDate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
