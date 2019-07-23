/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPassPresentationContext : NSObject {
    NSArray *_additionalPassUniqueIdentifiers;
    BOOL _animated;
    id _userInfo;
    BOOL _wasAutomaticallySelected;
}

@property (nonatomic, copy) NSArray *additionalPassUniqueIdentifiers;
@property (nonatomic) BOOL animated;
@property (nonatomic, copy) id userInfo;
@property (nonatomic) BOOL wasAutomaticallySelected;

+ (id)contextWithAnimation:(BOOL)arg1;
+ (id)contextWithAnimation:(BOOL)arg1 additionalPassUniqueIdentifiers:(id)arg2;
+ (id)contextWithAnimation:(BOOL)arg1 wasAutomaticallySelected:(BOOL)arg2 additionalPassUniqueIdentifiers:(id)arg3;
+ (id)contextWithAnimation:(BOOL)arg1 wasAutomaticallySelected:(BOOL)arg2 additionalPassUniqueIdentifiers:(id)arg3 userInfo:(id)arg4;

- (id)additionalPassUniqueIdentifiers;
- (BOOL)animated;
- (void)dealloc;
- (id)description;
- (void)setAdditionalPassUniqueIdentifiers:(id)arg1;
- (void)setAnimated:(BOOL)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setWasAutomaticallySelected:(BOOL)arg1;
- (id)userInfo;
- (BOOL)wasAutomaticallySelected;

@end
