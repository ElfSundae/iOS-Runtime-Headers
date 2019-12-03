/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphHighlightNode : PGGraphNode <PGEventEnrichment, PGGraphFullMeaninglessEvent, PGGraphPhotoEvent, PGGraphRelatableEvent>

@property (readonly) NSString *UUID;
@property (readonly) bool babyIsPresent;
@property (readonly) double contentScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) bool happensPartiallyAtMyHome;
@property (readonly) bool happensPartiallyAtMyWork;
@property (readonly) bool hasLocation;
@property (readonly) bool hasOnlyMomentsAtWork;
@property (readonly) unsigned long long hash;
@property (readonly) PGGraphHighlightGroupNode *highlightGroupNode;
@property (readonly) bool isAggregation;
@property (readonly) bool isInteresting;
@property (readonly) bool isLongTrip;
@property (readonly) bool isPartOfAggregation;
@property (readonly) bool isPartOfLongTrip;
@property (readonly) bool isPartOfShortTrip;
@property (readonly) bool isPartOfTrip;
@property (readonly) bool isShortTrip;
@property (readonly) bool isTrip;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSDate *localStartDate;
@property (readonly) double neighborScore;
@property (readonly) unsigned long long numberOfRegularGemAssets;
@property (readonly) unsigned long long numberOfShinyGemAssets;
@property (readonly) bool petIsPresent;
@property (readonly) Class superclass;
@property (readonly) NSDate *universalEndDate;
@property (readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) NSString *uuid;

+ (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; unsigned long long x13; unsigned long long x14; double x15; double x16; unsigned long long x17; unsigned long long x18; })_promotionScoreDescriptorWithMomentNodes:(id)arg1;
+ (double)aboveAveragePromotionScoreWithPromotionScoreDescriptor:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; unsigned long long x13; unsigned long long x14; double x15; double x16; unsigned long long x17; unsigned long long x18; })arg1;
+ (double)averagePromotionScoreWithPromotionScoreDescriptor:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; unsigned long long x13; unsigned long long x14; double x15; double x16; unsigned long long x17; unsigned long long x18; })arg1;
+ (double)belowAveragePromotionScoreWithPromotionScoreDescriptor:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; unsigned long long x13; unsigned long long x14; double x15; double x16; unsigned long long x17; unsigned long long x18; })arg1;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (double)nonMeaningfulPromotionScoreWithPromotionScoreDescriptor:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; bool x8; bool x9; bool x10; bool x11; bool x12; unsigned long long x13; unsigned long long x14; double x15; double x16; unsigned long long x17; unsigned long long x18; })arg1 isAggregation:(bool)arg2 enrichmentState:(unsigned short)arg3;
+ (id)otherVeryMeaningfulMeanings;
+ (id)pathFromMoment;
+ (id)pathFromTargetNodeDomain:(unsigned short)arg1;
+ (id)pathToMoment;
+ (id)pathToTargetNodeDomain:(unsigned short)arg1;
+ (id)promotionScoreSortDescriptors;
+ (double)promotionScoreWithHighlightNode:(id)arg1 enrichmentState:(unsigned short)arg2 numberOfExtendedAssets:(unsigned long long)arg3;
+ (id)propertiesWithHighlight:(id)arg1;
+ (id)scoreSortDescriptors;

- (id)addressNodes;
- (id)anniversaryPersonNode;
- (bool)babyIsPresent;
- (id)birthdayPersonNode;
- (id)businessNodes;
- (id)businessedEvent;
- (id)celebratedHolidayNodes;
- (id)connectedEventsWithTargetDomain:(unsigned short)arg1;
- (double)contentScore;
- (id)dateNodes;
- (id)debugDictionary;
- (bool)endsBeforeLocalDate:(id)arg1;
- (id)enrichableEvent;
- (void)enumerateBusinessesUsingBlock:(id /* block */)arg1;
- (void)enumerateMeaningNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateMomentNodesUsingBlock:(id /* block */)arg1;
- (void)eventEnumerateMomentNodesUsingBlock:(id /* block */)arg1;
- (id)fetchAssetCollection;
- (bool)happensPartiallyAtMyHome;
- (bool)happensPartiallyAtMyWork;
- (bool)hasLocation;
- (bool)hasOnlyMomentsAtWork;
- (bool)hasPeopleCountingMe:(bool)arg1;
- (id)highConfidenceSceneNodes;
- (id)highlightGroupNode;
- (id)holidayNodes;
- (bool)isAggregation;
- (bool)isInteresting;
- (bool)isLongTrip;
- (bool)isPartOfAggregation;
- (bool)isPartOfLongTrip;
- (bool)isPartOfShortTrip;
- (bool)isPartOfTrip;
- (bool)isShortTrip;
- (bool)isSmartInteresting;
- (bool)isTrip;
- (id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;
- (id)localEndDate;
- (id)localIdentifier;
- (id)localStartDate;
- (id)locatedEvent;
- (id)meaningLabels;
- (id)meaningNodes;
- (id)meaningfulEvent;
- (id)momentNodes;
- (id)naturalLanguageFeatures;
- (double)neighborScore;
- (unsigned long long)numberOfAssets;
- (unsigned long long)numberOfMoments;
- (unsigned long long)numberOfRegularGemAssets;
- (unsigned long long)numberOfShinyGemAssets;
- (id)peopledEvent;
- (id)personNodes;
- (bool)petIsPresent;
- (id)photoEvent;
- (id)poiNodes;
- (id)publicEventNodes;
- (id)relatableEvent;
- (id)relatableNode;
- (id)reliableMeaningLabels;
- (id)roiNodes;
- (id)sceneNodes;
- (id)scenedEvent;
- (id)searchConfidenceSceneNodes;
- (id)seasonNodes;
- (id)socialGroupNodes;
- (id)sortedMomentNodes;
- (bool)startsAfterLocalDate:(id)arg1;
- (id)timedEvent;
- (id)universalEndDate;
- (id)universalStartDate;
- (id)uuid;
- (double)weightForMoment:(id)arg1;

@end
