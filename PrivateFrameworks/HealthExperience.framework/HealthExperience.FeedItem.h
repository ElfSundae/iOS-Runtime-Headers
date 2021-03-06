/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience
 */

@interface HealthExperience.FeedItem : NSManagedObject

@property (nonatomic, copy) NSDate *boundingEndDate;
@property (nonatomic, copy) NSDate *boundingStartDate;
@property (nonatomic, copy) NSString *contentKindRawValue;
@property (nonatomic, copy) NSSet *dataTypes;
@property (nonatomic, copy) NSDate *dateSubmitted;
@property (nonatomic, copy) NSSet *featureTags;
@property (nonatomic, retain) _TtC16HealthExperience11FeedSection *feedSection;
@property (nonatomic) bool hideInDiscover;
@property (nonatomic) bool indexForSearch;
@property (nonatomic) bool isFavorite;
@property (nonatomic, copy) NSSet *keywords;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSString *pluginPackage;
@property (nonatomic, copy) NSDate *relevantEndDate;
@property (nonatomic) double relevantRampDownTime;
@property (nonatomic) double relevantRampUpTime;
@property (nonatomic, copy) NSDate *relevantStartDate;
@property (nonatomic, readonly) NSDate *relevantStartDateForSectionName;
@property (nonatomic) short searchSectionHintRawValue;
@property (nonatomic) short searchSectionRawValue;
@property (nonatomic) long long sectionSortOrder;
@property (nonatomic) long long sortHint;
@property (nonatomic) long long sortOrder;
@property (nonatomic, copy) NSString *storyboardIdentifier;
@property (nonatomic) double suggestionRelevanceScore;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, copy) NSData *userData;
@property (nonatomic, copy) NSString *viewControllerClassName;

// Image: /System/Library/PrivateFrameworks/HealthExperience.framework/HealthExperience

- (void).cxx_construct;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (id)relevantStartDateForSectionName;

@end
