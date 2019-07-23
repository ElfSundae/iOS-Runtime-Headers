/* Generated by RuntimeBrowser.
 */

@protocol PLMomentGenerationDataManagement <NSObject>

@required

- (NSArray *)allAssetIDsNeedingLocationShiftWithError:(id*)arg1;
- (NSArray *)allAssetIDsToBeIncludedInMomentsWithError:(id*)arg1;
- (NSArray *)allAssetsToBeIncludedInMomentsWithError:(id*)arg1;
- (NSArray *)allMomentListsForLevel:(short)arg1;
- (NSArray *)allMomentListsWithInvalidReverseLocationDataForLevel:(short)arg1;
- (NSArray *)allMomentsWithError:(id*)arg1;
- (NSArray *)allMomentsWithInvalidReverseLocationData;
- (NSDictionary *)analysisMetadata;
- (<PLMomentAssetData> *)assetWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id*)arg2;
- (NSArray *)assetsWithUniqueIDs:(NSArray *)arg1 error:(id*)arg2;
- (void)beginObservingNetworkReachabilityChangesWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)enumerateAssetsWithIDs:(void *)arg1 usingBlock:(void *)arg2; // needs 2 arg types, found 9: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <PLMomentAssetData> *, unsigned long long, bool*, void*
- (<PLMomentListData> *)findOrCreateYearMomentListForYear:(long long)arg1;
- (bool)hasChanges;
- (bool)hasLocationsOfInterestInformation;
- (NSDictionary *)homeAddressDictionary;
- (<PLMomentData> *)insertNewMoment;
- (<PLMomentListData> *)insertNewMomentListForGranularityLevel:(short)arg1;
- (void)invalidateLocationsOfInterest;
- (void)invalidateShiftedLocationForAllAssetsInMoments;
- (bool)isMomentAnalysisNeeded;
- (bool)isMomentsSupportedOnPlatform;
- (bool)isNetworkReachable;
- (NSDictionary *)locationCoordinatesForAssetIDs:(NSArray *)arg1;
- (NSArray *)locationsOfInterest;
- (Class)momentAssetDataClass;
- (Class)momentDataClass;
- (<PLMomentListData> *)momentListContainingDate:(NSDate *)arg1 forLevel:(short)arg2 wantsEarliest:(bool)arg3;
- (Class)momentListDataClassForGranularityLevel:(short)arg1;
- (<PLMomentListData> *)momentListWithUniqueID:(NSObject<NSCopying> *)arg1 forLevel:(short)arg2 error:(id*)arg3;
- (<PLMomentData> *)momentWithUniqueID:(NSObject<NSCopying> *)arg1 error:(id*)arg2;
- (NSArray *)momentsBetweenDate:(NSDate *)arg1 andDate:(NSDate *)arg2 sorted:(bool)arg3;
- (NSArray *)momentsForAssetsWithUniqueIDs:(NSArray *)arg1 error:(id*)arg2;
- (NSArray *)momentsSinceDate:(NSDate *)arg1;
- (NSArray *)momentsWithinDateInterval:(NSDateInterval *)arg1;
- (bool)needsLocationsOfInterestProcessing;
- (NSArray *)orphanedAssetIDsWithError:(id*)arg1;
- (void)performBlock:(void *)arg1 synchronously:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, bool, id /* block */, void*, void, id /* block */, void*
- (void)performBlock:(void *)arg1 synchronously:(void *)arg2 priority:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, bool, long long, id /* block */, void*, void, id /* block */, void*
- (void)performDataTransaction:(void *)arg1 synchronously:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 11: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, bool, id /* block */, void*, void, id /* block */, void*
- (void)performDataTransaction:(void *)arg1 synchronously:(void *)arg2 priority:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, bool, long long, id /* block */, void*, void, id /* block */, void*
- (void)resetOnFailure;
- (void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(PLXPCTransaction *)arg2;
- (bool)save:(id*)arg1;
- (bool)saveAnalysisMetadata:(NSDictionary *)arg1;
- (bool)saveServerVersionInfo:(NSDictionary *)arg1;
- (NSDictionary *)serverVersionInfo;
- (void)setMomentAnalysisNeeded:(bool)arg1;
- (void)stopObservingNetworkReachabilityChanges;
- (<PLMomentListData> *)yearMomentListForYear:(long long)arg1 wantsEarliest:(bool)arg2;

@optional

- (void)analysisCompletedWithSuccess:(bool)arg1;
- (NSSet *)deletedObjects;
- (unsigned long long)hardGenerationBatchSizeLimit;
- (NSSet *)insertedObjects;
- (<PLMomentAnalysisTransaction> *)momentAnalysisTransactionWithName:(const char *)arg1;
- (void)pendingChangesUpdated:(unsigned long long)arg1;
- (NSString *)replayLogPath;
- (void)setSimulatesTimeout:(bool)arg1;
- (bool)simulatesTimeout;
- (NSSet *)updatedObjects;
- (bool)wantsMomentReplayLogging;

@end
