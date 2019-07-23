/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNContact : NSObject <CNObjectValidation, CNSuggested, NSCopying, NSMutableCopying, NSSecureCoding, TUSearchResult> {
    NSString * _accountIdentifier;
    NSSet * _availableKeys;
    NSDateComponents * _birthday;
    NSArray * _calendarURIs;
    CNActivityAlert * _callAlert;
    NSString * _cardDAVUID;
    NSArray * _contactRelations;
    int  _contactType;
    NSDate * _creationDate;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  _cropRect;
    NSArray * _dates;
    NSString * _departmentName;
    int  _displayNameOrder;
    NSArray * _emailAddresses;
    NSString * _familyName;
    NSData * _fullscreenImageData;
    NSString * _givenName;
    int  _iOSLegacyIdentifier;
    NSData * _imageData;
    BOOL  _imageDataAvailable;
    NSArray * _instantMessageAddresses;
    NSString * _internalIdentifier;
    NSString * _jobTitle;
    NSString * _linkIdentifier;
    NSArray * _linkedContacts;
    NSString * _mapsData;
    NSString * _middleName;
    NSDate * _modificationDate;
    NSString * _namePrefix;
    NSString * _nameSuffix;
    NSString * _nickname;
    NSDateComponents * _nonGregorianBirthday;
    NSString * _note;
    NSString * _organizationName;
    NSArray * _phoneNumbers;
    NSString * _phonemeData;
    NSString * _phoneticFamilyName;
    NSString * _phoneticGivenName;
    NSString * _phoneticMiddleName;
    NSString * _phoneticOrganizationName;
    NSArray * _postalAddresses;
    NSString * _preferredApplePersonaIdentifier;
    BOOL  _preferredForImage;
    BOOL  _preferredForName;
    NSString * _preferredLikenessSource;
    NSString * _previousFamilyName;
    NSString * _pronunciationFamilyName;
    NSString * _pronunciationGivenName;
    NSString * _searchIndex;
    NSString * _sectionForSortingByFamilyName;
    NSString * _sectionForSortingByGivenName;
    CNContact * _snapshot;
    NSArray * _socialProfiles;
    NSString * _sortingFamilyName;
    NSString * _sortingGivenName;
    NSString * _storeIdentifier;
    NSDictionary * _storeInfo;
    CNActivityAlert * _textAlert;
    NSData * _thumbnailImageData;
    NSArray * _urlAddresses;
}

@property (nonatomic, readonly, copy) NSString *accountIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *activityAlerts;
@property (nonatomic) void*addressBook;
@property (nonatomic, readonly) NSSet *availableKeys;
@property (readonly) CNContact *backingContact;
@property (readonly) NSString *backingContactId;
@property (nonatomic, readonly, copy) NSDateComponents *birthday;
@property (nonatomic, readonly) NSArray *birthdays;
@property (nonatomic, readonly, copy) NSArray *calendarURIs;
@property (nonatomic, readonly, copy) CNActivityAlert *callAlert;
@property (readonly) NSString *callerId;
@property (nonatomic, readonly, copy) NSString *cardDAVUID;
@property (readonly, copy) NSString *companyName;
@property (nonatomic, readonly, copy) NSArray *contactRelations;
@property (nonatomic) unsigned int contactSource;
@property (nonatomic, readonly) int contactType;
@property (nonatomic, readonly, copy) NSDate *creationDate;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } cropRect;
@property (nonatomic, readonly, copy) NSArray *dates;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSString *departmentName;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *destinationId;
@property (readonly) NSString *displayName;
@property (nonatomic, readonly) int displayNameOrder;
@property (nonatomic, readonly, copy) NSArray *emailAddresses;
@property (nonatomic, readonly, copy) NSString *familyName;
@property (readonly, copy) NSString *firstName;
@property (nonatomic, readonly, copy) NSString *fullName;
@property (nonatomic, readonly, copy) NSData *fullscreenImageData;
@property (nonatomic, readonly, copy) NSString *givenName;
@property (readonly) NSArray *handles;
@property (nonatomic, readonly) BOOL hasBeenPersisted;
@property (nonatomic, readonly) BOOL hasNonPersistedData;
@property (nonatomic, readonly) BOOL hasSuggestedProperties;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int iOSLegacyIdentifier;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (readonly) NSString *idsCanonicalDestination;
@property (readonly) NSArray *idsCanonicalDestinations;
@property (readonly) NSString *idsUniqueId;
@property (nonatomic, readonly, copy) NSData *imageData;
@property (nonatomic, readonly) BOOL imageDataAvailable;
@property (nonatomic, readonly, copy) NSArray *instantMessageAddresses;
@property (nonatomic, readonly, copy) NSString *internalIdentifier;
@property (readonly) NSString *isoCountryCode;
@property (nonatomic, readonly, copy) NSString *jobTitle;
@property (nonatomic, readonly) NSData *largestAvailablePhoto;
@property (readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSString *linkIdentifier;
@property (nonatomic, readonly, copy) NSArray *linkedContacts;
@property (readonly, copy) NSString *maidenName;
@property (nonatomic, readonly, copy) NSArray *mainStoreLinkedContacts;
@property (nonatomic, readonly, copy) NSString *mapsData;
@property (nonatomic, readonly, copy) NSString *middleName;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (readonly) int mostRecentCallType;
@property (readonly) BOOL mostRecentCallWasMissed;
@property (readonly) int nameOrder;
@property (nonatomic, readonly, copy) NSString *namePrefix;
@property (nonatomic, readonly, copy) NSString *nameSuffix;
@property (readonly, copy) NSString *nameTitle;
@property (nonatomic, readonly, copy) NSString *nickname;
@property (nonatomic, readonly, copy) NSDateComponents *nonGregorianBirthday;
@property (nonatomic, readonly, copy) NSString *note;
@property (nonatomic, readonly, copy) NSString *organizationName;
@property (nonatomic, readonly) NSString *personName;
@property (nonatomic, readonly, copy) NSArray *phoneNumbers;
@property (nonatomic, readonly, copy) NSString *phonemeData;
@property (nonatomic, readonly, copy) NSString *phoneticCompanyName;
@property (nonatomic, readonly, copy) NSString *phoneticFamilyName;
@property (readonly, copy) NSString *phoneticFirstName;
@property (nonatomic, readonly, copy) NSString *phoneticFullName;
@property (nonatomic, readonly, copy) NSString *phoneticGivenName;
@property (readonly, copy) NSString *phoneticLastName;
@property (nonatomic, readonly, copy) NSString *phoneticMiddleName;
@property (nonatomic, readonly, copy) NSString *phoneticOrganizationName;
@property (nonatomic, readonly) NSData *photoThumbnail;
@property (nonatomic, readonly, copy) NSArray *postalAddresses;
@property (nonatomic, readonly, copy) NSString *preferredApplePersonaIdentifier;
@property (nonatomic, readonly) CNContact *preferredContactForPhoto;
@property (getter=isPreferredForImage, nonatomic, readonly) BOOL preferredForImage;
@property (getter=isPreferredForName, nonatomic, readonly) BOOL preferredForName;
@property (getter=isPreferredForPhoto, nonatomic) BOOL preferredForPhoto;
@property (nonatomic, readonly, copy) NSString *preferredLikenessSource;
@property (nonatomic, readonly, copy) NSString *previousFamilyName;
@property (nonatomic, readonly, copy) NSString *pronunciationFamilyName;
@property (nonatomic, readonly, copy) NSString *pronunciationGivenName;
@property (getter=isReadonly, nonatomic, readonly) BOOL readonly;
@property (nonatomic, retain) CRRecentContact *recentContact;
@property (readonly) void*record;
@property (readonly) int recordID;
@property (nonatomic, readonly, copy) NSArray *relatedNames;
@property (nonatomic, readonly, copy) NSString *searchIndex;
@property (nonatomic, readonly, copy) NSString *sectionForSortingByFamilyName;
@property (nonatomic, readonly, copy) NSString *sectionForSortingByGivenName;
@property (nonatomic, readonly, copy) CNContact *snapshot;
@property (nonatomic, readonly, copy) NSArray *socialProfiles;
@property (nonatomic, readonly, copy) NSString *sortingFamilyName;
@property (nonatomic, readonly, copy) NSString *sortingGivenName;
@property (nonatomic, readonly, copy) NSString *storeIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *storeInfo;
@property (nonatomic, readonly, copy) NSString *stringForIndexing;
@property (getter=isSuggested, nonatomic, readonly) BOOL suggested;
@property (nonatomic, readonly) NSString *suggestionFoundInBundleId;
@property (nonatomic, readonly) SGRecordId *suggestionRecordId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL supportsInstantMessageService;
@property (nonatomic, readonly, copy) CNActivityAlert *textAlert;
@property (nonatomic, readonly, copy) NSData *thumbnailImageData;
@property (getter=isUnified, nonatomic, readonly) BOOL unified;
@property (getter=isUnknown, nonatomic, readonly) BOOL unknown;
@property (nonatomic, readonly, copy) NSArray *urlAddresses;
@property (nonatomic, readonly) NSData *vCardRepresentation;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)_contactWithContact:(id)arg1 createNewInstance:(BOOL)arg2 propertyDescriptions:(id)arg3;
+ (id)alwaysFetchedKeys;
+ (id /* block */)comparatorForNameSortOrder:(int)arg1;
+ (id)contact;
+ (id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2;
+ (id)contactFromPerson:(void*)arg1 keysToFetch:(id)arg2 mutable:(BOOL)arg3;
+ (id)contactFromSuggestion:(id)arg1;
+ (id)contactIdentifierFromSuggestionID:(id)arg1;
+ (id)contactWithContact:(id)arg1;
+ (id)contactWithDisplayName:(id)arg1 emailOrPhoneNumber:(id)arg2;
+ (id)contactWithIdentifier:(id)arg1;
+ (id)descriptorForAllComparatorKeys;
+ (id)descriptorForKeyDescriptors:(id)arg1 description:(id)arg2;
+ (id)identifierProvider;
+ (id)localizedStringForKey:(id)arg1;
+ (id)makeIdentifier;
+ (id)makeIdentifierString;
+ (id)newContactWithPropertyKeys:(id)arg1 withValuesFromContact:(id)arg2;
+ (id)predicateForAllContacts;
+ (id)predicateForContactMatchingEKParticipantWithName:(id)arg1 emailAddress:(id)arg2 URL:(id)arg3 predicateDescription:(id)arg4;
+ (id)predicateForContactMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactMatchingMapString:(id)arg1;
+ (id)predicateForContactMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactMatchingURLString:(id)arg1;
+ (id)predicateForContactsInContainerWithIdentifier:(id)arg1;
+ (id)predicateForContactsInGroupWithIdentifier:(id)arg1;
+ (id)predicateForContactsLinkedToContact:(id)arg1;
+ (id)predicateForContactsLinkedToContactWithIdentifier:(id)arg1;
+ (id)predicateForContactsMatchingEmailAddress:(id)arg1;
+ (id)predicateForContactsMatchingFullTextSearch:(id)arg1 containerIdentifiers:(id)arg2 groupIdentifiers:(id)arg3;
+ (id)predicateForContactsMatchingInstantMessageAddress:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1;
+ (id)predicateForContactsMatchingName:(id)arg1 options:(unsigned int)arg2;
+ (id)predicateForContactsMatchingPhoneNumber:(id)arg1;
+ (id)predicateForContactsMatchingPostalAddress:(id)arg1;
+ (id)predicateForContactsMatchingSocialProfile:(id)arg1;
+ (id)predicateForContactsMatchingString:(id)arg1 accountIdentifier:(id)arg2 containerIdentifier:(id)arg3 groupIdentifier:(id)arg4;
+ (id)predicateForContactsWithIdentifiers:(id)arg1;
+ (id)predicateForContactsWithOrganizationName:(id)arg1;
+ (id)predicateForLegacyIdentifier:(unsigned int)arg1;
+ (id)predicateForPreferredNameInContainersWithIdentifiers:(id)arg1 groupsWithIdentifiers:(id)arg2;
+ (id)predicateForPreferredNameInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)predicateForSuggestionIdentifier:(unsigned long long)arg1;
+ (id /* block */)preferredImageComparator;
+ (id)storeInfoFromCoder:(id)arg1 storeIdentifier:(id)arg2 key:(id)arg3;
+ (id)suggestionIDFromContactIdentifier:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)unifyContacts:(id)arg1;

- (id)accountIdentifier;
- (id)activityAlerts;
- (BOOL)areAllAvailableKeysEqualToContact:(id)arg1 ignoringIdentifiers:(BOOL)arg2;
- (BOOL)areAllPropertiesButContactIdentifierEqualToContact:(id)arg1;
- (BOOL)areAllPropertiesEqualToContactIgnoringIdentifiers:(id)arg1;
- (BOOL)areKeysAvailable:(id)arg1;
- (void)assertKeyIsAvailable:(id)arg1;
- (void)assertKeysAreAvailable:(id)arg1;
- (id)availableKeys;
- (id)birthday;
- (id)calendarURIs;
- (id)callAlert;
- (id)cardDAVUID;
- (id)companyName;
- (id)contactRelations;
- (int)contactType;
- (id)copyWithNoSuggestion;
- (id)copyWithPropertyKeys:(id)arg1;
- (id)copyWithSelfAsSnapshot;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cropRect;
- (id)dates;
- (void)dealloc;
- (id)departmentName;
- (id)description;
- (void*)detachedPerson;
- (void*)detachedPersonWithError:(id*)arg1;
- (id)diffToSnapshotAndReturnError:(id*)arg1;
- (int)displayNameOrder;
- (id)emailAddresses;
- (void)encodeWithCoder:(id)arg1;
- (id)familyName;
- (id)firstName;
- (id)fullName;
- (id)fullscreenImageData;
- (id)givenName;
- (BOOL)hasBeenPersisted;
- (BOOL)hasChanges;
- (BOOL)hasSuggestedProperties;
- (unsigned int)hash;
- (int)iOSLegacyIdentifier;
- (id)identifier;
- (id)imageData;
- (BOOL)imageDataAvailable;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 availableKeys:(id)arg2;
- (id)instantMessageAddresses;
- (id)internalIdentifier;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringIdentifiers:(id)arg1;
- (BOOL)isKeyAvailable:(id)arg1;
- (BOOL)isPreferredForImage;
- (BOOL)isPreferredForName;
- (BOOL)isProperty:(id)arg1 equalToOtherIgnoreIdentifiers:(id)arg2;
- (BOOL)isSuggested;
- (BOOL)isUnified;
- (BOOL)isUnifiedWithContactWithIdentifier:(id)arg1;
- (BOOL)isValid:(id*)arg1;
- (id)jobTitle;
- (id)lastName;
- (id)linkIdentifier;
- (id)linkedContacts;
- (id)linkedContactsFromStoreWithIdentifier:(id)arg1;
- (id)linkedIdentifierMap;
- (id)maidenName;
- (id)mainStoreLinkedContacts;
- (id)mapsData;
- (id)middleName;
- (id)modificationDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)namePrefix;
- (id)nameSuffix;
- (id)nameTitle;
- (id)newContactWithSameValues;
- (id)nickname;
- (id)nonGregorianBirthday;
- (id)note;
- (id)organizationName;
- (BOOL)overwritePerson:(void*)arg1;
- (BOOL)overwritePerson:(void*)arg1 error:(id*)arg2;
- (id)phoneNumbers;
- (id)phonemeData;
- (id)phoneticCompanyName;
- (id)phoneticFamilyName;
- (id)phoneticFirstName;
- (id)phoneticFullName;
- (id)phoneticGivenName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)phoneticOrganizationName;
- (id)postalAddresses;
- (id)preferredApplePersonaIdentifier;
- (BOOL)preferredForImage;
- (BOOL)preferredForName;
- (id)preferredLikenessSource;
- (id)previousFamilyName;
- (id)pronunciationFamilyName;
- (id)pronunciationGivenName;
- (id)relatedNames;
- (id)searchIndex;
- (id)sectionForSortingByFamilyName;
- (id)sectionForSortingByGivenName;
- (id)snapshot;
- (id)socialProfiles;
- (id)sortingFamilyName;
- (id)sortingGivenName;
- (id)storeIdentifier;
- (id)storeInfo;
- (id)stringForIndexing;
- (id)suggestionFoundInBundleId;
- (id)suggestionRecordId;
- (id)textAlert;
- (id)thumbnailImageData;
- (id)urlAddresses;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

+ (id)contactWithRecord:(void*)arg1;
+ (id)contactWithRecord:(void*)arg1 unify:(BOOL)arg2;
+ (id)contactWithRecordID:(int)arg1 addressBook:(void*)arg2;
+ (id)contactWithStateRestorationCoder:(id)arg1 addressBook:(void*)arg2;
+ (id)contactWithUserActivityUserInfo:(id)arg1 addressBook:(void*)arg2;
+ (id)propertiesFromPropertyIDs:(id)arg1;
+ (id)propertyForPropertyID:(int)arg1;
+ (int)propertyIDForProperty:(id)arg1;

- (void*)addressBook;
- (id)initWithRecord:(void*)arg1;
- (BOOL)isPreferredForPhoto;
- (BOOL)isReadonly;
- (id)largestAvailablePhoto;
- (id)largestAvailablePhotoAndCropRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1;
- (int)nameOrder;
- (id)photoThumbnail;
- (id)preferredContactForPhoto;
- (void*)record;
- (void*)recordFromAddressBook:(void*)arg1;
- (int)recordID;
- (void)setAddressBook:(void*)arg1;
- (void)setPreferredForPhoto:(BOOL)arg1;
- (id)userActivityUserInfo;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (BOOL)contactRemindersEnabled;
+ (id)contactWithStateRestorationCoder:(id)arg1 store:(id)arg2 keys:(id)arg3;
+ (id)descriptorForAllUIKeys;
+ (id)multiValuePropertiesSupportingPredicateValidation;
+ (BOOL)quickActionsEnabled;
+ (BOOL)settableMeCardEnabled;
+ (BOOL)suggestionsEnabled;
+ (BOOL)suggestionsShownInEditMode;

- (id)birthdays;
- (BOOL)hasNonPersistedData;
- (BOOL)isUnknown;
- (id)personName;
- (BOOL)supportsInstantMessageService;
- (id)vCardRepresentation;
- (id)validPropertiesByEvaluatingPredicate:(id)arg1 onMultiValueProperties:(id)arg2;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)mapsContactKeys;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

+ (id)mf_contactWithPersonNameComponents:(id)arg1 emailAddress:(id)arg2;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)identifierForKey:(id)arg1 withDestination:(id)arg2;
- (id)identifierForKey:(id)arg1 withDestination:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)contactWithABRecordRef:(void*)arg1;
+ (id)contactWithPkDictionary:(id)arg1;
+ (id)pkContactWithNameComponents:(id)arg1 district:(id)arg2 labeledValues:(id)arg3;
+ (id)pkContactWithNameComponents:(id)arg1 district:(id)arg2 postalAddresses:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5;
+ (id)pkContactWithNameComponents:(id)arg1 labeledValues:(id)arg2;
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 property:(id)arg3;
+ (id)pkPassbookRequiredKeys;

- (void*)ABPerson;
- (unsigned int)contactSource;
- (id)nameComponents;
- (void)pkAddLabeledValues:(id)arg1 withProperty:(id)arg2;
- (id)pkDictionaryForProperty:(id)arg1;
- (id)pkFormattedContactAddress;
- (id)pkFullName;
- (id)pkSingleLineFormattedContactAddress;
- (id)recentContact;
- (void)setContactSource:(unsigned int)arg1;
- (void)setRecentContact:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

+ (id)keysToFetchForFaceTime;

- (id)allIDSDestinations;
- (id)anyDestinationID;
- (id)backingContact;
- (id)backingContactId;
- (id)callerId;
- (id)destinationId;
- (id)displayName;
- (id)emailAddressStrings;
- (id)faceTimeQuicklookURL;
- (id)handles;
- (id)idsCanonicalDestination;
- (id)idsCanonicalDestinations;
- (id)idsUniqueId;
- (id)isoCountryCode;
- (int)mostRecentCallType;
- (BOOL)mostRecentCallWasMissed;
- (id)phoneNumberStrings;

// Image: /System/Library/PrivateFrameworks/UserManagementUI.framework/UserManagementUI

+ (id)contactForUser:(id)arg1;

@end
