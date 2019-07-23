/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMArchiveManager : NSObject <TCCancelDelegate> {
    BOOL  mAutoCommit;
    float  mCommitInterval;
    NSMutableDictionary * mDrawableCache;
    int  mHeight;
    BOOL  mIsOnPhone;
    BOOL  mIsThumbnail;
    unsigned int  mPageCount;
    NSString * mPassphrase;
    NSMutableSet * mPausedPaths;
    NSString * mResourcePathPrefix;
    NSCache * mStyleObjectCache;
    int  mWidth;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (copy) NSString *passphrase;
@property (readonly) Class superclass;

+ (int)blipTypeToResourceType:(int)arg1;
+ (id)resourceTypeToExtension:(int)arg1;
+ (id)resourceTypeToMIME:(int)arg1;

- (id)_validateData:(id)arg1 withType:(int*)arg2;
- (id)addCssStyle:(id)arg1;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addResource:(id)arg1 withName:(id)arg2;
- (id)addResource:(id)arg1 withType:(int)arg2;
- (id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3;
- (id)addStyle:(id)arg1;
- (id)appendResourcePathToName:(id)arg1;
- (id)cachedPathForDrawable:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (id)copyResourceWithName:(id)arg1;
- (id)copyResourceWithType:(int)arg1;
- (id)cssStylesheetString;
- (void)dealloc;
- (id)init;
- (BOOL)isCancelled;
- (BOOL)isOnPhone;
- (BOOL)isProgressive;
- (BOOL)isThumbnail;
- (unsigned int)pageCount;
- (id)passphrase;
- (void)pauseProgressiveMappingOnPath:(id)arg1;
- (BOOL)progressiveMappingIsPausedOnPath:(id)arg1;
- (void)pushCssToPath:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (unsigned int)resourceCount;
- (id)resourcePathPrefix;
- (void)restartProgressiveMappingOnPath:(id)arg1;
- (void)setAutoCommit:(BOOL)arg1;
- (void)setCommitInterval:(float)arg1;
- (void)setHTMLHeight:(int)arg1;
- (void)setHTMLWidth:(int)arg1;
- (void)setIsOnPhone:(BOOL)arg1;
- (void)setIsThumbnail:(BOOL)arg1;
- (void)setPageCount:(unsigned int)arg1;
- (void)setPassphrase:(id)arg1;
- (void)setResourcePathPrefix:(id)arg1;

@end
