/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLStorageCache : NSObject {
    NSMutableDictionary *_countSafetyDrop;
    NSMutableDictionary *_countWarnings;
    NSDate *_lastCacheFlushDate;
    NSMutableDictionary *_lastEntryCache;
    long _lastEntryCacheSize;
    NSMutableDictionary *_stagingAggregateEntryCache;
    NSMutableDictionary *_stagingEntryCache;
    long _stagingEntryCacheSize;
}

@property (retain) NSMutableDictionary *countSafetyDrop;
@property (retain) NSMutableDictionary *countWarnings;
@property (nonatomic, retain) NSDate *lastCacheFlushDate;
@property (retain) NSMutableDictionary *lastEntryCache;
@property long lastEntryCacheSize;
@property (retain) NSMutableDictionary *stagingAggregateEntryCache;
@property (retain) NSMutableDictionary *stagingEntryCache;
@property long stagingEntryCacheSize;

+ (id)sharedStorageCache;
+ (void)syncAndDispatchForEntryCache:(id)arg1 forEntryKey:(id)arg2 withBlock:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)addToLastEntryCache:(id)arg1;
- (void)addToLastEntryCacheSubKey:(id)arg1;
- (void)addToStagingAggregateEntryCache:(id)arg1;
- (long long)addToStagingEntryCache:(id)arg1;
- (id)cachedEntryForEntryKey:(id)arg1 withEntryID:(long long)arg2;
- (void)clearLastEntryCacheForEntryKey:(id)arg1;
- (id)countSafetyDrop;
- (id)countWarnings;
- (void)dumpEntryCache:(id)arg1;
- (void)dumpLastEntryCache;
- (void)dumpStagingEntryCache;
- (long long)entryIDForNewEntry:(id)arg1;
- (void)enumerateEntryCache:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateStagingEntryCacheForEntryKey:(id)arg1 withBlock:(id /* block */)arg2;
- (void)enumerateStagingEntryCacheWithBlock:(id /* block */)arg1;
- (void)flushStagingAggregateEntryCacheToDatabase;
- (void)flushStagingEntryCacheToDatabase;
- (id)init;
- (void)insertIntoStagingEntryCache:(id)arg1;
- (id)lastCacheFlushDate;
- (id)lastEntryCache;
- (id)lastEntryCacheForEntryKey:(id)arg1;
- (id)lastEntryCacheForEntryKey:(id)arg1 withSubEntryKey:(id)arg2;
- (void)lastEntryCachePruneToDate:(id)arg1;
- (long)lastEntryCacheSize;
- (int)limitOfType:(id)arg1 forEntryKey:(id)arg2;
- (void)logFullLastEntryCacheForEntryKey:(id)arg1;
- (void)logSizeOfEntryCache:(id)arg1;
- (void)logSizeOfLastEntryCache;
- (void)logSizeOfStagingEntryCache;
- (void)logStagingEntryCacheForEntryKey:(id)arg1;
- (void)setCountSafetyDrop:(id)arg1;
- (void)setCountWarnings:(id)arg1;
- (void)setLastCacheFlushDate:(id)arg1;
- (void)setLastEntryCache:(id)arg1;
- (void)setLastEntryCacheSize:(long)arg1;
- (void)setNextEntryIDForEntryKey:(id)arg1 toEntryID:(long long)arg2;
- (void)setStagingAggregateEntryCache:(id)arg1;
- (void)setStagingEntryCache:(id)arg1;
- (void)setStagingEntryCacheSize:(long)arg1;
- (id)stagingAggregateEntryCache;
- (id)stagingEntryCache;
- (id)stagingEntryCacheForEntryKey:(id)arg1;
- (id)stagingEntryCacheForEntryKey:(id)arg1 withComparisons:(id)arg2 isSingleton:(BOOL)arg3;
- (id)stagingEntryCacheForEntryKey:(id)arg1 withID:(long long)arg2;
- (id)stagingEntryCacheForEntryKey:(id)arg1 withIDLessThan:(long long)arg2;
- (id)stagingEntryCacheIDsForEntryKey:(id)arg1;
- (long)stagingEntryCacheSize;
- (long)stagingEntryCacheSizeForEntryKey:(id)arg1;
- (void)updateStagingEntryCacheWithEntry:(id)arg1 withBlock:(id /* block */)arg2;

@end