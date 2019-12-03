/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphMomentNode : PGGraphNode <PGEventEnrichment, PGGraphFullEvent, PGGraphPhotoEvent, PGGraphRelatableEvent, PLMomentProtocol>

@property (readonly) NSString *UUID;
@property (readonly) bool babyIsPresent;
@property (readonly) double behavioralScore;
@property (nonatomic, readonly) long long breakoutOfRoutineType;
@property (readonly) bool containsBetterScoringAsset;
@property (readonly) bool containsNonJunkAssets;
@property (readonly) double contentScore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *frequentLocationNodes;
@property (nonatomic, readonly) bool happensAtFrequentLocation;
@property (readonly) bool happensPartiallyAtMyHome;
@property (readonly) bool happensPartiallyAtMyHomeOrWork;
@property (readonly) bool happensPartiallyAtMyWork;
@property (readonly) bool hasAssetsWithInterestingScenes;
@property (readonly) bool hasHigherThanImprovedAssets;
@property (readonly) bool hasLocation;
@property (readonly) unsigned long long hash;
@property (readonly) PGGraphHighlightGroupNode *highlightGroupNode;
@property (nonatomic, readonly) PGGraphHighlightNode *highlightNode;
@property (nonatomic, readonly) CLSHolidayCalendarEventRuleTraits *holidayCalendarEventRuleTraits;
@property (readonly) double inhabitationScore;
@property (readonly) bool isAggregation;
@property (readonly) bool isBreakoutOfRoutineHigh;
@property (readonly) bool isInterestingForMemories;
@property (readonly) bool isLongTrip;
@property (readonly) bool isMeaningful;
@property (readonly) bool isPartOfTrip;
@property (readonly) bool isShortTrip;
@property (readonly) bool isTrip;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSDate *localStartDate;
@property (nonatomic, readonly) unsigned long long locationMobilityType;
@property (readonly) double neighborScore;
@property (readonly) unsigned long long numberOfAssets;
@property (readonly) unsigned long long numberOfAssetsWithPersons;
@property (readonly) unsigned long long numberOfRegularGemAssets;
@property (readonly) unsigned long long numberOfShinyGemAssets;
@property (readonly) bool petIsPresent;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } pl_coordinate;
@property (nonatomic, readonly) NSDate *pl_endDate;
@property (nonatomic, readonly) CLLocation *pl_location;
@property (nonatomic, readonly) unsigned long long pl_numberOfAssets;
@property (nonatomic, readonly) NSDate *pl_startDate;
@property (readonly) Class superclass;
@property (readonly) NSDate *universalEndDate;
@property (readonly) NSDate *universalStartDate;
@property (nonatomic, readonly) NSString *uuid;

+ (id)addressEdgesForMomentNodes:(id)arg1;
+ (id)addressNodesForMomentNodes:(id)arg1;
+ (id)contentBasedPropertiesWithMoment:(id)arg1;
+ (id)contentScoreSortDescriptors;
+ (id)firstAndLastMomentNodesInMomentNodes:(id)arg1;
+ (id)inclusivePathFromTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)inclusivePathToTargetNodeDomain:(unsigned short)arg1 withName:(id)arg2;
+ (id)pathFromMoment;
+ (id)pathFromTargetNodeDomain:(unsigned short)arg1;
+ (id)pathToMoment;
+ (id)pathToTargetNodeDomain:(unsigned short)arg1;
+ (id)propertiesWithMoment:(id)arg1;
+ (id)sceneEdgesForMomentNodes:(id)arg1;
+ (id)scoreSortDescriptors;

- (id)UUID;
- (long long)_compareToMomentNode:(id)arg1 withSortDescriptors:(id)arg2;
- (unsigned long long)_eventRuleLocationTrait;
- (unsigned long long)_eventRulePeopleTrait;
- (bool)_isMePresent;
- (id)addressEdges;
- (id)addressNodes;
- (id)anniversaryPersonNode;
- (id)associatedNodesForRemoval;
- (bool)babyIsPresent;
- (double)behavioralScore;
- (id)birthdayPersonNode;
- (long long)breakoutOfRoutineType;
- (id)businessNodes;
- (id)businessedEvent;
- (id)celebratedHolidayNodes;
- (id)connectedEventsWithTargetDomain:(unsigned short)arg1;
- (bool)containsBetterScoringAsset;
- (bool)containsNonJunkAssets;
- (double)contentScore;
- (id)dateNodes;
- (id)debugDictionary;
- (id)earlierMomentNode:(id)arg1;
- (bool)endsBeforeLocalDate:(id)arg1;
- (id)enrichableEvent;
- (void)enumerateAddressNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateBabyNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateBusinessNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateBusinessesUsingBlock:(id /* block */)arg1;
- (void)enumerateConsolidatedAddressesUsingBlock:(id /* block */)arg1;
- (void)enumerateFrequentLocationNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateHighlightNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateMeaningNodesUsingBlock:(id /* block */)arg1;
- (void)enumerateMeaningfulEventsUsingBlock:(id /* block */)arg1;
- (void)enumeratePetNodesUsingBlock:(id /* block */)arg1;
- (void)enumeratePublicEventNodesUsingBlock:(id /* block */)arg1;
- (void)eventEnumerateMomentNodesUsingBlock:(id /* block */)arg1;
- (id)fetchAssetCollection;
- (id)frequentLocationNodes;
- (bool)happensAtFrequentLocation;
- (bool)happensPartiallyAtMyHome;
- (bool)happensPartiallyAtMyHomeOrWork;
- (bool)happensPartiallyAtMyWork;
- (bool)hasAssetsWithInterestingScenes;
- (bool)hasHigherThanImprovedAssets;
- (bool)hasLocation;
- (bool)hasPeopleCountingMe:(bool)arg1;
- (id)highConfidenceSceneNodes;
- (id)highlightGroupNode;
- (id)highlightNode;
- (id)holidayCalendarEventRuleTraits;
- (id)holidayNodes;
- (double)inhabitationScore;
- (bool)isAggregation;
- (bool)isBreakoutOfRoutineHigh;
- (bool)isInterestingForMemories;
- (bool)isLongTrip;
- (bool)isMeaningful;
- (bool)isPartOfTrip;
- (bool)isShortTrip;
- (bool)isTrip;
- (bool)isWeekend;
- (id)keywordsForRelatedType:(unsigned long long)arg1 focusOnNodes:(id)arg2;
- (id)lastWeekendMoments;
- (id)laterMomentNode:(id)arg1;
- (id)localEndDate;
- (id)localIdentifier;
- (id)localStartDate;
- (id)locatedEvent;
- (unsigned long long)locationMobilityType;
- (id)meaningLabels;
- (id)meaningLabelsIncludingParents;
- (id)meaningNodes;
- (double)meaningScore;
- (id)meaningfulEvent;
- (void)momentEnumerateCelebratedHolidayNodesUsingBlock:(id /* block */)arg1;
- (void)momentEnumerateDateNodesUsingBlock:(id /* block */)arg1;
- (void)momentEnumeratePOINodesUsingBlock:(id /* block */)arg1;
- (void)momentEnumeratePersonNodesUsingBlock:(id /* block */)arg1;
- (void)momentEnumerateROINodesUsingBlock:(id /* block */)arg1;
- (void)momentEnumerateRemoteAddressNodesUsingBlock:(id /* block */)arg1;
- (void)momentEnumerateSceneNodesUsingBlock:(id /* block */)arg1;
- (void)momentEnumerateSocialGroupNodesUsingBlock:(id /* block */)arg1;
- (id)momentNodes;
- (id)naturalLanguageFeatures;
- (double)neighborScore;
- (unsigned long long)numberOfAssets;
- (unsigned long long)numberOfAssetsWithPersons;
- (unsigned long long)numberOfMoments;
- (unsigned long long)numberOfRegularGemAssets;
- (unsigned long long)numberOfShinyGemAssets;
- (id)peopledEvent;
- (id)personNodes;
- (bool)petIsPresent;
- (id)photoEvent;
- (struct CLLocationCoordinate2D { double x1; double x2; })pl_coordinate;
- (id)pl_endDate;
- (id)pl_location;
- (unsigned long long)pl_numberOfAssets;
- (id)pl_startDate;
- (id)poiNodes;
- (id)publicEventNodes;
- (id)relatableEvent;
- (id)relatableNode;
- (id)reliableMeaningLabels;
- (id)remoteAddressEdges;
- (id)roiNodes;
- (id)sameMonthMoments;
- (id)sameWeekendMoments;
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
- (id)weekendNode;
- (double)weightForMoment:(id)arg1;

@end
