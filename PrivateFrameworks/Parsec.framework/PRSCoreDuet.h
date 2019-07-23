/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec
 */

@interface PRSCoreDuet : NSObject {
    CDSession * _cdSession;
    CDAttribute * _spotlightAttr;
}

@property (retain) CDSession *cdSession;
@property (retain) CDAttribute *spotlightAttr;

- (void).cxx_destruct;
- (void)addResultCategoryAndGroupToHistory:(id)arg1 groupName:(id)arg2 cost:(unsigned int)arg3 error:(id)arg4;
- (void)addResultCategoryToHistory:(id)arg1 cost:(unsigned int)arg2 error:(id)arg3;
- (id)cdSession;
- (id)getRankedCategories;
- (id)getRankedCategoriesDictionaryWithPredictionWindow:(double)arg1 predictionInterval:(double)arg2;
- (id)getRankedCategoriesWithPredictionWindow:(double)arg1 predictionInterval:(double)arg2;
- (id)initWithDuetClientID:(unsigned int)arg1 attributeString:(id)arg2;
- (void)setCdSession:(id)arg1;
- (void)setSpotlightAttr:(id)arg1;
- (id)spotlightAttr;

@end
