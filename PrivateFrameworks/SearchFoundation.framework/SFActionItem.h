/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFActionItem : NSObject <NSSecureCoding> {
    NSString * _applicationBundleIdentifier;
    SFImage * _baseIcon;
    NSString * _contactIdentifier;
    NSString * _email;
    SFImage * _icon;
    BOOL  _isITunes;
    BOOL  _isOverlay;
    NSString * _label;
    NSString * _labelForLocalMedia;
    NSString * _labelITunes;
    float  _latitude;
    NSString * _localMediaIdentifier;
    float  _longitude;
    NSData * _mapsData;
    NSString * _offerType;
    NSString * _phoneNumber;
    NSString * _provider;
    SFPunchout * _punchout;
    BOOL  _requiresLocalMedia;
    NSArray * _storeIdentifiers;
    NSString * _type;
}

@property (nonatomic, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) SFImage *baseIcon;
@property (nonatomic, copy) NSString *contactIdentifier;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, retain) SFImage *icon;
@property (nonatomic) BOOL isITunes;
@property (nonatomic) BOOL isOverlay;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *labelForLocalMedia;
@property (nonatomic, retain) NSString *labelITunes;
@property (nonatomic) float latitude;
@property (nonatomic, copy) NSString *localMediaIdentifier;
@property (nonatomic) float longitude;
@property (nonatomic, retain) NSData *mapsData;
@property (nonatomic, retain) NSString *offerType;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, retain) NSString *provider;
@property (nonatomic, retain) SFPunchout *punchout;
@property (nonatomic) BOOL requiresLocalMedia;
@property (nonatomic, copy) NSArray *storeIdentifiers;
@property (nonatomic, retain) NSString *type;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)baseIcon;
- (id)contactIdentifier;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (BOOL)isITunes;
- (BOOL)isOverlay;
- (id)label;
- (id)labelForLocalMedia;
- (id)labelITunes;
- (float)latitude;
- (id)localMediaIdentifier;
- (float)longitude;
- (id)mapsData;
- (id)offerType;
- (id)phoneNumber;
- (id)provider;
- (id)punchout;
- (BOOL)requiresLocalMedia;
- (void)setApplicationBundleIdentifier:(id)arg1;
- (void)setBaseIcon:(id)arg1;
- (void)setContactIdentifier:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsITunes:(BOOL)arg1;
- (void)setIsOverlay:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelForLocalMedia:(id)arg1;
- (void)setLabelITunes:(id)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLocalMediaIdentifier:(id)arg1;
- (void)setLongitude:(float)arg1;
- (void)setMapsData:(id)arg1;
- (void)setOfferType:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setRequiresLocalMedia:(BOOL)arg1;
- (void)setStoreIdentifiers:(id)arg1;
- (void)setType:(id)arg1;
- (id)storeIdentifiers;
- (id)type;

@end
