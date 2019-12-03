/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphContactSuggestionEdge : PGGraphEdge

@property (nonatomic, readonly) bool contactFaceprintMatch;
@property (nonatomic, readonly) double facetimeFaceprintConfidence;
@property (nonatomic, readonly) NSString *messageGroupsDebug;
@property (nonatomic, readonly) unsigned long long numberOfAppearancesInSharedAssets;
@property (nonatomic, readonly) unsigned long long numberOfCMMMoments;
@property (nonatomic, readonly) unsigned long long numberOfMatchedMessageGroups;
@property (nonatomic, readonly) unsigned long long numberOfMatchedRelationships;
@property (nonatomic, readonly) unsigned long long numberOfMomentsAtHome;
@property (nonatomic, readonly) unsigned long long numberOfMomentsAtMentionedAddress;
@property (nonatomic, readonly) unsigned long long numberOfMomentsOverlappingWithCalendarEvents;
@property (nonatomic, readonly) unsigned long long numberOfWeakBirthdayMomentsAroundBirthdayDate;
@property (nonatomic, readonly) unsigned long long numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
@property (nonatomic, readonly) bool personContactGenderMatch;
@property (nonatomic, readonly) bool personContactGenderMismatch;
@property (nonatomic, readonly) NSString *relationshipsDebug;
@property (nonatomic, readonly) double socialGroupsConfidence;
@property (nonatomic, readonly) NSString *socialGroupsDebug;

- (unsigned long long)_genderMatch;
- (id)_readableStringForContactSuggestionProperty:(id)arg1;
- (id)_stringForGenderMatch:(unsigned long long)arg1;
- (double)confidence;
- (bool)contactFaceprintMatch;
- (id)description;
- (double)facetimeFaceprintConfidence;
- (bool)isFilteredOut;
- (bool)isHighConfidence;
- (id)messageGroupsDebug;
- (unsigned long long)numberOfAppearancesInSharedAssets;
- (unsigned long long)numberOfCMMMoments;
- (unsigned long long)numberOfMatchedMessageGroups;
- (unsigned long long)numberOfMatchedRelationships;
- (unsigned long long)numberOfMomentsAtHome;
- (unsigned long long)numberOfMomentsAtMentionedAddress;
- (unsigned long long)numberOfMomentsOverlappingWithCalendarEvents;
- (unsigned long long)numberOfWeakBirthdayMomentsAroundBirthdayDate;
- (unsigned long long)numberOfWeakBirthdayMomentsAroundPotentialBirthdayDate;
- (bool)personContactGenderMatch;
- (bool)personContactGenderMismatch;
- (id)relationshipsDebug;
- (double)socialGroupsConfidence;
- (id)socialGroupsDebug;

@end