/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoSkipThresholdObserverFactory : NSObject <SXVideoSkipThresholdObserverFactory> {
    <SXVideoLoadingStateObserverFactory> * _loadingStateObserverFactory;
    <SXPlaybackCoordinatorProviding> * _playbackCoordinatorProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXVideoLoadingStateObserverFactory> *loadingStateObserverFactory;
@property (nonatomic, readonly) <SXPlaybackCoordinatorProviding> *playbackCoordinatorProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createThresholdObserverForVideo:(id)arg1;
- (id)initWithPlaybackCoordinatorProvider:(id)arg1 loadingStateObserverFactory:(id)arg2;
- (id)loadingStateObserverFactory;
- (id)playbackCoordinatorProvider;

@end
