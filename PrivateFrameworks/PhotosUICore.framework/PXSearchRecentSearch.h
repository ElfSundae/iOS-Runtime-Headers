/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSearchRecentSearch : NSObject <NSSecureCoding> {
    NSArray * _representedObjects;
    NSString * _searchText;
}

@property (nonatomic, readonly) NSArray *representedObjects;
@property (nonatomic, readonly) NSString *searchText;
@property (nonatomic, readonly) NSString *title;

+ (bool)_isSupportedRepresentedObjects:(id)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRepresentedObjects:(id)arg1 searchText:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)representedObjects;
- (id)searchText;
- (id)title;

@end
