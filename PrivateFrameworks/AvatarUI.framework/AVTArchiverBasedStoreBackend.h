/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTArchiverBasedStoreBackend : NSObject <AVTStoreBackend> {
    NSDictionary * _avatarsByIdentifiers;
    NSString * _domainIdentifier;
    AVTCoreEnvironment * _environment;
    AVTArchiverBasedStoreRoot * _model;
    NSArray * _sortedAvatars;
    NSURL * _storeLocation;
}

@property (nonatomic, copy) NSDictionary *avatarsByIdentifiers;
@property (nonatomic) <AVTStoreBackendDelegate> *backendDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *domainIdentifier;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AVTArchiverBasedStoreRoot *model;
@property (nonatomic, readonly) <AVTAvatarRecordChangeTracker> *recordChangeTracker;
@property (nonatomic, copy) NSArray *sortedAvatars;
@property (nonatomic, readonly, copy) NSURL *storeLocation;
@property (readonly) Class superclass;

+ (id)classifyRecordsByIdentifiers:(id)arg1;
+ (id)rootByRemovingAvatarWithIdentifier:(id)arg1 fromRoot:(id)arg2;
+ (id)rootBySavingAvatarRecord:(id)arg1 afterAvatarRecord:(id)arg2 forDomainIdentifier:(id)arg3 toRoot:(id)arg4;
+ (id)storeLocationForDomainIdentifier:(id)arg1 environment:(id)arg2;

- (void).cxx_destruct;
- (id)allAvatars;
- (unsigned long long)avatarCountWithError:(id*)arg1;
- (id)avatarsByIdentifiers;
- (id)avatarsExcludingIdentifiers:(id)arg1 error:(id*)arg2;
- (id)avatarsForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)avatarsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)backendDelegate;
- (bool)canCreateAvatarWithError:(id*)arg1;
- (bool)deleteAvatarWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)domainIdentifier;
- (id)duplicateAvatarRecord:(id)arg1 error:(id*)arg2;
- (id)environment;
- (id)initWithStoreLocation:(id)arg1 domainIdentifier:(id)arg2 environment:(id)arg3;
- (bool)loadContentFromDisk:(id*)arg1;
- (bool)loadContentFromDiskIfNeeded:(id*)arg1;
- (void)loadModel:(id)arg1;
- (id)model;
- (id)recordChangeTracker;
- (bool)saveAvatar:(id)arg1 error:(id*)arg2;
- (bool)saveAvatars:(id)arg1 error:(id*)arg2;
- (bool)saveModel:(id)arg1 logger:(id)arg2 error:(id*)arg3;
- (void)setAvatarsByIdentifiers:(id)arg1;
- (void)setBackendDelegate:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setSortedAvatars:(id)arg1;
- (id)sortedAvatars;
- (id)storeLocation;

@end
