/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFClientConfigurationMutation : NSObject <AFClientConfigurationMutating> {
    AFAccessibilityState * _accessibilityState;
    AFClientConfiguration * _baseModel;
    long long  _deviceRingerSwitchState;
    bool  _isDeviceInCarDNDMode;
    bool  _isDeviceInSetupFlow;
    bool  _isDeviceInStarkMode;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasAccessibilityState : 1; 
        unsigned int hasDeviceRingerSwitchState : 1; 
        unsigned int hasIsDeviceInSetupFlow : 1; 
        unsigned int hasIsDeviceInCarDNDMode : 1; 
        unsigned int hasIsDeviceInStarkMode : 1; 
        unsigned int hasOutputVolume : 1; 
        unsigned int hasTapToSiriAudioPlaybackRequest : 1; 
        unsigned int hasTwoShotAudioPlaybackRequest : 1; 
    }  _mutationFlags;
    float  _outputVolume;
    AFAudioPlaybackRequest * _tapToSiriAudioPlaybackRequest;
    AFAudioPlaybackRequest * _twoShotAudioPlaybackRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setAccessibilityState:(id)arg1;
- (void)setDeviceRingerSwitchState:(long long)arg1;
- (void)setIsDeviceInCarDNDMode:(bool)arg1;
- (void)setIsDeviceInSetupFlow:(bool)arg1;
- (void)setIsDeviceInStarkMode:(bool)arg1;
- (void)setOutputVolume:(float)arg1;
- (void)setTapToSiriAudioPlaybackRequest:(id)arg1;
- (void)setTwoShotAudioPlaybackRequest:(id)arg1;

@end
