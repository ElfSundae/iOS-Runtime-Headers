/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCFSWriter : NSObject <BRCModule> {
    bool  _isCancelled;
    NSObject<OS_dispatch_queue> * _serialQueue;
    BRCAccountSession * _session;
    _Atomic int  _suspendCount;
    brc_task_tracker * _taskTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic, readonly) BRCAccountSession *session;
@property (readonly) Class superclass;
@property (nonatomic, readonly) brc_task_tracker *taskTracker;

+ (bool)_isPathMatchIdle:(const struct { id x1; id x2; id x3; id x4; unsigned long long x5; }*)arg1;
+ (bool)_shouldForceApplyForItem:(id)arg1;

- (void).cxx_destruct;
- (void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 jobID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5;
- (id)_generateGentlePhysicalBounceNameForPathMatch:(const struct { id x1; id x2; id x3; id x4; unsigned long long x5; }*)arg1 dirfd:(int)arg2 lastBounceNo:(unsigned long long*)arg3;
- (void)_stageCreationOfDirectory:(id)arg1;
- (void)_stageCreationOfSymlink:(id)arg1;
- (void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(bool)arg3;
- (void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 rank:(long long)arg3 zone:(id)arg4 activity:(id)arg5 hasFinished:(bool*)arg6;
- (bool)applyLocalEditIfNecessaryToURL:(id)arg1 forItem:(id)arg2 forDelete:(bool)arg3 error:(id*)arg4;
- (id)bouncePath:(id)arg1 forItemConflictingWithAnFSRoot:(id)arg2;
- (bool)bouncePathMatch:(const struct { id x1; id x2; id x3; id x4; unsigned long long x5; }*)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (bool)bouncePathMatchesForLookup:(id)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3;
- (void)cancel;
- (void)close;
- (void)fixupItemsAtStartup;
- (id)initWithAccountSession:(id)arg1;
- (bool)isCancelled;
- (void)resume;
- (id)serialQueue;
- (id)session;
- (void)suspend;
- (id)taskTracker;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(bool)arg3;

@end
