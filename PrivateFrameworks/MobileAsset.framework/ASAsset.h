/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface ASAsset : NSObject {
    NSString * _assetType;
    NSDictionary * _attributes;
    struct __MobileAsset { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __MobileAssetQuery {} *x4; struct __MobileAssetQuery {} *x5; unsigned char x6; } * _cfAsset;
    NSString * _clientName;
    NSDictionary * _downloadOptions;
    NSString * _identifier;
    id /* block */  _progressHandler;
    BOOL  _userInitiatedDownload;
}

@property (nonatomic, readonly) NSString *assetType;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, retain) NSString *clientName;
@property (nonatomic, retain) NSDictionary *downloadOptions;
@property (nonatomic, readonly) NSDictionary *fullAttributes;
@property (nonatomic) int garbageCollectionBehavior;
@property (nonatomic, readonly) NSDate *installDate;
@property (nonatomic, readonly) NSURL *localURL;
@property (nonatomic, copy) id /* block */ progressHandler;
@property (nonatomic, readonly) int state;
@property (nonatomic) BOOL userInitiatedDownload;

// Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset

+ (BOOL)nonUserInitiatedDownloadsAllowed;

- (void)_downloadWithOptions:(id)arg1 shouldFireCallback:(BOOL)arg2;
- (id)_getLocalAttribute:(id)arg1;
- (void)adjustDownloadOptions:(id)arg1 completion:(id /* block */)arg2;
- (int)assetStateForStateString:(id)arg1;
- (id)assetType;
- (id)attributes;
- (void)beginDownloadWithOptions:(id)arg1;
- (void)cancelDownload:(id /* block */)arg1;
- (BOOL)cancelDownloadAndReturnError:(id*)arg1;
- (id)clientName;
- (void)dealloc;
- (id)description;
- (id)downloadOptions;
- (id)fullAttributes;
- (int)garbageCollectionBehavior;
- (unsigned int)hash;
- (id)identifier;
- (id)initWithAssetType:(id)arg1 attributes:(id)arg2;
- (id)installDate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPresentOnDisk;
- (id)localURL;
- (struct __MobileAsset { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __MobileAssetQuery {} *x4; struct __MobileAssetQuery {} *x5; unsigned char x6; }*)mobileAsset;
- (void)pauseDownload:(id /* block */)arg1;
- (BOOL)pauseDownloadAndReturnError:(id*)arg1;
- (id /* block */)progressHandler;
- (void)purge:(id /* block */)arg1;
- (BOOL)purgeAndReturnError:(id*)arg1;
- (BOOL)requiredDiskSpaceIsAvailable:(long long*)arg1 error:(id*)arg2;
- (BOOL)requiredDiskSpaceIsAvailableForDownloadOptions:(id)arg1 requiredBytes:(long long*)arg2 error:(id*)arg3;
- (void)resumeDownload:(id /* block */)arg1;
- (BOOL)resumeDownloadAndReturnError:(id*)arg1;
- (void)setClientName:(id)arg1;
- (void)setDownloadOptions:(id)arg1;
- (void)setGarbageCollectionBehavior:(int)arg1;
- (void)setProgressHandler:(id /* block */)arg1;
- (void)setUserInitiatedDownload:(BOOL)arg1;
- (int)state;
- (BOOL)userInitiatedDownload;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

- (int)_contentVersion;
- (int)_formatVersion;

// Image: /System/Library/PrivateFrameworks/DictionaryUI.framework/DictionaryUI

- (int)_contentVersion;
- (int)_formatVersion;

// Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices

- (void)cancelDownloadIfNecessary;
- (void)cleanupAsset;
- (BOOL)isDownloading;
- (BOOL)isDownloadingOrInstalled;
- (BOOL)isEmergencyUpdate;
- (BOOL)isInstalled;

// Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger

- (id)description;
- (id)footprint;
- (BOOL)isDownloading;
- (BOOL)isInstalled;
- (BOOL)isLatestCompareTo:(id)arg1;
- (BOOL)isPremium;
- (id)languages;
- (id)path;
- (id)version;

// Image: /System/Library/TextInput/libTextInputCore.dylib

- (id)laterAsset:(id)arg1;

@end
