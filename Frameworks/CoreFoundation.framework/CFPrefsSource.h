/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPrefsSource : NSObject {
    struct __CFDictionary { } *_dict;
    unsigned int _generationCount;
    unsigned int _isSearchList;
    struct _opaque_pthread_mutex_t { long x1; BOOL x2[40]; } *_lock;
    struct __CFArray { } *_observers;
    union { 
        struct _CFPrefsShmemEntry { 
            unsigned int generation : 31; 
            unsigned int multiprocess : 1; 
        } entry; 
        int value; 
    } lastKnownShmemState;
    union { struct _CFPrefsShmemEntry { unsigned int x_1_1_1 : 31; unsigned int x_1_1_2 : 1; } x1; int x2; } *shmemEntry;
}

+ (void)withNamedVolatileSourceForIdentifier:(struct __CFString { }*)arg1 perform:(id /* block */)arg2;
+ (void)withSourceForIdentifier:(struct __CFString { }*)arg1 user:(struct __CFString { }*)arg2 byHost:(BOOL)arg3 container:(struct __CFString { }*)arg4 cloud:(BOOL)arg5 perform:(id /* block */)arg6;

- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (void)addPreferencesObserver:(id)arg1;
- (void)alreadylocked_clearCache;
- (struct __CFDictionary { }*)alreadylocked_copyDictionary;
- (struct __CFArray { }*)alreadylocked_copyKeyList;
- (void*)alreadylocked_copyValueForKey:(struct __CFString { }*)arg1;
- (long)alreadylocked_generationCount;
- (BOOL)alreadylocked_requestNewData;
- (void)alreadylocked_setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long)arg3;
- (void)alreadylocked_updateObservingRemoteChanges;
- (struct __CFString { }*)container;
- (struct __CFDictionary { }*)copyDictionary;
- (struct __CFArray { }*)copyKeyList;
- (void*)copyValueForKey:(struct __CFString { }*)arg1;
- (id)createRequestNewContentMessageForDaemon:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (void)didChangeValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long)arg3;
- (struct __CFString { }*)domainIdentifier;
- (void)finalize;
- (void)fullCloudSynchronizeWithCompletionHandler:(id /* block */)arg1;
- (long)generationCount;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(BOOL*)arg5;
- (id)init;
- (BOOL)isByHost;
- (BOOL)isVolatile;
- (void)lock;
- (BOOL)managed;
- (void)mergeIntoDictionary:(struct __CFDictionary { }*)arg1;
- (void)removeAllValues;
- (void)removePreferencesObserver:(id)arg1;
- (void)replaceAllValuesWithValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long)arg3;
- (void)setAccessRestricted:(BOOL)arg1;
- (void)setConfigurationPath:(struct __CFString { }*)arg1;
- (void)setDaemonCacheEnabled:(BOOL)arg1;
- (void)setValue:(void*)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long)arg3;
- (void)setValues:(const void**)arg1 forKeys:(const struct __CFString {}**)arg2 count:(long)arg3 removeValuesForKeys:(const struct __CFString {}**)arg4 count:(long)arg5;
- (BOOL)synchronize;
- (void)unlock;
- (struct __CFString { }*)userIdentifier;
- (void)willChangeValuesForKeys:(const struct __CFString {}**)arg1 count:(long)arg2;

@end
