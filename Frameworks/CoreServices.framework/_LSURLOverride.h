/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSURLOverride : NSObject {
    NSURL * _originalURL;
    NSURL * _overrideURL;
}

@property (nonatomic, readonly) NSURL *originalURL;
@property (nonatomic, readonly, copy) NSURL *overrideURL;

+ (void)addOverrideBlock:(id /* block */)arg1;
+ (id)bizURL:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (id)fmfURL:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (id)fmipURL:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (id)iCloudEmailPrefsURL:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (id)iCloudFamilyURL:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (id)iCloudSchoolworkURL:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (id)iCloudSharingURL:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (id)iCloudSharingURL_noFragment:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (id)iTunesStoreURL:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (id)keynoteLiveURL:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (id)keynoteLiveURL_noFragment:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (id)new;
+ (id)photosURL:(struct State { id x1; bool x2; bool x3; bool x4; bool x5; bool x6; bool x7; }*)arg1;
+ (void)removeAllOverrideBlocks;
+ (void)resetPlatformFlag;
+ (void)setUseMacOverrides:(bool)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithOriginalURL:(id)arg1;
- (id)initWithOriginalURL:(id)arg1 checkingForAvailableApplications:(bool)arg2;
- (id)initWithOriginalURL:(id)arg1 checkingForAvailableApplications:(bool)arg2 newsOnly:(bool)arg3;
- (id)initWithOriginalURL:(id)arg1 newsOnly:(bool)arg2;
- (id)originalURL;
- (id)overrideURL;

@end
