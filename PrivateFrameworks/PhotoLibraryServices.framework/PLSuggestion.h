/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLSuggestion : PLManagedObject <PLCloudDeletable>

@property (nonatomic, retain) NSData *actionData;
@property (nonatomic, retain) NSDate *activationDate;
@property (nonatomic) int cachedCount;
@property (nonatomic) int cachedPhotosCount;
@property (nonatomic) int cachedVideosCount;
@property (nonatomic) short cloudDeleteState;
@property (readonly) long long cloudDeletionType;
@property (nonatomic) short cloudLocalState;
@property (readonly, copy) NSString *cloudUUIDForDeletion;
@property (nonatomic, retain) NSDate *creationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic, retain) NSDate *expungeDate;
@property (nonatomic, retain) NSData *featuresData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSSet *keyAssets;
@property (nonatomic) short notificationState;
@property (nonatomic, retain) NSDate *relevantUntilDate;
@property (nonatomic, retain) NSSet *representativeAssets;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) short state;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic) short subtype;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) short type;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic) short version;

+ (id)_representativeAssetIDsInSuggestion:(id)arg1 managedObjectContext:(id)arg2;
+ (bool)_shouldPrefetchSuggestionKeyAssetsInManagedObjectContext:(id)arg1;
+ (id)_suggestionsMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(long long)arg3 inManagedObjectContext:(id)arg4;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (unsigned long long)deleteAllMomentShareSuggestionsInManagedObjectContext:(id)arg1;
+ (unsigned long long)deletePendingSuggestionsCreatedBefore:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2;
+ (id)predicateForAllAssetsInSuggestion:(id)arg1 managedObjectContext:(id)arg2;
+ (id)predicateForAllMomentsFromRepresentativeAssetsInSuggestion:(id)arg1 managedObjectContext:(id)arg2;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(bool)arg2;
+ (id)suggestionWithUUID:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)suggestionsToPrefetchInManagedObjectContext:(id)arg1;
+ (id)suggestionsToUploadInPhotoLibrary:(id)arg1 limit:(long long)arg2;
+ (id)suggestionsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;

- (long long)cloudDeletionType;
- (id)cloudUUIDForDeletion;
- (id)cplFullRecord;
- (id)cplSuggestionChange;
- (void)delete;
- (bool)isEmpty;
- (bool)isPending;
- (bool)isSyncableChange;
- (id)mutableKeyAssets;
- (id)mutableRepresentativeAssets;
- (void)prepareForDeletion;
- (void)removeRepresentativeAsset:(id)arg1;
- (void)replaceKeyAsset:(id)arg1;
- (bool)supportsCloudUpload;
- (void)updateCachedCounts:(id)arg1;
- (void)updateStartAndEndDate;
- (void)updateWithCPLSuggestionChange:(id)arg1 inPhotoLibrary:(id)arg2;
- (void)willSave;

@end
