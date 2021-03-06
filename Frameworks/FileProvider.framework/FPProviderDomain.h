/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPProviderDomain : NSObject <NSCopying, NSSecureCoding> {
    bool  _canDisable;
    NSFileProviderDomain * _domain;
    bool  _ejectable;
    bool  _enabled;
    NSURL * _extensionBundleURL;
    bool  _hidden;
    NSString * _identifier;
    bool  _isAvailableSystemWide;
    bool  _isConnectedToAppExtension;
    FPItemCollection * _itemCollection;
    bool  _keepLocalStorageUpToDate;
    NSFileProviderManager * _manager;
    bool  _needsAuthentication;
    NSProgress * _progress;
    NSString * _providerDisplayName;
    NSString * _providerID;
    NSString * _purposeIdentifier;
    bool  _readOnly;
    bool  _shouldHideDomainDisplayName;
    bool  _shouldHideExtensionName;
    NSArray * _storageURLs;
    NSArray * _supportedFileTypes;
    NSArray * _supportedSearchFilters;
    bool  _supportsEnumeration;
    bool  _supportsPickingFolders;
    NSString * _topLevelBundleIdentifier;
    bool  _usesUniqueItemIdentifiersAcrossDevices;
    NSString * _version;
}

@property (nonatomic) bool canDisable;
@property (nonatomic, readonly) bool canDisconnect;
@property (nonatomic, readonly) NSString *containingBundleIdentifier;
@property (nonatomic, readonly) bool containsPhotos;
@property (nonatomic, retain) NSFileProviderDomain *domain;
@property (nonatomic, readonly) NSString *domainDisplayName;
@property (nonatomic, readonly) NSString *domainFullDisplayName;
@property (getter=isEjectable, nonatomic) bool ejectable;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, retain) NSURL *extensionBundleURL;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) NSString *iCloudAccountIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) bool isAvailableSystemWide;
@property (nonatomic) bool isConnectedToAppExtension;
@property (nonatomic, readonly) bool isMainiCloudDriveDomain;
@property (nonatomic, readonly) bool isiCloudDriveProvider;
@property (nonatomic, readonly) NSFileProviderManager *manager;
@property (nonatomic) bool needsAuthentication;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, retain) NSString *providerDisplayName;
@property (nonatomic, readonly) NSString *providerID;
@property (nonatomic, retain) NSString *purposeIdentifier;
@property (getter=isReadOnly, nonatomic) bool readOnly;
@property (nonatomic) bool shouldHideDomainDisplayName;
@property (nonatomic) bool shouldHideExtensionName;
@property (readonly) NSString *spotlightMountPoint;
@property (nonatomic, retain) NSArray *storageURLs;
@property (nonatomic, retain) NSArray *supportedFileTypes;
@property (nonatomic, retain) NSArray *supportedSearchFilters;
@property (nonatomic) bool supportsEnumeration;
@property (nonatomic) bool supportsPickingFolders;
@property (nonatomic, retain) NSString *topLevelBundleIdentifier;
@property (nonatomic) bool usesUniqueItemIdentifiersAcrossDevices;
@property (nonatomic, retain) NSString *version;

+ (id)beginMonitoringProviderDomainChangesWithHandler:(id /* block */)arg1;
+ (void)endMonitoringProviderDomainChanges:(id)arg1;
+ (void)fetchProviderDomainForItem:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)fetchProviderDomainWithID:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)providerDomainForItem:(id)arg1 error:(id*)arg2;
+ (id)providerDomainForURL:(id)arg1 error:(id*)arg2;
+ (id)providerDomainWithID:(id)arg1 error:(id*)arg2;
+ (id)providerDomainsWithError:(id*)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleURL;
- (bool)canDisable;
- (bool)canDisconnect;
- (id)containingBundleIdentifier;
- (bool)containsPhotos;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)domain;
- (id)domainDisplayName;
- (id)domainFullDisplayName;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)extensionBundleIdentifier;
- (id)extensionBundleURL;
- (unsigned long long)hash;
- (id)iCloudAccountIdentifier;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProviderID:(id)arg1 domain:(id)arg2;
- (bool)isAvailableSystemWide;
- (bool)isConnectedToAppExtension;
- (bool)isEjectable;
- (bool)isEmpty;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isMainiCloudDriveDomain;
- (bool)isReadOnly;
- (bool)isiCloudDriveProvider;
- (id)localizedName;
- (id)localizedTitleForSortDescriptor:(id)arg1;
- (id)manager;
- (bool)needsAuthentication;
- (id)progress;
- (id)providerDisplayName;
- (id)providerID;
- (id)providerIdentifier;
- (id)purposeIdentifier;
- (void)setCanDisable:(bool)arg1;
- (void)setDomain:(id)arg1;
- (void)setEjectable:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setExtensionBundleURL:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIsAvailableSystemWide:(bool)arg1;
- (void)setIsConnectedToAppExtension:(bool)arg1;
- (void)setNeedsAuthentication:(bool)arg1;
- (void)setProgress:(id)arg1;
- (void)setProviderDisplayName:(id)arg1;
- (void)setPurposeIdentifier:(id)arg1;
- (void)setReadOnly:(bool)arg1;
- (void)setShouldHideDomainDisplayName:(bool)arg1;
- (void)setShouldHideExtensionName:(bool)arg1;
- (void)setStorageURLs:(id)arg1;
- (void)setSupportedFileTypes:(id)arg1;
- (void)setSupportedSearchFilters:(id)arg1;
- (void)setSupportsEnumeration:(bool)arg1;
- (void)setSupportsPickingFolders:(bool)arg1;
- (void)setTopLevelBundleIdentifier:(id)arg1;
- (void)setUsesUniqueItemIdentifiersAcrossDevices:(bool)arg1;
- (void)setVersion:(id)arg1;
- (bool)shouldHideDomainDisplayName;
- (bool)shouldHideExtensionName;
- (id)spotlightMountPoint;
- (id)storageURL;
- (id)storageURLs;
- (id)supportedFileTypes;
- (id)supportedSearchFilters;
- (bool)supportsEnumeration;
- (bool)supportsPickingFolders;
- (id)topLevelBundleIdentifier;
- (bool)usesUniqueItemIdentifiersAcrossDevices;
- (id)version;

@end
