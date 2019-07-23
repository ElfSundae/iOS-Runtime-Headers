/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface NSDictionary : NSObject <CKDParsedObject, CSCoderEncoder, NSCopying, NSFastEnumeration, NSFetchRequestResult, NSMutableCopying, NSSecureCoding, PHFetchDictionaryAccessing, PQLBindable>

@property (nonatomic, readonly) NSNumber *__im_associatedMessageContentType;
@property (nonatomic, readonly) NSString *__im_associatedMessageSummary;
@property (nonatomic, readonly) float averageRating;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSArray *categories;
@property (readonly) unsigned int count;
@property (nonatomic, readonly) NSString *creator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned short fileHFSFlags;
@property (nonatomic, readonly) unsigned long long fileHFSResourceForkSize;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *hk_bundleId;
@property (nonatomic, readonly) NSArray *hk_categories;
@property (nonatomic, readonly) BOOL hk_isInstalled;
@property (nonatomic, readonly) NSString *hk_priceFormatted;
@property (nonatomic, readonly) NSNumber *hk_storeID;
@property (nonatomic, readonly) NSString *hk_title;
@property (nonatomic, readonly) BOOL isInstalled;
@property (nonatomic, readonly) BOOL isOfficialApp;
@property (nonatomic) unsigned long long lastClientRevision;
@property (nonatomic) unsigned long long lastServerRevision;
@property (nonatomic) unsigned long long newRevision;
@property (readonly) NSString *npkRelevancyRelevantText;
@property (readonly) NSString *npkRelevancyUniqueID;
@property (nonatomic, readonly) NSString *priceFormatted;
@property (nonatomic, readonly) unsigned int ratingCount;
@property (nonatomic, readonly) NSNumber *storeID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *transitModeKeys;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, copy) NSString *versionToken;

// Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)dictionary;
+ (id)dictionaryWithDictionary:(id)arg1;
+ (id)dictionaryWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
+ (id)dictionaryWithObject:(id)arg1 forKey:(id)arg2;
+ (id)dictionaryWithObjects:(id)arg1 forKeys:(id)arg2;
+ (id)dictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
+ (id)dictionaryWithObjectsAndKeys:(id)arg1;
+ (id)newDictionaryWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
+ (id)sharedKeySetForKeys:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void)__apply:(int (*)arg1 context:(void*)arg2;
- (BOOL)__getValue:(id*)arg1 forKey:(id)arg2;
- (unsigned long)_cfTypeID;
- (id)allKeys;
- (id)allKeysForObject:(id)arg1;
- (id)allObjects;
- (id)allValues;
- (BOOL)containsKey:(id)arg1;
- (BOOL)containsObject:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)countForKey:(id)arg1;
- (unsigned int)countForObject:(id)arg1;
- (id)description;
- (id)descriptionWithLocale:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned int)arg1 usingBlock:(id /* block */)arg2;
- (void)getKeys:(id*)arg1;
- (void)getObjects:(id*)arg1;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 copyItems:(BOOL)arg2;
- (id)initWithObject:(id)arg1 forKey:(id)arg2;
- (id)initWithObjects:(id)arg1 forKeys:(id)arg2;
- (id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned int)arg3;
- (id)initWithObjectsAndKeys:(id)arg1;
- (id)invertedDictionary;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToDictionary:(id)arg1;
- (BOOL)isNSDictionary__;
- (id)keyEnumerator;
- (id)keyOfEntryPassingTest:(id /* block */)arg1;
- (id)keyOfEntryWithOptions:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (id)keysOfEntriesPassingTest:(id /* block */)arg1;
- (id)keysOfEntriesWithOptions:(unsigned int)arg1 passingTest:(id /* block */)arg2;
- (id)keysSortedByValueUsingComparator:(id /* block */)arg1;
- (id)keysSortedByValueUsingSelector:(SEL)arg1;
- (id)keysSortedByValueWithOptions:(unsigned int)arg1 usingComparator:(id /* block */)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)objectsForKeys:(id)arg1 notFoundMarker:(id)arg2;

// Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI

- (int)abCompare:(id)arg1;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKPropertiesToDescribe:(BOOL)arg1;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight

- (void)encodeKeysAndValuesWithCSCoder:(id)arg1 filterBlock:(id /* block */)arg2;
- (void)encodeWithCSCoder:(id)arg1;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (id)dictionaryByMergingWithDictionary:(id)arg1;
- (id)objectForKey:(id)arg1 withDefaultValueBlock:(id /* block */)arg2;
- (id)objectOrDefaultValueForKey:(id)arg1;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)dictionaryWithContentsOfFile:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1;
+ (id)newWithContentsOf:(id)arg1 immutable:(BOOL)arg2;
+ (BOOL)supportsSecureCoding;

- (id)_stringToWrite;
- (int)_web_intForKey:(id)arg1;
- (id)_web_numberForKey:(id)arg1;
- (id)_web_objectForMIMEType:(id)arg1;
- (id)_web_stringForKey:(id)arg1;
- (Class)classForCoder;
- (id)descriptionInStringsFileFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)fileCreationDate;
- (BOOL)fileExtensionHidden;
- (id)fileGroupOwnerAccountID;
- (id)fileGroupOwnerAccountName;
- (unsigned int)fileGroupOwnerAccountNumber;
- (unsigned long)fileHFSCreatorCode;
- (unsigned long)fileHFSTypeCode;
- (BOOL)fileIsAppendOnly;
- (BOOL)fileIsImmutable;
- (id)fileModificationDate;
- (id)fileOwnerAccountID;
- (id)fileOwnerAccountName;
- (unsigned int)fileOwnerAccountNumber;
- (unsigned int)filePosixPermissions;
- (unsigned long long)fileSize;
- (unsigned int)fileSystemFileNumber;
- (int)fileSystemNumber;
- (id)fileType;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (BOOL)_hk_validateMetadataValueContent:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
+ (id)hk_acceptedMetadataValueClasses;
+ (BOOL)hk_acceptsMetadataValue:(id)arg1;
+ (id)hk_secureCodingClasses;

- (BOOL)hk_validateMetadataKeysAndValuesAllowingPrivateMetadataKeys:(BOOL)arg1 error:(id*)arg2;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

- (id)locationFromDataForKey:(id)arg1;
- (id)regionFromDataForKey:(id)arg1;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)_defaultOffer;
- (BOOL)_mapkit_writeBinaryPlist:(id)arg1 atomically:(BOOL)arg2;
- (id)_ratingData;
- (float)averageRating;
- (id)bestImageURLForWidth:(float)arg1;
- (id)bundleId;
- (id)categories;
- (id)creator;
- (BOOL)isInstalled;
- (BOOL)isOfficialApp;
- (id)priceFormatted;
- (unsigned int)ratingCount;
- (id)storeID;
- (id)title;
- (id)transitModeKeys;
- (id)url;

// Image: /System/Library/Frameworks/MessageUI.framework/MessageUI

- (id)mf_filterUsingMap:(id)arg1 inverse:(BOOL)arg2;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

- (BOOL)_LS_BoolForKey:(id)arg1;
- (BOOL)_LS_containsKey:(id)arg1;
- (unsigned long long)_LS_integerForKey:(id)arg1;
- (id)_LS_objectForKey:(id)arg1 ofType:(Class)arg2;
- (unsigned int)_hashQuery;
- (id)_parseQueryForIdentifiers:(id)arg1;
- (id)insertExtensionPointVersion:(id)arg1;
- (id)ls_resolvePlugInKitInfoPlistWithDictionary:(id)arg1;

// Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore

- (id)CAMLType;
- (struct KeyValueArray { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; struct Object {} *x4[1]; }*)CA_copyRenderKeyValueArray;
- (void)encodeWithCAMLWriter:(id)arg1;

// Image: /System/Library/Frameworks/SceneKit.framework/SceneKit

- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })SCNMatrix4Value;
- (id)SCNMutableDeepCopy;
- (struct SCNVector3 { float x1; float x2; float x3; })SCNVector3Value;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })SCNVector4Value;
- (unsigned int)SCN_safeHash;

// Image: /System/Library/Frameworks/Social.framework/Social

+ (id)SLDictionaryWithOAuthAccessTokenResponseData:(id)arg1;
+ (id)dictionaryWithParametersInURLString:(id)arg1;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (BOOL)_boolForKey:(id)arg1;
- (id)_ui_attributesForDictionaryContainingUIStringDrawingKeys;
- (BOOL)_ui_dictionaryContainsUIStringDrawingKeys;
- (int)_web_messageLineNumber;
- (id)_web_messageSourceURL;
- (id)_web_messageText;
- (int)_web_messageType;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

- (id)un_nonEmptyCopy;
- (id)un_safeCastObjectForKey:(id)arg1 class:(Class)arg2;

// Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount

- (id)vs_arrayForKey:(id)arg1;
- (id)vs_dictionaryForKey:(id)arg1;
- (id)vs_numberForKey:(id)arg1;
- (id)vs_objectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)vs_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport

- (id)axssDecodeArrayOfClass:(Class)arg1 forKey:(id)arg2;
- (BOOL)axssDecodeBoolForKey:(id)arg1;
- (id)axssDecodeObjectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities

+ (id)dictionaryWithAXAuditIssue:(long)arg1 element:(id)arg2;

// Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant

- (int)ssidAndBaseNameLocalizedCaseInsensitiveCompare:(id)arg1;
- (int)ssidLocalizedCaseInsensitiveCompare:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice

- (id)devicePairingId;
- (id)displayName;
- (id)enabledDataClasses;
- (id)grappaInfo;
- (unsigned long long)lastClientRevision;
- (unsigned long long)lastServerRevision;
- (id)model;
- (unsigned long long)newRevision;
- (id)osType;
- (id)osVersion;
- (void)setDevicePairingId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEnabledDataClasses:(id)arg1;
- (void)setGrappaInfo:(id)arg1;
- (void)setLastClientRevision:(unsigned long long)arg1;
- (void)setLastServerRevision:(unsigned long long)arg1;
- (void)setModel:(id)arg1;
- (void)setNewRevision:(unsigned long long)arg1;
- (void)setOsType:(id)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setVersionToken:(id)arg1;
- (id)versionToken;

// Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

+ (id)ak_dictionaryWithResponseData:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (BOOL)bs_boolForKey:(id)arg1;
- (id)bs_dictionaryByAddingEntriesFromDictionary:(id)arg1;
- (void)bs_each:(id /* block */)arg1;
- (id)bs_filter:(id /* block */)arg1;
- (id)bs_safeArrayForKey:(id)arg1;
- (BOOL)bs_safeBOOLForKey:(id)arg1;
- (id)bs_safeDictionaryForKey:(id)arg1;
- (id)bs_safeObjectForKey:(id)arg1 ofType:(Class)arg2;
- (id)bs_safeStringForKey:(id)arg1;
- (id)bs_safeURLForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard

- (BOOL)bb_boolForKey:(id)arg1;
- (int)bb_integerForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion

- (id)idsMetadataFileKey;
- (int)idsMetadataFileURLType;

// Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV

- (id)mutableCopyWithElementsCopy;

// Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation

- (BOOL)CalHasKeyIn:(id)arg1;
- (id)CalMutableRecursiveCopy;
- (id)filteredDictionaryPassingTest:(id /* block */)arg1;
- (id)mutableCopyWithElementsCopy;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (BOOL)cam_compareKey:(id)arg1 withDictionary:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst

- (id)cat_calculateAddedObjects;
- (id)cat_calculateRemovedObjects;

// Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial

- (BOOL)bw_containsBuiltInMicAsAnInput;
- (id)bw_dataSourceDictionaryForDesiredMicOrientation:(unsigned long)arg1;
- (unsigned long)bw_optimalMicPolarPattern;
- (BOOL)matchesUID:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

- (BOOL)brc_booleanValueForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon

- (id)CKObjectForKeyCaseInsensitive:(id)arg1;
- (id)CKPercentEscapedQueryString;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;

// Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary

- (id)initWithCPLArchiver:(id)arg1;
- (id)plistArchiveWithCPLArchiver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI

- (id)__ftreg_candidateAliases;
- (BOOL)__ftreg_isValidSetupDictionary;
- (id)__ftreg_responseAppleID;
- (id)__ftreg_responseAuthToken;
- (BOOL)__ftreg_responseIsUpgrade;
- (id)__ftreg_responseProfileID;

// Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

- (void)_cn_each:(id /* block */)arg1;
- (id)_cn_filter:(id /* block */)arg1;
- (id)_cn_keysAndValues;
- (id)_cn_map:(id /* block */)arg1;
- (id)_cn_mapKeys:(id /* block */)arg1;
- (id)_cn_mapValues:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV

- (id)CDVMergeOverrideDictionary:(id)arg1;
- (id)CDVObjectForKeyCaseInsensitive:(id)arg1;
- (id)CDVObjectForKeyWithNameSpace:(id)arg1 andName:(id)arg2;

// Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream

- (id)MSASAlbumResetSyncAlbumGUID;
- (id)MSASEventIsDueToAlbumDeletionAlbumGUID;
- (id)MSASEventIsDueToAssetCollectionDeletionAssetCollectionGUID;
- (BOOL)MSASIsErrorRecovery;
- (BOOL)MSASIsGlobalResetSync;
- (BOOL)MSASIsLocalChange;
- (BOOL)MSASIsNotInteresting;
- (id)MSDeepCopy;
- (id)MSDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MSMutableDeepCopy;
- (id)MSMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (id)parsec_URLForKey:(id)arg1;
- (id)parsec_UUIDForKey:(id)arg1;
- (id)parsec_arrayForKey:(id)arg1;
- (BOOL)parsec_boolForKey:(id)arg1;
- (id)parsec_dataForKey:(id)arg1;
- (id)parsec_dateForKey:(id)arg1;
- (id)parsec_dictionaryForKey:(id)arg1;
- (id)parsec_numberForKey:(id)arg1;
- (id)parsec_stringForKey:(id)arg1;
- (id)sf_asActionItem:(id)arg1;
- (id)sf_asAppLink:(id)arg1;
- (id)sf_asAppLinkCardSection:(id)arg1;
- (id)sf_asDescriptionCardSection:(id)arg1;
- (id)sf_asFormattedText:(id)arg1;
- (id)sf_asImage:(id)arg1;
- (id)sf_asKeyValueDataCardSection:(id)arg1;
- (id)sf_asMediaDetail:(id)arg1;
- (id)sf_asMediaInfoCardSection:(id)arg1;
- (id)sf_asMediaItem:(id)arg1;
- (id)sf_asMediaOffer:(id)arg1;
- (id)sf_asMediaPlayerCardSection:(id)arg1;
- (id)sf_asMetaInfoCardSection:(id)arg1;
- (id)sf_asNowPlayingCardSection:(id)arg1;
- (id)sf_asPunchout;
- (id)sf_asPunchout:(id)arg1;
- (id)sf_asRichText:(id)arg1;
- (id)sf_asRichTitleCardSection:(id)arg1;
- (id)sf_asRowCardSection:(id)arg1;
- (id)sf_asScoreboardCardSection:(id)arg1;
- (id)sf_asSocialMediaPostCardSection:(id)arg1;
- (id)sf_asStockChartCardSection:(id)arg1;
- (id)sf_asTableAlignmentSchema;
- (id)sf_asTableRowCardSection:(id)arg1;
- (id)sf_asTextColumnsCardSection:(id)arg1;
- (id)sf_asTitleCardSection:(id)arg1;
- (id)sf_asTrack:(id)arg1;
- (id)sf_asTrackListCardSection:(id)arg1;
- (void)sf_baseCardSection:(id)arg1;
- (id)sf_imageForKey:(id)arg1 reply:(id)arg2;
- (unsigned int)sf_textColorForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC

- (BOOL)getLinkState:(BOOL*)arg1 physicalAddress:(unsigned int*)arg2;

// Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions

- (BOOL)hasCaseIgnoringKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

- (id)DAMergeOverrideDictionary:(id)arg1;
- (id)DAObjectForKeyCaseInsensitive:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite

+ (id)dictionaryWithContentsOfData:(id)arg1;
+ (id)dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)fm_dictionaryWithContentsOfData:(id)arg1;
+ (id)fm_dictionaryWithContentsOfURL:(id)arg1 error:(id*)arg2;

- (id)dictionaryWithLowercaseKeys;
- (id)fm_dictionaryByMappingValues:(id /* block */)arg1;
- (id)fm_dictionaryWithLowercaseKeys;
- (id)fm_filter:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices

- (id)_FTFilteredDictionaryForAPS;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_gkClientImageDictionaryForServerImageURLs:(id)arg1;
+ (id)_gkDictionaryWithFormEncodedString:(id)arg1;
+ (id)_gkImageCacheKeyPathsByKey;

- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)_gkDictionaryByRemovingObjectForKey:(id)arg1;
- (id)_gkDictionaryByRemovingObjectsForKeys:(id)arg1;
- (id)_gkImageURLForSize:(int)arg1 scale:(float)arg2;
- (id)_gkImageURLForSize:(int)arg1 scale:(float)arg2 foundSize:(out unsigned int*)arg3;
- (id)_gkSubDictionaryWithKeys:(id)arg1;
- (id)_gkSubDictionaryWithKeys:(id)arg1 mappedToNewKeys:(id)arg2;
- (id)_gkValuesForKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference

- (id)copyGKSDeep;
- (id)copyGKSDeepMutable;

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)_geo_dictionaryFromXPCObject:(id)arg1;
+ (id)_geo_replyDictionaryForError:(id)arg1 key:(id)arg2;

- (id)_geo_errorForKey:(id)arg1;
- (id)_geo_newXPCObject;
- (id)_placeOrCurrentLocation:(BOOL*)arg1;

// Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

- (id)arrayForKey:(id)arg1;
- (id)arrayOfDateComponentsFromDataForKey:(id)arg1;
- (id)base64EncodedDataForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1 keyPresent:(BOOL*)arg2;
- (id)calendarForKey:(id)arg1;
- (id)calendarFromDataForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dateComponentsForKey:(id)arg1;
- (id)dateComponentsFromDataForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)errorForKey:(id)arg1;
- (id)errorFromDataForKey:(id)arg1;
- (id)mutableArrayForKey:(id)arg1;
- (id)mutableDictionaryForKey:(id)arg1;
- (id)mutableSetForKey:(id)arg1;
- (id)nsValueForKey:(id)arg1;
- (id)nullForKey:(id)arg1;
- (id)numberForKey:(id)arg1;
- (id)predicateFromDataForKey:(id)arg1;
- (id)secureDescriptionWithBlacklistKeys:(id)arg1;
- (id)secureDescriptionWithIndent:(id)arg1 newLine:(BOOL)arg2 blacklistedKeys:(id)arg3;
- (id)setForKey:(id)arg1;
- (id)shortDescription;
- (id)stringForKey:(id)arg1;
- (id)timeZoneForKey:(id)arg1;
- (id)timeZoneFromDataForKey:(id)arg1;
- (id)urlForKey:(id)arg1;
- (id)uuidForKey:(id)arg1;
- (id)uuidFromStringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)hk_dictionaryWithCodableMetadata:(id)arg1;

- (id)hk_codableMetadata;

// Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI

- (id)_defaultOffer;
- (id)_hk_artwork;
- (id)_hk_bestImageURLForWidth:(float)arg1 fromArtworkArray:(id)arg2;
- (id)_hk_circularArtwork;
- (id)hk_bestCircularImageURLForWidth:(float)arg1;
- (id)hk_bestImageURLForWidth:(float)arg1;
- (id)hk_bundleId;
- (id)hk_categories;
- (BOOL)hk_isInstalled;
- (id)hk_priceFormatted;
- (id)hk_storeID;
- (id)hk_title;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)locationFromDataForKey:(id)arg1;
- (id)regionFromDataForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (float)hucc_constantForSizeSubclass:(unsigned int)arg1;

// Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation

+ (id)_dictionaryWithData:(id)arg1 isPlist:(BOOL)arg2 allowedClasses:(id)arg3;
+ (id)dictionaryWithArchiveData:(id)arg1;
+ (id)dictionaryWithArchiveData:(id)arg1 allowedClasses:(id)arg2;
+ (id)dictionaryWithKeyArray:(id)arg1 defaultValue:(id)arg2;
+ (id)dictionaryWithPlistData:(id)arg1;

- (id)__imDeepCopy;
- (BOOL)__imIsMutable;
- (id)_arrayForKey:(id)arg1;
- (id)_dataForKey:(id)arg1;
- (id)_dictionaryForKey:(id)arg1;
- (id)_numberForKey:(id)arg1;
- (id)_stringForKey:(id)arg1;
- (id)archiveData;
- (id)dictionaryFromChanges:(id)arg1;
- (unsigned short)fileHFSFlags;
- (unsigned long long)fileHFSResourceForkSize;
- (id)keysOfChangedEntriesComparedTo:(id)arg1;
- (id)plistData;

// Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities

+ (id)dictionaryWithAssociatedMessageSummary:(id)arg1 contentType:(unsigned char)arg2;
+ (id)dictionaryWithMessageSummaryInfoData:(id)arg1;

- (id)__im_associatedMessageContentType;
- (id)__im_associatedMessageSummary;

// Image: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences

- (id)invertedDictionary;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCShortenedArray:(id)arg1;
+ (id)MCShortenedData:(id)arg1;
+ (id)MCShortenedDictionary:(id)arg1;
+ (id)MCShortenedObject:(id)arg1;

- (id)MCDeepCopy;
- (id)MCDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MCMutableDeepCopy;
- (id)MCMutableDeepCopyWithZone:(struct _NSZone { }*)arg1;
- (id)MCRetainOptionalNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 invalidDataCode:(int)arg3 invalidDataErrorString:(id)arg4 outError:(id*)arg5;
- (id)MCRetainOptionalObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 invalidDataCode:(int)arg4 invalidDataErrorString:(id)arg5 outError:(id*)arg6;
- (id)MCRetainRequiredNonZeroLengthStringKey:(id)arg1 errorDomain:(id)arg2 missingDataCode:(int)arg3 missingDataErrorString:(id)arg4 invalidDataCode:(int)arg5 invalidDataErrorString:(id)arg6 outError:(id*)arg7;
- (id)MCRetainRequiredObjectKey:(id)arg1 type:(Class)arg2 errorDomain:(id)arg3 missingDataCode:(int)arg4 missingDataErrorString:(id)arg5 invalidDataCode:(int)arg6 invalidDataErrorString:(id)arg7 outError:(id*)arg8;
- (BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2;
- (BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3;
- (BOOL)MCSCWriteToFile:(id)arg1 atomically:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4;
- (BOOL)MCSCWriteToURL:(id)arg1 atomically:(BOOL)arg2 error:(id*)arg3;
- (BOOL)MCSCWriteToURL:(id)arg1 atomically:(BOOL)arg2 mode:(unsigned short)arg3 error:(id*)arg4;
- (id)MCShortenedPlistDescription;

// Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote

- (BOOL)MR_isEqualToNowPlayingInfo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Message.framework/Message

- (BOOL)mf_boolForKey:(id)arg1;
- (int)mf_integerForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup

- (id)setOfAllObjects;

// Image: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings

+ (id)dictionaryWithComplication:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoGlanceSettings.framework/NanoGlanceSettings

+ (id)dictionaryWithGlance:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit

+ (id)npkRelevancyTupleWithUniqueID:(id)arg1 relevantText:(id)arg2;

- (id)npkRelevancyRelevantText;
- (id)npkRelevancyUniqueID;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

- (id)na_dictionaryByMappingValues:(id /* block */)arg1;
- (id)na_filter:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

+ (id)fc_dictionary:(id /* block */)arg1;
+ (id)fc_dictionaryByAddingEntriesFromDictionary:(id)arg1 toDictionary:(id)arg2;
+ (id)fc_dictionaryFromArray:(id)arg1 keyBlock:(id /* block */)arg2 valueBlock:(id /* block */)arg3;
+ (id)fc_dictionaryFromJSON:(id)arg1;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueBlock:(id /* block */)arg2;
+ (id)fc_dictionaryWithKeys:(id)arg1 valueWithIndexBlock:(id /* block */)arg2;
+ (id)fc_dictionaryWithObjects:(id)arg1 keyBlock:(id /* block */)arg2;

- (id)fc_actionTypes;
- (id)fc_deepCopy;
- (id)fc_dictionaryByRemovingObjectForKey:(id)arg1;
- (id)fc_dictionaryBySwappingValuesAndKeys;
- (id)fc_dictionaryByTransformingKeysWithBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingKeysWithKeyAndValueBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingValuesWithBlock:(id /* block */)arg1;
- (id)fc_dictionaryByTransformingValuesWithKeyAndValueBlock:(id /* block */)arg1;
- (BOOL)fc_localDataHint;
- (id)fc_objectsForKeysWithoutMarker:(id)arg1;
- (id)fc_subdictionaryWithCopiesForKeys:(id)arg1;
- (id)fc_subdictionaryWithKeys:(id)arg1;
- (id)fr_descriptionWithKeyComparator:(id /* block */)arg1;
- (id)jsonString;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (id)stringFromQueryComponents;

// Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport

+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;

- (void)sfu_appendJsonStringToString:(id)arg1;
- (BOOL)tsu_boolValueForKey:(id)arg1;
- (id)tsu_objectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /System/Library/PrivateFrameworks/Parsec.framework/Parsec

- (id)prs_URLForKey:(id)arg1;
- (id)prs_arrayForKey:(id)arg1;
- (id)prs_arrayWithClass:(Class)arg1 forKey:(id)arg2;
- (BOOL)prs_boolForKey:(id)arg1;
- (id)prs_dataForKey:(id)arg1;
- (id)prs_dateForKey:(id)arg1;
- (id)prs_dictionaryForKey:(id)arg1;
- (float)prs_floatForKey:(id)arg1;
- (int)prs_intForKey:(id)arg1;
- (int)prs_integerForKey:(id)arg1;
- (id)prs_numberForKey:(id)arg1;
- (id)prs_objectWithClass:(Class)arg1 forKey:(id)arg2;
- (id)prs_objectWithClassArray:(Class)arg1 forKey:(id)arg2;
- (id)prs_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (id)PKArrayContaining:(Class)arg1 forKey:(id)arg2;
- (id)PKArrayForKey:(id)arg1;
- (BOOL)PKBoolForKey:(id)arg1;
- (id)PKColorForKey:(id)arg1;
- (id)PKDateForKey:(id)arg1;
- (id)PKDecimalNumberForKey:(id)arg1;
- (id)PKDictionaryForKey:(id)arg1;
- (double)PKDoubleForKey:(id)arg1;
- (int)PKIntegerForKey:(id)arg1;
- (id)PKNumberForKey:(id)arg1;
- (id)PKSetContaining:(Class)arg1 forKey:(id)arg2;
- (id)PKSetForKey:(id)arg1;
- (id)PKStringForKey:(id)arg1;
- (id)PKURLForKey:(id)arg1;
- (id)PKUUIDForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport

- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })bl_affineTransformForKey:(id)arg1;
- (BOOL)bl_boolForKey:(id)arg1;
- (BOOL)bl_boolForKey:(id)arg1 defaultValue:(BOOL)arg2;
- (id)bl_dictionaryByRemovingValuesForKey:(id)arg1;
- (id)bl_dictionaryBySwappingValuesWithDictionary:(id)arg1;
- (double)bl_doubleForKey:(id)arg1;
- (double)bl_doubleForKey:(id)arg1 defaultValue:(double)arg2;
- (float)bl_floatForKey:(id)arg1;
- (float)bl_floatForKey:(id)arg1 defaultValue:(float)arg2;
- (int)bl_intForKey:(id)arg1;
- (int)bl_intForKey:(id)arg1 defaultValue:(int)arg2;
- (int)bl_integerForKey:(id)arg1;
- (int)bl_integerForKey:(id)arg1 defaultValue:(int)arg2;
- (id)bl_nonRetainedObjectForKey:(id)arg1;
- (id)bl_objectForIndex:(int)arg1;
- (id)bl_objectForKey:(id)arg1 defaultValue:(id)arg2;
- (id)bl_objectOrNullForKey:(id)arg1;
- (struct CGPoint { float x1; float x2; })bl_pointFromStringForKey:(id)arg1;
- (struct CGPoint { float x1; float x2; })bl_pointFromStringForKey:(id)arg1 defaultValue:(struct CGPoint { float x1; float x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bl_rectForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bl_rectForKey:(id)arg1 defaultValue:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bl_rectFromStringForKey:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bl_rectFromStringForKey:(id)arg1 defaultValue:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;

// Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit

- (id)dictionaryChanging:(id)arg1 to:(id)arg2;

// Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore

- (id)descriptionSingleLine;
- (id)objectForCFString:(struct __CFString { }*)arg1;
- (id)objectForNullMarkerForKey:(id)arg1;
- (id)objectOrNullMarkerForCFString:(struct __CFString { }*)arg1;

// Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences

- (BOOL)writeToProtectedFile:(id)arg1 atomically:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI

- (int)_compareBundleDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

- (id)_sa_mappedDictionaryWithBlock:(id /* block */)arg1;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (id)safari_dictionaryWithContentsOfData:(id)arg1 options:(unsigned int)arg2;
+ (id)safari_dictionaryWithPropertyListData:(id)arg1;
+ (id)safari_dictionaryWithPropertyListData:(id)arg1 options:(unsigned int)arg2;

- (id)safari_URLForKey:(id)arg1;
- (id)safari_UUIDForKey:(id)arg1;
- (id)safari_arrayForKey:(id)arg1;
- (BOOL)safari_boolForKey:(id)arg1;
- (id)safari_dataForKey:(id)arg1;
- (id)safari_dateForKey:(id)arg1;
- (id)safari_dictionaryForKey:(id)arg1;
- (id)safari_mapAndFilterKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)safari_numberForKey:(id)arg1;
- (id)safari_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol

+ (id)sd_dictionaryFromDictionary:(id)arg1 forKeys:(id)arg2;

- (id)sd_dictionaryForKeys:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (id)postFormData;
- (id)stringifyArguments:(id)arg1 requireEncoding:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

- (id)safeObjectForKey:(id)arg1 ofClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks

- (id)yql_objectForKey:(id)arg1 ofClass:(Class)arg2;

// Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI

+ (id)sk_dictionaryWithSize:(struct CGSize { float x1; float x2; })arg1;

// Image: /System/Library/PrivateFrameworks/Swift/libswiftFoundation.dylib

- (id)_swiftInitWithDictionary_NSDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities

- (id)asQueryParameterString;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)_accessibilityLeafDescendantsWithCount:(unsigned int)arg1 shouldStopAtRemoteElement:(BOOL)arg2 options:(id)arg3 treeLogger:(id)arg4;
- (id)_rearrangeKeyboardIfNecessaryWithOriginalArray:(id)arg1 processedArray:(id)arg2;

// Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })uns_CGRectForKey:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })uns_CMTimeForKey:(id)arg1;
- (id)uns_nonEmptyCopy;
- (id)uns_nonNilArrayForKey:(id)arg1;
- (id)uns_nonNilDictionaryForKey:(id)arg1;
- (id)uns_nonNilStringForKey:(id)arg1;
- (id)uns_notificationIdentifier;
- (id)uns_safeCastObjectForKey:(id)arg1 class:(Class)arg2;
- (id)uns_safeCastObjectForKey:(id)arg1 classes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing

+ (id)vcp_exifFromImageURL:(id)arg1;

- (id)vcp_dateAnalyzed;
- (id)vcp_dateModified;
- (BOOL)vcp_degraded;
- (id)vcp_fingerprint;
- (unsigned int)vcp_flags;
- (BOOL)vcp_flashFired;
- (double)vcp_quality;
- (id)vcp_results;
- (float)vcp_scaledExposureTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })vcp_syncPoint;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })vcp_timerange;
- (unsigned int)vcp_types;
- (int)vcp_version;

// Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail

- (BOOL)writeToFile:(id)arg1 options:(unsigned int)arg2 error:(id*)arg3;

// Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation

- (id)wf_URLForKeyPath:(id)arg1;
- (id)wf_arrayForKeyPath:(id)arg1;
- (id)wf_dictionaryForKeyPath:(id)arg1;
- (double)wf_doubleForKeyPath:(id)arg1;
- (float)wf_floatForKeyPath:(id)arg1;
- (int)wf_integerForKeyPath:(id)arg1;
- (id)wf_numberForKeyPath:(id)arg1;
- (id)wf_objectForKeyPath:(id)arg1;
- (id)wf_objectOfKind:(Class)arg1 forKeyPath:(id)arg2;
- (id)wf_stringForKeyPath:(id)arg1;
- (id)wf_temperatureWithCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2;

// Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks

- (id)wb_arrayForKey:(id)arg1 isValid:(BOOL*)arg2;
- (BOOL)wb_boolForKey:(id)arg1;
- (id)wb_dictionaryForKey:(id)arg1 isValid:(BOOL*)arg2;
- (id)wb_numberForKey:(id)arg1;
- (id)wb_numberForKey:(id)arg1 isValid:(BOOL*)arg2;
- (id)wb_objectOfType:(Class)arg1 forKey:(id)arg2 isValid:(BOOL*)arg3;
- (id)wb_stringForKey:(id)arg1 isValid:(BOOL*)arg2;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

- (id)_webkit_arrayForKey:(id)arg1;
- (BOOL)_webkit_boolForKey:(id)arg1;
- (int)_webkit_intForKey:(id)arg1;
- (id)_webkit_numberForKey:(id)arg1;
- (id)_webkit_objectForMIMEType:(id)arg1;
- (id)_webkit_stringForKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/YouTube.framework/YouTube

- (BOOL)writeToProtectedFile:(id)arg1 atomically:(BOOL)arg2;

// Image: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport

- (id)blj_dictionaryByRemovingValuesForKey:(id)arg1;
- (id)blj_dictionaryBySwappingValuesWithDictionary:(id)arg1;

// Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI

- (int)iterations;
- (float)offset;
- (id)scriptEntry;
- (id)scriptPath;
- (SEL)setupSelector;
- (SEL)testSelector;

// Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport

+ (id)tsp_decoderDataInfoDictionaryFromMessage:(const struct RepeatedPtrField<TSP::DataInfo> { void **x1; int x2; int x3; int x4; }*)arg1;
+ (id)tsp_identifierToObjectUUIDDictionaryFromMessage:(const struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x1; int x2; int x3; int x4; }*)arg1;
+ (id)tsp_identifierToObjectUUIDDictionaryFromWeakExternalReferences:(id)arg1 updatingComponentInfo:(struct ComponentInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; unsigned long long x5; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x6; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *x7; struct RepeatedField<unsigned int> { unsigned int *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedField<unsigned int> { unsigned int *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; struct RepeatedPtrField<TSP::ComponentExternalReference> { void **x_12_1_1; int x_12_1_2; int x_12_1_3; int x_12_1_4; } x12; struct RepeatedPtrField<TSP::ComponentDataReference> { void **x_13_1_1; int x_13_1_2; int x_13_1_3; int x_13_1_4; } x13; struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x_14_1_1; int x_14_1_2; int x_14_1_3; int x_14_1_4; } x14; struct RepeatedPtrField<TSP::FeatureInfo> { void **x_15_1_1; int x_15_1_2; int x_15_1_3; int x_15_1_4; } x15; }*)arg2 failIfReferenceIsNotPersisted:(BOOL)arg3 context:(id)arg4 error:(id*)arg5;
+ (id)tsu_dictionaryByInvertingDictionary:(id)arg1;

- (void)sfu_appendJsonStringToString:(id)arg1;
- (void)tsp_saveIdentifierToObjectUUIDDictionaryToMessage:(struct RepeatedPtrField<TSP::ObjectUUIDMapEntry> { void **x1; int x2; int x3; int x4; }*)arg1;
- (id)tsu_allKeysAsSet;
- (BOOL)tsu_boolValueForKey:(id)arg1;
- (id)tsu_objectOfClass:(Class)arg1 forKey:(id)arg2;

// Image: /usr/lib/libprequelite.dylib

- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
