/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIBarItem : NSObject <NSCoding, UIAppearance> {
    bool  _hasCustomizableInstanceAppearanceModifications;
    UIImage * _largeContentSizeImage;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _largeContentSizeImageInsets;
    bool  _shouldArchiveUIAppearanceTags;
    long long  _tag;
}

@property (setter=_setHasCustomizableInstanceAppearanceModifications:, nonatomic) bool _hasCustomizableInstanceAppearanceModifications;
@property (setter=_setShouldArchiveUIAppearanceTags:, nonatomic) bool _shouldArchiveUIAppearanceTags;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } imageInsets;
@property (nonatomic, retain) UIImage *landscapeImagePhone;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } landscapeImagePhoneInsets;
@property (nonatomic, retain) UIImage *largeContentSizeImage;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } largeContentSizeImageInsets;
@property (nonatomic, readonly, copy) NSString *resolvedTitle;
@property (nonatomic, readonly) bool selected;
@property (readonly) Class superclass;
@property (nonatomic) long long tag;
@property (nonatomic, copy) NSString *title;

+ (id)_appearanceBlindViewClasses;
+ (id)_appearanceWhenContainedIn:(id)arg1;
+ (id)appearance;
+ (id)appearanceForTraitCollection:(id)arg1;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedIn:(Class)arg2;
+ (id)appearanceForTraitCollection:(id)arg1 whenContainedInInstancesOfClasses:(id)arg2;
+ (id)appearanceWhenContainedIn:(Class)arg1;
+ (id)appearanceWhenContainedInInstancesOfClasses:(id)arg1;

- (void).cxx_destruct;
- (id)_attributedTitleForState:(unsigned long long)arg1 withDefaultAttributes:(id)arg2;
- (bool)_hasCustomizableInstanceAppearanceModifications;
- (void)_setHasCustomizableInstanceAppearanceModifications:(bool)arg1;
- (void)_setShouldArchiveUIAppearanceTags:(bool)arg1;
- (bool)_shouldArchiveUIAppearanceTags;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasImage;
- (bool)hasTitle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)largeContentSizeImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })largeContentSizeImageInsets;
- (id)resolvedTitle;
- (bool)selected;
- (void)setLargeContentSizeImage:(id)arg1;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTag:(long long)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (long long)tag;
- (id)titleTextAttributesForState:(unsigned long long)arg1;

@end
