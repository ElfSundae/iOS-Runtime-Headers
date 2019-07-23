/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSpotlightIndexer : NSObject <BRCModule, CSSearchableIndexDelegate> {
    unsigned int  _clientState;
    BRCThrottle * _failureThrottle;
    NSObject<OS_dispatch_source> * _failureTimer;
    unsigned long long  _flushedNotifRank;
    CSSearchableIndex * _index;
    <BRCIndexingArbiter> * _indexingArbiter;
    NSString * _loggedInUserDisplayName;
    unsigned long long  _minNotifRank;
    br_pacer * _pacer;
    NSObject<OS_dispatch_queue> * _queue;
    BOOL  _readyForIndexing;
    BRCAccountSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) <BRCIndexingArbiter> *indexingArbiter;
@property (nonatomic, readonly) BOOL isCancelled;
@property (readonly) Class superclass;

+ (void)dropAllContainersIndexForSession:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_deleteAllItemsAndReindexResumingIndexing:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)_deleteAllRanks;
- (id)_deletedDocIdResultSetWithMinNotifRank:(unsigned long long)arg1 maxNotifRank:(unsigned long long)arg2;
- (void)_failedIndexing;
- (void)_handleResetForRowID:(long long)arg1 notifRank:(unsigned long long)arg2;
- (void)_indexNextBatch;
- (void)_readyForIndexingWithAckedRank:(unsigned long long)arg1;
- (void)_saveStateForNotifRank:(unsigned long long)arg1;
- (void)_scheduleIndexing;
- (void)_scheduleThrottledTask:(id /* block */)arg1 taskName:(const char *)arg2;
- (void)_signalIndexing;
- (void)cancel;
- (void)close;
- (void)dealloc;
- (void)docID:(unsigned long long)arg1 isNoLongerIndexableForNotifRank:(unsigned long long)arg2 itemIsLive:(BOOL)arg3;
- (void)dropIndexForClientZone:(id)arg1;
- (void)garbageCollectSupersededRanks;
- (id)indexingArbiter;
- (id)initWithAccountSession:(id)arg1;
- (BOOL)isCancelled;
- (void)maxNotifRankWasFlushed;
- (void)resume;
- (void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(id /* block */)arg2;
- (void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)setIndexingArbiter:(id)arg1;

@end
