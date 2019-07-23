/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
 */

@interface MLULookupItemContent : NSObject {
    unsigned int _commitType;
    NSURL *_commitURL;
    UIViewController *_commitViewController;
    UIViewController *_previewViewController;
    BOOL _valid;
}

@property (nonatomic) unsigned int commitType;
@property (nonatomic, retain) NSURL *commitURL;
@property (nonatomic, retain) UIViewController *commitViewController;
@property (nonatomic, readonly) CNContact *contact;
@property (nonatomic, retain) UIViewController *previewViewController;
@property BOOL valid;

+ (id)contentWithText:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
+ (id)contentWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 documentProperties:(id)arg3;

- (void).cxx_destruct;
- (id)children;
- (BOOL)commitPreviewInController:(id)arg1;
- (unsigned int)commitType;
- (id)commitURL;
- (id)commitViewController;
- (id)contact;
- (void)dismissViewController;
- (id)previewViewController;
- (id)requiredEntitlements;
- (void)setCommitType:(unsigned int)arg1;
- (void)setCommitURL:(id)arg1;
- (void)setCommitViewController:(id)arg1;
- (void)setPreviewViewController:(id)arg1;
- (void)setValid:(BOOL)arg1;
- (void)setupViewControllerInCommitMode;
- (BOOL)valid;
- (BOOL)wantsSeamlessCommit;

@end
