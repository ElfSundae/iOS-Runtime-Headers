/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKSetUserPropertiesRequest : CATTaskRequest {
    DMFControlGroupIdentifier * _courseIdentifier;
    NSString * _displayName;
    NSString * _familyName;
    NSString * _givenName;
    NSData * _imageData;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    NSString * _userIdentifier;
    NSString * _userSource;
}

@property (nonatomic, retain) DMFControlGroupIdentifier *courseIdentifier;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSString *phoneticFamilyName;
@property (nonatomic, copy) NSString *phoneticGivenName;
@property (nonatomic, copy) NSString *userIdentifier;
@property (nonatomic, copy) NSString *userSource;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)courseIdentifier;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)givenName;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (void)setCourseIdentifier:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setGivenName:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setPhoneticFamilyName:(id)arg1;
- (void)setPhoneticGivenName:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUserSource:(id)arg1;
- (id)userIdentifier;
- (id)userSource;

@end
