/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DocumentManagerCore.framework/DocumentManagerCore
 */

@interface DOCUserInterfaceState : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _browseTabSelected;
    NSNumber * _displayMode;
    NSDate * _lastUpdatedDate;
    NSData * _mostRecentEffectiveRootLocation;
    NSData * _mostRecentlyVisitedLocation;
    NSDictionary * _sortingMode;
}

@property (nonatomic, retain) NSNumber *browseTabSelected;
@property (nonatomic, retain) NSNumber *displayMode;
@property (nonatomic, retain) NSDate *lastUpdatedDate;
@property (nonatomic, retain) NSData *mostRecentEffectiveRootLocation;
@property (nonatomic, retain) NSData *mostRecentlyVisitedLocation;
@property (nonatomic, retain) NSDictionary *sortingMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)browseTabSelected;
- (void)bumpLastUpdatedDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayMode;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)lastUpdatedDate;
- (id)mostRecentEffectiveRootLocation;
- (id)mostRecentlyVisitedLocation;
- (void)setBrowseTabSelected:(id)arg1;
- (void)setDisplayMode:(id)arg1;
- (void)setLastUpdatedDate:(id)arg1;
- (void)setMostRecentEffectiveRootLocation:(id)arg1;
- (void)setMostRecentlyVisitedLocation:(id)arg1;
- (void)setSortingMode:(id)arg1;
- (id)sortingMode;

@end
