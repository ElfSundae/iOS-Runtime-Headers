/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXUpcomingMediaContainer : NSObject {
    NSMutableDictionary * _bucketExpiredUpcomingMedia;
    NSMutableDictionary * _bucketValidUpcomingMedia;
    NSMutableDictionary * _containerExpiredUpcomingMedia;
    NSMutableDictionary * _containerValidUpcomingMedia;
    bool  _isInternalApplication;
    NSMutableDictionary * _itemExpiredUpcomingMedia;
    NSMutableDictionary * _itemValidUpcomingMedia;
    NSMutableArray * _maybeSortedUpcomingMedia;
    bool  _preferUpcomingMediaForPredictions;
    bool  _preferenceForUpcomingMediaIsSet;
    bool  _sorted;
}

@property (nonatomic, readonly) NSMutableDictionary *bucketExpiredUpcomingMedia;
@property (nonatomic, readonly) NSMutableDictionary *bucketValidUpcomingMedia;
@property (nonatomic, readonly) NSMutableDictionary *containerExpiredUpcomingMedia;
@property (nonatomic, readonly) NSMutableDictionary *containerValidUpcomingMedia;
@property (nonatomic) bool isInternalApplication;
@property (nonatomic, readonly) NSMutableDictionary *itemExpiredUpcomingMedia;
@property (nonatomic, readonly) NSMutableDictionary *itemValidUpcomingMedia;
@property (nonatomic) bool preferUpcomingMediaForPredictions;
@property (nonatomic) bool preferenceForUpcomingMediaIsSet;
@property (nonatomic, readonly) NSMutableArray *sortedUpcomingMedia;

+ (void)addToDictionary:(id)arg1 key:(id)arg2 value:(struct _PASTuple2 { Class x1; }*)arg3;

- (void).cxx_destruct;
- (void)addUpcomingMediaIntent:(id)arg1 withRank:(id)arg2;
- (id)bucketExpiredUpcomingMedia;
- (id)bucketValidUpcomingMedia;
- (id)containerExpiredUpcomingMedia;
- (id)containerValidUpcomingMedia;
- (id)init;
- (bool)isInternalApplication;
- (id)itemExpiredUpcomingMedia;
- (id)itemValidUpcomingMedia;
- (bool)preferUpcomingMediaForPredictions;
- (bool)preferenceForUpcomingMediaIsSet;
- (void)setIsInternalApplication:(bool)arg1;
- (void)setPreferUpcomingMediaForPredictions:(bool)arg1;
- (void)setPreferenceForUpcomingMediaIsSet:(bool)arg1;
- (id)sortedUpcomingMedia;

@end
