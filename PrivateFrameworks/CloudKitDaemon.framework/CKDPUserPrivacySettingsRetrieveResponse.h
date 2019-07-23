/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable <NSCopying> {
    NSMutableArray * _applicationBundles;
    CKDPUserPrivacySettings * _userPrivacySettings;
}

@property (nonatomic, retain) NSMutableArray *applicationBundles;
@property (nonatomic, readonly) bool hasUserPrivacySettings;
@property (nonatomic, retain) CKDPUserPrivacySettings *userPrivacySettings;

+ (Class)applicationBundleType;

- (void).cxx_destruct;
- (void)addApplicationBundle:(id)arg1;
- (id)applicationBundleAtIndex:(unsigned long long)arg1;
- (id)applicationBundles;
- (unsigned long long)applicationBundlesCount;
- (void)clearApplicationBundles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUserPrivacySettings;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApplicationBundles:(id)arg1;
- (void)setUserPrivacySettings:(id)arg1;
- (id)userPrivacySettings;
- (void)writeTo:(id)arg1;

@end
