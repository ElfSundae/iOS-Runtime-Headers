/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUISettingsManager : NSObject {
    NSNumber * _maxMovieRank;
    NSNumber * _maxTVShowRank;
    NSString * _preferredVideoFormat;
}

@property (nonatomic, copy) NSNumber *maxMovieRank;
@property (nonatomic, copy) NSNumber *maxTVShowRank;
@property (nonatomic, copy) NSString *preferredVideoFormat;
@property (nonatomic, readonly) NSString *restrictions;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_formatStringForVideoFormat:(unsigned long long)arg1;
- (bool)_hasPreferredVideoFormatChanged;
- (bool)_hasRestrictionsChanged;
- (id)_init;
- (unsigned long long)_preferredVideoFormat;
- (id)_restrictionsMaximumEffectiveMovieRanking;
- (id)_restrictionsMaximumEffectiveTVShowRanking;
- (void)_sendSettingsValuesToJS;
- (void)checkAndUpdateSettings;
- (id)init;
- (id)maxMovieRank;
- (id)maxTVShowRank;
- (id)preferencesJSONData;
- (id)preferredVideoFormat;
- (id)restrictions;
- (void)setMaxMovieRank:(id)arg1;
- (void)setMaxTVShowRank:(id)arg1;
- (void)setPreferredVideoFormat:(id)arg1;

@end
