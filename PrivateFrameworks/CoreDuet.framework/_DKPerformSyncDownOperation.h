/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPerformSyncDownOperation : _DKSyncCompositeOperation {
    <_DKSyncLocalKnowledgeStorage> * _localStorage;
    NSArray * _peers;
    struct _CDPerfEvent { 
        double startTime; 
        double endTime; 
    }  _perfEvent;
    _CDMutablePerfMetric * _perfMetric;
    _DKSync2Policy * _policy;
    <_DKSyncRemoteKnowledgeStorage> * _transport;
    _DKSyncType * _type;
}

- (void).cxx_destruct;
- (void)endOperation;
- (void)endPerfMetrics;
- (id)initWithParent:(id)arg1 localStorage:(id)arg2 transport:(id)arg3 peers:(id)arg4 policy:(id)arg5 type:(id)arg6;
- (bool)isAsynchronous;
- (void)main;
- (void)performSyncDown;
- (void)performSyncDown2;
- (void)startPerfMetrics;

@end
