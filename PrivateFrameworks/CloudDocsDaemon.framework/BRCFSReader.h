/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSReader : BRCFSSchedulerBase <BRCFSEventsDelegate, BRCFileCoordinationReading, BRCModule> {
    BRCCountedSet *_coordinatedReaders;
    BRCRelativePath *_currentScan;
    BRCMinHeap *_lostHeap;
    NSObject<OS_dispatch_source> *_lostScanDelay;
    NSObject<OS_dispatch_group> *_lostScanGroup;
    NSObject<OS_dispatch_queue> *_lostScanQueue;
    NSObject<OS_dispatch_source> *_lostScanSource;
    BOOL _readerCountReachedMax;
    BOOL _resumed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL isCancelled;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *lostScanGroup;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_attemptSchedulingCoordinatedReadForItem:(id)arg1 path:(id)arg2;
- (BOOL)_canRetryThrottleID:(long long)arg1 zone:(id)arg2;
- (void)_cancelScan;
- (void)_close;
- (void)_continueScan:(id)arg1;
- (void)_createOrRetryThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3 throttle:(id)arg4 hasBeenTried:(BOOL)arg5;
- (void)_delayThrottleID:(long long)arg1 zone:(id)arg2 by:(double)arg3;
- (void)_didResolvedDocumentID:(unsigned int)arg1 fileID:(unsigned long long)arg2 zone:(id)arg3;
- (void)_fseventOnDocument:(id)arg1 flags:(unsigned long)arg2 options:(unsigned int)arg3 item:(id)arg4 lookup:(id)arg5;
- (void)_fseventOnDocument:(id)arg1 flags:(unsigned long)arg2 options:(unsigned int)arg3 item:(id)arg4 lookup:(id)arg5 unresolvedLastPathComponent:(id)arg6;
- (void)_lostScanSchedule;
- (void)_processDeadItem:(id)arg1;
- (void)_processLostItem:(id)arg1;
- (void)_processLostItem:(id)arg1 resolvedToPath:(id)arg2;
- (unsigned int)_readCoordinationCount;
- (void)_resolveDocumentID:(unsigned int)arg1 zone:(id)arg2;
- (void)_retriedThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)_scanDirectory:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_scanDone:(id)arg1 atPath:(id)arg2 lookup:(id)arg3;
- (void)_schedule;
- (void)_scheduleCoordinatedReadForItem:(id)arg1 path:(id)arg2;
- (BOOL)_scheduleOne:(id)arg1;
- (void)_slowScanDirectoryAtPath:(id)arg1;
- (void)_startScan:(id)arg1;
- (void)cancel;
- (void)createThrottleID:(long long)arg1 zone:(id)arg2 state:(int)arg3;
- (void)dealloc;
- (void)didChangeLostScanStatusForContainer:(id)arg1;
- (void)endReadCoordinationInZone:(id)arg1;
- (void)fseventAtPath:(id)arg1 flags:(unsigned long)arg2;
- (void)fseventAtPath:(id)arg1 flags:(unsigned long)arg2 options:(unsigned int)arg3 unresolvedLastPathComponent:(id)arg4;
- (void)fseventAtPath:(id)arg1 flags:(unsigned long)arg2 unresolvedLastPathComponent:(id)arg3;
- (void)fseventInsideSharedEnclosure:(id)arg1 flags:(unsigned long)arg2;
- (void)fseventOnAlias:(id)arg1 flags:(unsigned long)arg2 lookup:(id)arg3;
- (void)fseventOnContainer:(id)arg1 flags:(unsigned long)arg2;
- (void)fseventOnDirectory:(id)arg1 flags:(unsigned long)arg2 lookup:(id)arg3;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned long)arg2 lookup:(id)arg3;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned long)arg2 options:(unsigned int)arg3 lookup:(id)arg4;
- (void)fseventOnDocument:(id)arg1 flags:(unsigned long)arg2 options:(unsigned int)arg3 lookup:(id)arg4 unresolvedLastPathComponent:(id)arg5;
- (void)fseventOnRoot:(id)arg1 flags:(unsigned long)arg2;
- (void)fseventOnSharedRoot:(id)arg1 flags:(unsigned long)arg2;
- (id)initWithAccountSession:(id)arg1;
- (id)itemForCreatedDocumentsDirectory:(id)arg1 container:(id)arg2 path:(id)arg3;
- (id)lookupAndReadItemUnderCoordinationAtURL:(id)arg1;
- (id)lostScanGroup;
- (void)readUnderCoordinationAtURL:(id)arg1;
- (BOOL)readUnderCoordinationWithLookup:(id)arg1;
- (void)reset;
- (void)resume;
- (void)scanContainerDocumentsIfNeeded:(id)arg1;
- (id)serialQueue;
- (BOOL)startReadCoordinationInZone:(id)arg1;
- (void)suspend;
- (BOOL)thumbnailChangedForItem:(id)arg1 relpath:(id)arg2 url:(id)arg3 error:(id*)arg4;
- (void)unscheduleContainerForLostScan:(id)arg1;

@end
