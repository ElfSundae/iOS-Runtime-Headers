/* Generated by RuntimeBrowser.
 */

@protocol PLMomentData <PLMomentRefreshable>

@required

- (CLLocation *)approximateLocation;
- (NSOrderedSet *)assets;
- (NSArray *)batchedAssets;
- (int)cachedCount;
- (void)delete;
- (NSDate *)endDate;
- (short)generationType;
- (bool)isDeleted;
- (<PLMomentListData> *)megaMomentList;
- (void)removeAssetData:(id <PLMomentAssetData>)arg1;
- (void)replaceAssetDataAtIndex:(unsigned long long)arg1 withAssetData:(id <PLMomentAssetData>)arg2;
- (NSDate *)representativeDate;
- (NSData *)reverseLocationData;
- (bool)reverseLocationDataContainsLocation;
- (bool)reverseLocationDataIsValid;
- (void)setApproximateLocation:(CLLocation *)arg1;
- (void)setAssets:(NSOrderedSet *)arg1;
- (void)setCachedCount:(int)arg1;
- (void)setEndDate:(NSDate *)arg1;
- (void)setGenerationType:(short)arg1;
- (void)setMegaMomentList:(id <PLMomentListData>)arg1;
- (void)setRepresentativeDate:(NSDate *)arg1;
- (void)setReverseLocationData:(NSData *)arg1;
- (void)setReverseLocationDataContainsLocation:(bool)arg1;
- (void)setReverseLocationDataIsValid:(bool)arg1;
- (void)setStartDate:(NSDate *)arg1;
- (void)setUsedLocationsOfInterest:(bool)arg1;
- (void)setUserTitles:(NSArray *)arg1;
- (void)setUuid:(NSString *)arg1;
- (void)setYearMomentList:(id <PLMomentListData>)arg1;
- (NSDate *)startDate;
- (NSObject<NSCopying> *)uniqueObjectID;
- (bool)usedLocationsOfInterest;
- (NSArray *)userTitles;
- (NSString *)uuid;
- (<PLMomentListData> *)yearMomentList;

@end
