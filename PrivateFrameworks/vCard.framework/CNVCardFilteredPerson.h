/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardFilteredPerson : NSObject <CNVCardPerson> {
    NSSet * _blacklist;
    <CNVCardPerson> * _person;
}

@property (readonly) NSDictionary *activityAlerts;
@property (readonly) NSDateComponents *alternateBirthdayComponents;
@property (readonly) NSDateComponents *birthdayComponents;
@property (readonly) NSArray *calendarURIs;
@property (readonly) NSString *cardDAVUID;
@property (readonly) NSString *companyName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *department;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *emailAddresses;
@property (readonly) NSString *firstName;
@property (readonly) unsigned int hash;
@property (readonly) NSDictionary *imageCropRects;
@property (readonly) NSData *imageData;
@property (readonly) NSArray *imageReferences;
@property (readonly) NSArray *instantMessagingAddresses;
@property (readonly) BOOL isCompany;
@property (readonly) BOOL isMe;
@property (readonly) NSString *jobTitle;
@property (readonly) NSDictionary *largeImageCropRects;
@property (readonly) NSData *largeImageData;
@property (readonly) NSString *lastName;
@property (readonly) NSString *maidenName;
@property (readonly) NSString *middleName;
@property (readonly) int nameOrder;
@property (readonly) NSArray *namesOfParentGroups;
@property (readonly) NSString *nickname;
@property (readonly) NSString *note;
@property (readonly) NSString *organization;
@property (readonly) NSArray *otherDateComponents;
@property (readonly) NSArray *phoneNumbers;
@property (readonly) NSString *phonemeData;
@property (readonly) NSString *phoneticFirstName;
@property (readonly) NSString *phoneticLastName;
@property (readonly) NSString *phoneticMiddleName;
@property (readonly) NSString *phoneticOrganization;
@property (readonly) NSArray *postalAddresses;
@property (readonly) NSString *preferredApplePersonaIdentifier;
@property (readonly) NSString *preferredLikenessSource;
@property (readonly) NSString *pronunciationFirstName;
@property (readonly) NSString *pronunciationLastName;
@property (readonly) NSArray *relatedNames;
@property (readonly) NSArray *socialProfiles;
@property (readonly) NSString *suffix;
@property (readonly) Class superclass;
@property (readonly) NSString *title;
@property (readonly) NSString *uid;
@property (readonly) NSArray *unknownProperties;
@property (readonly) NSArray *urls;

+ (id)filteredPersonWithPerson:(id)arg1 blacklistedFields:(id)arg2;

- (void).cxx_destruct;
- (id)activityAlerts;
- (id)alternateBirthdayComponents;
- (id)birthdayComponents;
- (id)calendarURIs;
- (id)cardDAVUID;
- (id)companyName;
- (id)department;
- (id)emailAddresses;
- (id)filterItems:(id)arg1 property:(id)arg2;
- (id)firstName;
- (id)imageCropRects;
- (id)imageData;
- (id)imageReferences;
- (id)initWithPerson:(id)arg1 blacklistedFields:(id)arg2;
- (id)instantMessagingAddresses;
- (BOOL)isCompany;
- (BOOL)isMe;
- (id)jobTitle;
- (id)jpegImageDataOfAllowableKinds:(id)arg1 maximumLength:(unsigned int)arg2 cropRects:(id*)arg3;
- (id)largeImageCropRects;
- (id)largeImageData;
- (id)largeImageHashOfType:(id)arg1;
- (id)lastName;
- (id)maidenName;
- (id)middleName;
- (int)nameOrder;
- (id)namesOfParentGroups;
- (id)nickname;
- (id)note;
- (id)organization;
- (id)otherDateComponents;
- (id)phoneNumbers;
- (id)phonemeData;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)phoneticOrganization;
- (id)postalAddresses;
- (id)preferredApplePersonaIdentifier;
- (id)preferredLikenessSource;
- (id)pronunciationFirstName;
- (id)pronunciationLastName;
- (id)relatedNames;
- (id)socialProfiles;
- (id)suffix;
- (id)title;
- (id)uid;
- (id)unknownProperties;
- (id)urls;

@end
