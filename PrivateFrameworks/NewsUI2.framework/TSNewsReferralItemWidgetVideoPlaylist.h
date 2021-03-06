/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface TSNewsReferralItemWidgetVideoPlaylist : NSObject {
    void discoverMoreVideosInfo;
    void onboardingVersion;
    void preferredMuteState;
    void prerollLoadingTimeout;
    void videoGroupsConfig;
    void widgetArticleList;
}

@property (nonatomic, readonly) NTPBDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (nonatomic, readonly) long long onboardingVersion;
@property (nonatomic, readonly) bool preferredMuteState;
@property (nonatomic, readonly) double prerollLoadingTimeout;
@property (nonatomic, readonly) FCVideoGroupsConfig *videoGroupsConfig;
@property (nonatomic, readonly) TSNewsReferralItemWidgetArticleList *widgetArticleList;

- (void).cxx_destruct;
- (id)discoverMoreVideosInfo;
- (id)init;
- (id)initWithWidgetArticleList:(id)arg1 preferredMuteState:(bool)arg2 videoGroupsConfig:(id)arg3 discoverMoreVideosInfo:(id)arg4 prerollLoadingTimeout:(double)arg5 onboardingVersion:(long long)arg6;
- (long long)onboardingVersion;
- (bool)preferredMuteState;
- (double)prerollLoadingTimeout;
- (id)videoGroupsConfig;
- (id)widgetArticleList;

@end
