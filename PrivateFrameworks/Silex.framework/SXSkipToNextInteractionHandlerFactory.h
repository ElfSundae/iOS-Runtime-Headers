/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXSkipToNextInteractionHandlerFactory : NSObject <SXVideoInteractionHandlerFactory> {
    <SXVideoPlaybackSkipping> * _skipper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXVideoPlaybackSkipping> *skipper;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithPlaybackSkipper:(id)arg1;
- (id)skipper;

@end
