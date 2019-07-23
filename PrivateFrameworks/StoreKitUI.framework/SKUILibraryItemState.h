/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILibraryItemState : NSObject <NSCopying> {
    unsigned long long  _avTypes;
    long long  _availability;
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    bool  _highDefinition;
    bool  _preview;
    bool  _rental;
    NSNumber * _storeAccountIdentifier;
    NSString * _storeFlavorIdentifier;
    NSString * _storePlatformKind;
    NSNumber * _storeVersionIdentifier;
}

@property (nonatomic) unsigned long long AVTypes;
@property (nonatomic) long long availability;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *bundleVersion;
@property (getter=isHighDefinition, nonatomic) bool highDefinition;
@property (nonatomic, readonly) NSString *itemStateVariantIdentifier;
@property (getter=isPreview, nonatomic) bool preview;
@property (getter=isRental, nonatomic) bool rental;
@property (nonatomic, copy) NSNumber *storeAccountIdentifier;
@property (nonatomic, copy) NSString *storeFlavorIdentifier;
@property (nonatomic, copy) NSString *storePlatformKind;
@property (nonatomic, copy) NSNumber *storeVersionIdentifier;

- (void).cxx_destruct;
- (unsigned long long)AVTypes;
- (long long)availability;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithApplication:(id)arg1;
- (bool)isHighDefinition;
- (bool)isPreview;
- (bool)isRental;
- (id)itemStateVariantIdentifier;
- (id)newJavaScriptRepresentation;
- (void)setAVTypes:(unsigned long long)arg1;
- (void)setAvailability:(long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setHighDefinition:(bool)arg1;
- (void)setPreview:(bool)arg1;
- (void)setRental:(bool)arg1;
- (void)setStoreAccountIdentifier:(id)arg1;
- (void)setStoreFlavorIdentifier:(id)arg1;
- (void)setStorePlatformKind:(id)arg1;
- (void)setStoreVersionIdentifier:(id)arg1;
- (id)storeAccountIdentifier;
- (id)storeFlavorIdentifier;
- (id)storePlatformKind;
- (id)storeVersionIdentifier;

@end
