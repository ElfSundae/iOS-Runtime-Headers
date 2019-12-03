/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBApplicationPlaceholder : NSObject <BSInvalidatable, FBSApplicationPlaceholderObserver, SBDownloadingIconDataSource> {
    <SBApplicationPlaceholderDelegate> * _delegate;
    NSMutableSet * _formatsPendingGeneration;
    NSMutableDictionary * _generatedIconImagesByKey;
    bool  _invalidated;
    FBSApplicationPlaceholder * _placeholderProxy;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly, copy) NSString *applicationBundleID;
@property (nonatomic, readonly, copy) NSString *applicationDisplayName;
@property (getter=isCancelable, nonatomic, readonly) bool cancelable;
@property (getter=isCloudDemoted, nonatomic, readonly) bool cloudDemoted;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBApplicationPlaceholderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDownloading, nonatomic, readonly) bool downloading;
@property (getter=isFailed, nonatomic, readonly) bool failed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class iconClass;
@property (getter=isInstalling, nonatomic, readonly) bool installing;
@property (getter=isPausable, nonatomic, readonly) bool pausable;
@property (getter=isPaused, nonatomic, readonly) bool paused;
@property (nonatomic, readonly) FBSApplicationPlaceholder *placeholderProxy;
@property (getter=isPrioritizable, nonatomic, readonly) bool prioritizable;
@property (readonly) Class superclass;
@property (getter=isWaiting, nonatomic, readonly) bool waiting;

+ (id)backgroundQueue;

- (void).cxx_destruct;
- (void)_generateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (void)_generatePendingIconFormats;
- (id)_getOrGenerateIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg1;
- (id)_iconImageKeyForBundleID:(id)arg1 info:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (void)_progressChanged;
- (void)_reloadThumbnailImage;
- (bool)_shouldDisplayAppName;
- (bool)_shouldDisplayAppNameAtIconLocation:(id)arg1;
- (long long)accessoryTypeForIcon:(id)arg1;
- (id)applicationBundleID;
- (id)applicationDisplayName;
- (id)badgeNumberOrStringForIcon:(id)arg1;
- (bool)cancel;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)formattedAccessoryStringForIcon:(id)arg1;
- (id)icon:(id)arg1 displayNameForLocation:(id)arg2;
- (id)icon:(id)arg1 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg2;
- (bool)icon:(id)arg1 launchFromLocation:(id)arg2 context:(id)arg3;
- (bool)iconCanTightenLabel:(id)arg1;
- (bool)iconCanTruncateLabel:(id)arg1;
- (Class)iconClass;
- (bool)iconCompleteUninstall:(id)arg1;
- (bool)iconSupportsUninstall:(id)arg1;
- (id)initWithPlaceholderProxy:(id)arg1;
- (unsigned long long)installType;
- (void)invalidate;
- (bool)isActive;
- (bool)isCancelable;
- (bool)isCloudDemoted;
- (bool)isDone;
- (bool)isDownloading;
- (bool)isEqual:(id)arg1;
- (bool)isFailed;
- (bool)isInstalling;
- (bool)isPausable;
- (bool)isPaused;
- (bool)isPrioritizable;
- (bool)isProgressPausedForIcon:(id)arg1;
- (bool)isStoreDownload;
- (bool)isWaiting;
- (long long)labelAccessoryTypeForIcon:(id)arg1;
- (bool)pause;
- (void)placeholderDidChangeSignificantly:(id)arg1;
- (void)placeholderProgressDidUpdate:(id)arg1;
- (id)placeholderProxy;
- (bool)prioritize;
- (unsigned long long)priorityForIcon:(id)arg1;
- (double)progressPercentForIcon:(id)arg1;
- (long long)progressStateForIcon:(id)arg1;
- (bool)resume;
- (void)setDelegate:(id)arg1;

@end
