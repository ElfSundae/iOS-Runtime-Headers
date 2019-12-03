/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGHighlightEnrichmentValues : NSObject {
    bool  _clearCurations;
    NSDictionary * _curatedAssetsByCurationType;
    NSString * _dateDescription;
    unsigned short  _enrichmentState;
    NSArray * _extendedCuration;
    <PGHighlightModel> * _highlight;
    PHAsset * _keyAsset;
    NSDictionary * _momentTitleByMomentUUID;
    unsigned long long  _mood;
    double  _promotionScore;
    NSString * _smartDescription;
    NSString * _verboseSmartDescription;
    NSMapTable * _visibilityScoreByAsset;
}

@property (nonatomic) bool clearCurations;
@property (nonatomic, retain) NSDictionary *curatedAssetsByCurationType;
@property (nonatomic, copy) NSString *dateDescription;
@property (nonatomic) unsigned short enrichmentState;
@property (nonatomic, retain) NSArray *extendedCuration;
@property (readonly) bool hasChanges;
@property (readonly) <PGHighlightModel> *highlight;
@property (nonatomic, retain) PHAsset *keyAsset;
@property (nonatomic, retain) NSDictionary *momentTitleByMomentUUID;
@property (nonatomic) unsigned long long mood;
@property (nonatomic) double promotionScore;
@property (nonatomic, copy) NSString *smartDescription;
@property (nonatomic, copy) NSString *verboseSmartDescription;
@property (nonatomic, retain) NSMapTable *visibilityScoreByAsset;

- (void).cxx_destruct;
- (bool)clearCurations;
- (id)curatedAssetsByCurationType;
- (id)dateDescription;
- (unsigned short)enrichmentState;
- (id)extendedCuration;
- (bool)hasChanges;
- (id)highlight;
- (id)initWithHighlight:(id)arg1;
- (id)keyAsset;
- (id)momentTitleByMomentUUID;
- (unsigned long long)mood;
- (double)promotionScore;
- (void)setClearCurations:(bool)arg1;
- (void)setCuratedAssetsByCurationType:(id)arg1;
- (void)setDateDescription:(id)arg1;
- (void)setEnrichmentState:(unsigned short)arg1;
- (void)setExtendedCuration:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setMomentTitleByMomentUUID:(id)arg1;
- (void)setMood:(unsigned long long)arg1;
- (void)setPromotionScore:(double)arg1;
- (void)setSmartDescription:(id)arg1;
- (void)setVerboseSmartDescription:(id)arg1;
- (void)setVisibilityScoreByAsset:(id)arg1;
- (id)smartDescription;
- (id)verboseSmartDescription;
- (id)visibilityScoreByAsset;

@end