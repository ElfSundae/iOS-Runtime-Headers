/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDSource : NSObject {
    const char * _actualPath;
    BOOL  _byHost;
    CFPrefsDaemon * _cfprefsd;
    BOOL  _checkedForNonPrefsPlist;
    BOOL  _dirty;
    BOOL  _disableBackup;
    struct __CFString { } * _domain;
    short  _generationShmemIndex;
    BOOL  _handlingRequest;
    BOOL  _hasDrainedPendingChangesSinceLastReplyToOwner;
    BOOL  _hasPreviouslyBeenUnableToDetermineSandboxAccess;
    NSObject<OS_dispatch_group> * _inProgressWriteGroup;
    unsigned int  _lastEgid;
    unsigned int  _lastEuid;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BOOL  _managed;
    BOOL  _neverCache;
    struct __CFSet { } * _observingConnections;
    const char * _pathToTemporaryFileToWriteTo;
    NSObject<OS_xpc_object> * _pendingChangesQueue;
    unsigned long  _pendingChangesSize;
    CFPDDataBuffer * _plist;
    BOOL  _restrictedReadability;
    struct __CFString { } * _userName;
    BOOL  _waitingForDeviceUnlock;
    BOOL  _watchingParentDirectory;
}

- (void)_writeToDisk:(BOOL)arg1;
- (id)acceptMessage:(id)arg1;
- (void)addOwner:(id)arg1;
- (void)asyncNotifyObserversOfChanges;
- (void)asyncWriteToDisk;
- (void)attachSizeWarningsToReply:(id)arg1 forByteCount:(unsigned long)arg2;
- (void)beginHandlingRequest;
- (BOOL)byHost;
- (void)cacheActualAndTemporaryPathsWithEUID:(unsigned int)arg1 egid:(unsigned int)arg2;
- (void)cacheActualPath;
- (void)cacheActualPathCreatingIfNecessary:(BOOL)arg1 euid:(unsigned int)arg2 egid:(unsigned int)arg3;
- (void)clearCache;
- (struct __CFString { }*)cloudConfigurationPath;
- (struct __CFString { }*)container;
- (id)copyCachedObservationConnectionForMessage:(id)arg1;
- (id)copyPropertyList;
- (id)copyPropertyListWithoutDrainingPendingChanges;
- (struct __CFString { }*)copyUncanonicalizedPath;
- (void)dealloc;
- (struct __CFString { }*)debugDump;
- (id)description;
- (struct __CFString { }*)domain;
- (void)drainPendingChanges;
- (void)endHandlingRequest;
- (BOOL)enqueueNewKey:(id)arg1 value:(id)arg2 size:(unsigned long)arg3 encoding:(int)arg4;
- (BOOL)getUncanonicalizedPath:(char *)arg1;
- (void)handleAvoidCache;
- (void)handleDeviceUnlock;
- (void)handleEUIDorEGIDMismatch;
- (void)handleNeverCache;
- (void)handleNoPlistFound;
- (void)handleOpenForWritingFailureWithErrno:(int)arg1;
- (void)handleRootWrite;
- (void)handleSynchronous;
- (BOOL)hasEverHadMultipleOwners;
- (BOOL)hasObservers;
- (unsigned int)hash;
- (id)initWithDomain:(struct __CFString { }*)arg1 userName:(struct __CFString { }*)arg2 byHost:(BOOL)arg3 managed:(BOOL)arg4 shmemIndex:(short)arg5 daemon:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (void)lockedAsync:(id /* block */)arg1;
- (void)lockedSync:(id /* block */)arg1;
- (BOOL)managed;
- (void)markNeedsToReloadFromDiskDueToFailedWrite;
- (int)owner;
- (void)removeOwner;
- (void)respondToFileWrittenToBehindOurBack;
- (void)setDirty:(BOOL)arg1;
- (void)setObserved:(BOOL)arg1 bySenderOfMessage:(id)arg2;
- (void)setPlist:(id)arg1;
- (short)shmemIndex;
- (BOOL)shouldBePurgable;
- (void)stopNotifyingObserver:(long)arg1;
- (void)syncWriteToDisk;
- (void)syncWriteToDiskAndFlushCache;
- (void)transitionToMultiOwner;
- (void)updateShmemEntry;
- (struct __CFString { }*)user;
- (BOOL)validateAccessToken:(int)arg1 accessType:(int)arg2;
- (int)validateMessage:(id)arg1 withNewKey:(id)arg2 newValue:(id)arg3 currentPlistData:(id)arg4 containerPath:(const char *)arg5 diagnosticMessage:(const char **)arg6;
- (int)validatePOSIXPermissionsForMessage:(id)arg1 accessType:(int)arg2 fullyValidated:(BOOL*)arg3;
- (int)validateSandboxForRead:(id)arg1 containerPath:(const char *)arg2;
- (BOOL)validateSandboxForWrite:(id)arg1 containerPath:(const char *)arg2;
- (int)validateSandboxPermissionsForMessage:(id)arg1 containerPath:(const char *)arg2 accessType:(int)arg3;

@end
