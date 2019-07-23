/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMediaRemoteDeviceImpl : NSObject <_TVRCDeviceImpl, _TVRCMROriginDelegate, _TVRXVoiceRecorderDelegate> {
    _TVRXDevice * _device;
    _TVRCMediaRemoteEventTranslator * _eventTranslator;
    unsigned long long  _gameControllerID;
    long long  _gameControllerState;
    _TVRXKeyboardController * _keyboardController;
    <_TVRXKeyboardImpl> * _keyboardImpl;
    NSSet * _mediaButtons;
    _TVRCMROriginWrapper * _origin;
    NSMutableArray * _queuedAudioBuffers;
    _TVRCMRTelevisionWrapper * _television;
    unsigned long long  _touchDeviceID;
    unsigned int  _voiceDeviceID;
    _TVRXVoiceRecorder * _voiceRecorder;
    NSSet * _volumeButtons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) _TVRXDevice *device;
@property (nonatomic, retain) _TVRCMediaRemoteEventTranslator *eventTranslator;
@property (nonatomic) unsigned long long gameControllerID;
@property (nonatomic) long long gameControllerState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _TVRXKeyboardController *keyboardController;
@property (nonatomic, retain) <_TVRXKeyboardImpl> *keyboardImpl;
@property (nonatomic, copy) NSSet *mediaButtons;
@property (nonatomic, retain) _TVRCMROriginWrapper *origin;
@property (nonatomic, retain) NSMutableArray *queuedAudioBuffers;
@property (readonly) Class superclass;
@property (nonatomic, retain) _TVRCMRTelevisionWrapper *television;
@property (nonatomic) unsigned long long touchDeviceID;
@property (nonatomic) unsigned int voiceDeviceID;
@property (nonatomic, retain) _TVRXVoiceRecorder *voiceRecorder;
@property (nonatomic, copy) NSSet *volumeButtons;

+ (id)implWithTelevision:(id)arg1;

- (void).cxx_destruct;
- (void)_addConnectionStateHandler;
- (void)_becameConnected;
- (void)_becameDisconnected:(id)arg1;
- (void)_beginObservingNowPlaying;
- (void)_connectionRequestedPairing:(struct { unsigned int x1; unsigned long long x2; })arg1 continuation:(id /* block */)arg2;
- (void)_connectionStateChanged:(unsigned int)arg1 error:(id)arg2;
- (void)_drainAndClearAudioBufferQueue;
- (void)_enableVolumeButtons:(bool)arg1;
- (void)_gameControllerInputModeChanged:(unsigned int)arg1;
- (bool)_isSystemVersionSupported;
- (void)_nameChanged:(id)arg1;
- (void)_registerGameControllerID;
- (void)_registerGameControllerInputModeHandler;
- (void)_registerTouchDevice;
- (void)_registerVoiceDeviceWithCompletion:(id /* block */)arg1;
- (void)_reloadVolumeControlAvailability;
- (void)_removeConnectionStateHandler;
- (void)_removePairingRecords;
- (void)_resetAllState;
- (void)_sendEquivalentGameButton:(id)arg1;
- (void)_setupKeyboardController;
- (void)_setupOriginIfNeeded;
- (void)_setupVoiceRecorder;
- (void)_setupVolumeControls;
- (void)_teardownVolumeControls;
- (void)_unregisterGameControllerID;
- (void)_unregisterGameControllerInputModeHandler;
- (void)_voiceRecorderStateChanged:(unsigned int)arg1;
- (void)_volumeControlsDidUpdate:(id)arg1;
- (void)connect;
- (id)createBufferWithSettings:(id)arg1 packetCapacity:(unsigned long long)arg2 maxPacketSize:(unsigned long long)arg3;
- (void)dealloc;
- (id)descriptor;
- (id)device;
- (void)disconnect;
- (id)eventTranslator;
- (unsigned long long)gameControllerID;
- (long long)gameControllerState;
- (id)identifier;
- (id)initWithTelevision:(id)arg1;
- (id)keyboardController;
- (id)keyboardImpl;
- (id)mediaButtons;
- (id)name;
- (id)origin;
- (void)origin:(id)arg1 updatedSupportedCommands:(id)arg2;
- (unsigned long long)pairingCapability;
- (id)queuedAudioBuffers;
- (void)sendButtonEvent:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1;
- (void)setAuthenticationSupported:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setEventTranslator:(id)arg1;
- (void)setGameControllerID:(unsigned long long)arg1;
- (void)setGameControllerState:(long long)arg1;
- (void)setKeyboardController:(id)arg1;
- (void)setKeyboardImpl:(id)arg1;
- (void)setMediaButtons:(id)arg1;
- (void)setOrigin:(id)arg1;
- (void)setQueuedAudioBuffers:(id)arg1;
- (void)setTelevision:(id)arg1;
- (void)setTouchDeviceID:(unsigned long long)arg1;
- (void)setVoiceDeviceID:(unsigned int)arg1;
- (void)setVoiceRecorder:(id)arg1;
- (void)setVolumeButtons:(id)arg1;
- (id)supportedButtons;
- (id)television;
- (unsigned long long)touchDeviceID;
- (unsigned int)voiceDeviceID;
- (id)voiceRecorder;
- (void)voiceRecorder:(id)arg1 bufferAvailable:(id)arg2;
- (void)voiceRecorder:(id)arg1 isAboutToBeginRecording:(id /* block */)arg2;
- (void)voidRecorderDidStop:(id)arg1;
- (id)volumeButtons;

@end
