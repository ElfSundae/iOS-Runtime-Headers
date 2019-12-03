/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDeferredCaptureContainer : BWDeferredContainerBase {
    unsigned long long  _cacheExpiryTime;
    bool  _cached;
    long long  _commitDurationNS;
    bool  _committed;
    bool  _flushBuffersUponCommit;
    long long  _flushDurationNS;
    NSObject<OS_dispatch_group> * _flushGroup;
    NSObject<OS_dispatch_queue> * _flushQueue;
    bool  _foldersCreated;
    bool  _preflushed;
}

@property (nonatomic) unsigned long long cacheExpiryTime;
@property (nonatomic) bool cached;
@property (nonatomic, readonly) long long commitDurationNS;
@property (nonatomic, readonly) bool committed;
@property (nonatomic, readonly) long long flushDurationNS;

+ (id)captureRequestIdentifierForManifest:(id)arg1;
+ (id)timeForManifest:(id)arg1 index:(unsigned long long)arg2;

- (int)_addEntryToXPCDictionary:(id)arg1 dictionary:(id)arg2;
- (int)_createFolders;
- (int)abort;
- (unsigned long long)cacheExpiryTime;
- (bool)cached;
- (int)commit;
- (int)commitArray:(id)arg1 tag:(id)arg2;
- (int)commitBuffer:(struct __CVBuffer { }*)arg1 tag:(id)arg2 bufferType:(unsigned long long)arg3 compressionProfile:(int)arg4 metadataTag:(id)arg5 portType:(id)arg6;
- (int)commitCaptureSettings:(id)arg1 settings:(id)arg2;
- (int)commitDictionary:(id)arg1 tag:(id)arg2;
- (long long)commitDurationNS;
- (int)commitMetadata:(id)arg1 tag:(id)arg2 bufferTag:(id)arg3;
- (int)commitPhotoDescriptor:(id)arg1;
- (bool)committed;
- (id)copyXPCEncoding:(int*)arg1;
- (void)dealloc;
- (int)flush;
- (long long)flushDurationNS;
- (id)initWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolder:(id)arg3 flushBuffersUponCommit:(bool)arg4 err:(int*)arg5;
- (int)preflush;
- (void)setCacheExpiryTime:(unsigned long long)arg1;
- (void)setCached:(bool)arg1;
- (int)waitForFlush;

@end
