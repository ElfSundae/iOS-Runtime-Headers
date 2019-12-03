/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGGraphPersonNode : PGGraphNode <PGPersonResult>

@property (readonly) unsigned long long ageCategory;
@property (readonly) NSDate *anniversaryDate;
@property (nonatomic, readonly) NSDate *birthdayDate;
@property (readonly) NSDate *birthdayDate;
@property (nonatomic, readonly) NSString *contactIdentifier;
@property (readonly) NSString *contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (readonly) unsigned long long gender;
@property (readonly) unsigned long long hash;
@property (readonly) bool isFavorite;
@property (nonatomic, readonly) bool isInferredChild;
@property (readonly) bool isMemberOfMyFamily;
@property (readonly) bool isMyAcquaintance;
@property (readonly) bool isMyChild;
@property (readonly) bool isMyCoworker;
@property (readonly) bool isMyFather;
@property (readonly) bool isMyFriend;
@property (readonly) bool isMyMother;
@property (readonly) bool isMyParent;
@property (readonly) bool isMyPartner;
@property (readonly) bool isUserCreated;
@property (nonatomic, readonly) bool isVerified;
@property (nonatomic, readonly) NSString *keywordDescription;
@property (nonatomic, readonly) NSString *localIdentifier;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSDate *potentialBirthdayDate;
@property (nonatomic, readonly) NSString *suggestedContactIdentifier;
@property (readonly) Class superclass;

+ (id)identifyingPropertyKeysWithProperties:(id)arg1;
+ (id)personScoreSortDescriptors;
+ (id)propertiesWithPerson:(id)arg1;
+ (unsigned long long)type;

- (bool)_contactSuggestionEdge:(id)arg1 fitsQuery:(unsigned long long)arg2;
- (id)_contactSuggestionEdgesSortedByWeight;
- (bool)_hasConfirmedRelationshipLabel:(id)arg1;
- (unsigned long long)ageCategory;
- (id)anniversaryDate;
- (id)associatedNodesForRemoval;
- (bool)belongsToBestSocialGroups;
- (id)birthdayDate;
- (long long)compareToPerson:(id)arg1;
- (id)contactIdentifier;
- (id)displayName;
- (void)enumerateContactSuggestionsSortedByWeightMatchingQuery:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (unsigned long long)gender;
- (bool)isFavorite;
- (bool)isInferredChild;
- (bool)isMeNode;
- (bool)isMemberOfMyFamily;
- (bool)isMyAcquaintance;
- (bool)isMyChild;
- (bool)isMyCoworker;
- (bool)isMyFather;
- (bool)isMyFriend;
- (bool)isMyMother;
- (bool)isMyParent;
- (bool)isMyPartner;
- (bool)isUserCreated;
- (bool)isVerified;
- (id)localIdentifier;
- (void)mergeProperties:(id)arg1;
- (void)personEnumerateBirthdayMomentNodesUsingBlock:(id /* block */)arg1;
- (void)personEnumerateHomeOrWorkAddressNodesUsingBlock:(id /* block */)arg1;
- (void)personEnumerateMomentNodesUsingBlock:(id /* block */)arg1;
- (void)personEnumerateSocialGroupNodesUsingBlock:(id /* block */)arg1;
- (id)personMomentNodes;
- (double)personScore;
- (id)personSocialGroupNodes;
- (id)potentialBirthdayDate;
- (id)stringDescription;
- (id)suggestedContactIdentifier;

@end
