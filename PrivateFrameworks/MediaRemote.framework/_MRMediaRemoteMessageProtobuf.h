/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRMediaRemoteMessageProtobuf : PBCodable <NSCopying> {
    _MRAuthenticationRequestMessageProtobuf *_authenticationRequestMessage;
    _MRAuthenticationResponseMessageProtobuf *_authenticationResponseMessage;
    NSString *_authenticationToken;
    _MRClientUpdatesConfigurationProtobuf *_clientUpdatesConfigMessage;
    _MRPlaybackQueueProtobuf *_contentItemsChangedNotificationMessage;
    _MRDeviceInfoMessageProtobuf *_deviceInfoMessage;
    unsigned int _errorCode;
    _MRGameControllerMessageProtobuf *_gameController;
    _MRGetKeyboardSessionProtobuf *_getKeyboardMessage;
    _MRGetStateMessageProtobuf *_getStateMessage;
    _MRGetVoiceInputDevicesMessageProtobuf *_getVoiceInputDevicesMessage;
    _MRGetVoiceInputDevicesResponseMessageProtobuf *_getVoiceInputDevicesResponseMessage;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int type : 1; 
    } _has;
    NSString *_identifier;
    _MRKeyboardMessageProtobuf *_keyboardMessage;
    _MRNotificationMessageProtobuf *_notificaitonMessage;
    _MRRegisterForGameControllerEventsMessageProtobuf *_registerForGameControllerEvents;
    _MRRegisterGameControllerMessageProtobuf *_registerGameController;
    _MRRegisterGameControllerResponseMessageProtobuf *_registerGameControllerResponse;
    _MRRegisterHIDDeviceMessageProtobuf *_registerHIDDeviceMessage;
    _MRRegisterHIDDeviceResultMessageProtobuf *_registerHIDDeviceResultMessage;
    _MRRegisterVoiceInputDeviceMessageProtobuf *_registerVoiceInputDeviceMessage;
    _MRRegisterVoiceInputDeviceResponseMessageProtobuf *_registerVoiceInputDeviceResponseMessage;
    _MRSendCommandMessageProtobuf *_sendCommandMessage;
    _MRSendCommandResultMessageProtobuf *_sendCommandResultMessage;
    _MRSendHIDEventMessageProtobuf *_sendHIDEventMessage;
    _MRSendHIDReportMessageProtobuf *_sendHIDReportMessage;
    _MRSendVirtualTouchEventMessageProtobuf *_sendVirtualTouchEventMessage;
    _MRSendVoiceInputMessageProtobuf *_sendVoiceInputMessage;
    _MRSetArtworkMessageProtobuf *_setArtworkMessage;
    _MRSetRecordingStateMessageProtobuf *_setRecordingStateMessage;
    _MRSetStateMessageProtobuf *_setStateMessage;
    _MRTextInputMessageProtobuf *_textInputMessage;
    double _timestamp;
    int _type;
    _MRUnregisterGameControllerMessageProtobuf *_unregisterGameController;
    _MRVolumeControlAvailabilityProtobuf *_volumeControlAvailabilityMessage;
}

@property (nonatomic, retain) _MRAuthenticationRequestMessageProtobuf *authenticationRequestMessage;
@property (nonatomic, retain) _MRAuthenticationResponseMessageProtobuf *authenticationResponseMessage;
@property (nonatomic, retain) NSString *authenticationToken;
@property (nonatomic, retain) _MRClientUpdatesConfigurationProtobuf *clientUpdatesConfigMessage;
@property (nonatomic, retain) _MRPlaybackQueueProtobuf *contentItemsChangedNotificationMessage;
@property (nonatomic, retain) _MRDeviceInfoMessageProtobuf *deviceInfoMessage;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic, retain) _MRGameControllerMessageProtobuf *gameController;
@property (nonatomic, retain) _MRGetKeyboardSessionProtobuf *getKeyboardMessage;
@property (nonatomic, retain) _MRGetStateMessageProtobuf *getStateMessage;
@property (nonatomic, retain) _MRGetVoiceInputDevicesMessageProtobuf *getVoiceInputDevicesMessage;
@property (nonatomic, retain) _MRGetVoiceInputDevicesResponseMessageProtobuf *getVoiceInputDevicesResponseMessage;
@property (nonatomic, readonly) BOOL hasAuthenticationRequestMessage;
@property (nonatomic, readonly) BOOL hasAuthenticationResponseMessage;
@property (nonatomic, readonly) BOOL hasAuthenticationToken;
@property (nonatomic, readonly) BOOL hasClientUpdatesConfigMessage;
@property (nonatomic, readonly) BOOL hasContentItemsChangedNotificationMessage;
@property (nonatomic, readonly) BOOL hasDeviceInfoMessage;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic, readonly) BOOL hasGameController;
@property (nonatomic, readonly) BOOL hasGetKeyboardMessage;
@property (nonatomic, readonly) BOOL hasGetStateMessage;
@property (nonatomic, readonly) BOOL hasGetVoiceInputDevicesMessage;
@property (nonatomic, readonly) BOOL hasGetVoiceInputDevicesResponseMessage;
@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, readonly) BOOL hasKeyboardMessage;
@property (nonatomic, readonly) BOOL hasNotificaitonMessage;
@property (nonatomic, readonly) BOOL hasRegisterForGameControllerEvents;
@property (nonatomic, readonly) BOOL hasRegisterGameController;
@property (nonatomic, readonly) BOOL hasRegisterGameControllerResponse;
@property (nonatomic, readonly) BOOL hasRegisterHIDDeviceMessage;
@property (nonatomic, readonly) BOOL hasRegisterHIDDeviceResultMessage;
@property (nonatomic, readonly) BOOL hasRegisterVoiceInputDeviceMessage;
@property (nonatomic, readonly) BOOL hasRegisterVoiceInputDeviceResponseMessage;
@property (nonatomic, readonly) BOOL hasSendCommandMessage;
@property (nonatomic, readonly) BOOL hasSendCommandResultMessage;
@property (nonatomic, readonly) BOOL hasSendHIDEventMessage;
@property (nonatomic, readonly) BOOL hasSendHIDReportMessage;
@property (nonatomic, readonly) BOOL hasSendVirtualTouchEventMessage;
@property (nonatomic, readonly) BOOL hasSendVoiceInputMessage;
@property (nonatomic, readonly) BOOL hasSetArtworkMessage;
@property (nonatomic, readonly) BOOL hasSetRecordingStateMessage;
@property (nonatomic, readonly) BOOL hasSetStateMessage;
@property (nonatomic, readonly) BOOL hasTextInputMessage;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (nonatomic, readonly) BOOL hasUnregisterGameController;
@property (nonatomic, readonly) BOOL hasVolumeControlAvailabilityMessage;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) _MRKeyboardMessageProtobuf *keyboardMessage;
@property (nonatomic, retain) _MRNotificationMessageProtobuf *notificaitonMessage;
@property (nonatomic, retain) _MRRegisterForGameControllerEventsMessageProtobuf *registerForGameControllerEvents;
@property (nonatomic, retain) _MRRegisterGameControllerMessageProtobuf *registerGameController;
@property (nonatomic, retain) _MRRegisterGameControllerResponseMessageProtobuf *registerGameControllerResponse;
@property (nonatomic, retain) _MRRegisterHIDDeviceMessageProtobuf *registerHIDDeviceMessage;
@property (nonatomic, retain) _MRRegisterHIDDeviceResultMessageProtobuf *registerHIDDeviceResultMessage;
@property (nonatomic, retain) _MRRegisterVoiceInputDeviceMessageProtobuf *registerVoiceInputDeviceMessage;
@property (nonatomic, retain) _MRRegisterVoiceInputDeviceResponseMessageProtobuf *registerVoiceInputDeviceResponseMessage;
@property (nonatomic, retain) _MRSendCommandMessageProtobuf *sendCommandMessage;
@property (nonatomic, retain) _MRSendCommandResultMessageProtobuf *sendCommandResultMessage;
@property (nonatomic, retain) _MRSendHIDEventMessageProtobuf *sendHIDEventMessage;
@property (nonatomic, retain) _MRSendHIDReportMessageProtobuf *sendHIDReportMessage;
@property (nonatomic, retain) _MRSendVirtualTouchEventMessageProtobuf *sendVirtualTouchEventMessage;
@property (nonatomic, retain) _MRSendVoiceInputMessageProtobuf *sendVoiceInputMessage;
@property (nonatomic, retain) _MRSetArtworkMessageProtobuf *setArtworkMessage;
@property (nonatomic, retain) _MRSetRecordingStateMessageProtobuf *setRecordingStateMessage;
@property (nonatomic, retain) _MRSetStateMessageProtobuf *setStateMessage;
@property (nonatomic, retain) _MRTextInputMessageProtobuf *textInputMessage;
@property (nonatomic) double timestamp;
@property (nonatomic) int type;
@property (nonatomic, retain) _MRUnregisterGameControllerMessageProtobuf *unregisterGameController;
@property (nonatomic, retain) _MRVolumeControlAvailabilityProtobuf *volumeControlAvailabilityMessage;

- (id)authenticationRequestMessage;
- (id)authenticationResponseMessage;
- (id)authenticationToken;
- (id)clientUpdatesConfigMessage;
- (id)contentItemsChangedNotificationMessage;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceInfoMessage;
- (id)dictionaryRepresentation;
- (unsigned int)errorCode;
- (id)gameController;
- (id)getKeyboardMessage;
- (id)getStateMessage;
- (id)getVoiceInputDevicesMessage;
- (id)getVoiceInputDevicesResponseMessage;
- (BOOL)hasAuthenticationRequestMessage;
- (BOOL)hasAuthenticationResponseMessage;
- (BOOL)hasAuthenticationToken;
- (BOOL)hasClientUpdatesConfigMessage;
- (BOOL)hasContentItemsChangedNotificationMessage;
- (BOOL)hasDeviceInfoMessage;
- (BOOL)hasErrorCode;
- (BOOL)hasGameController;
- (BOOL)hasGetKeyboardMessage;
- (BOOL)hasGetStateMessage;
- (BOOL)hasGetVoiceInputDevicesMessage;
- (BOOL)hasGetVoiceInputDevicesResponseMessage;
- (BOOL)hasIdentifier;
- (BOOL)hasKeyboardMessage;
- (BOOL)hasNotificaitonMessage;
- (BOOL)hasRegisterForGameControllerEvents;
- (BOOL)hasRegisterGameController;
- (BOOL)hasRegisterGameControllerResponse;
- (BOOL)hasRegisterHIDDeviceMessage;
- (BOOL)hasRegisterHIDDeviceResultMessage;
- (BOOL)hasRegisterVoiceInputDeviceMessage;
- (BOOL)hasRegisterVoiceInputDeviceResponseMessage;
- (BOOL)hasSendCommandMessage;
- (BOOL)hasSendCommandResultMessage;
- (BOOL)hasSendHIDEventMessage;
- (BOOL)hasSendHIDReportMessage;
- (BOOL)hasSendVirtualTouchEventMessage;
- (BOOL)hasSendVoiceInputMessage;
- (BOOL)hasSetArtworkMessage;
- (BOOL)hasSetRecordingStateMessage;
- (BOOL)hasSetStateMessage;
- (BOOL)hasTextInputMessage;
- (BOOL)hasTimestamp;
- (BOOL)hasType;
- (BOOL)hasUnregisterGameController;
- (BOOL)hasVolumeControlAvailabilityMessage;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (id)keyboardMessage;
- (void)mergeFrom:(id)arg1;
- (id)notificaitonMessage;
- (BOOL)readFrom:(id)arg1;
- (id)registerForGameControllerEvents;
- (id)registerGameController;
- (id)registerGameControllerResponse;
- (id)registerHIDDeviceMessage;
- (id)registerHIDDeviceResultMessage;
- (id)registerVoiceInputDeviceMessage;
- (id)registerVoiceInputDeviceResponseMessage;
- (id)sendCommandMessage;
- (id)sendCommandResultMessage;
- (id)sendHIDEventMessage;
- (id)sendHIDReportMessage;
- (id)sendVirtualTouchEventMessage;
- (id)sendVoiceInputMessage;
- (id)setArtworkMessage;
- (void)setAuthenticationRequestMessage:(id)arg1;
- (void)setAuthenticationResponseMessage:(id)arg1;
- (void)setAuthenticationToken:(id)arg1;
- (void)setClientUpdatesConfigMessage:(id)arg1;
- (void)setContentItemsChangedNotificationMessage:(id)arg1;
- (void)setDeviceInfoMessage:(id)arg1;
- (void)setErrorCode:(unsigned int)arg1;
- (void)setGameController:(id)arg1;
- (void)setGetKeyboardMessage:(id)arg1;
- (void)setGetStateMessage:(id)arg1;
- (void)setGetVoiceInputDevicesMessage:(id)arg1;
- (void)setGetVoiceInputDevicesResponseMessage:(id)arg1;
- (void)setHasErrorCode:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyboardMessage:(id)arg1;
- (void)setNotificaitonMessage:(id)arg1;
- (id)setRecordingStateMessage;
- (void)setRegisterForGameControllerEvents:(id)arg1;
- (void)setRegisterGameController:(id)arg1;
- (void)setRegisterGameControllerResponse:(id)arg1;
- (void)setRegisterHIDDeviceMessage:(id)arg1;
- (void)setRegisterHIDDeviceResultMessage:(id)arg1;
- (void)setRegisterVoiceInputDeviceMessage:(id)arg1;
- (void)setRegisterVoiceInputDeviceResponseMessage:(id)arg1;
- (void)setSendCommandMessage:(id)arg1;
- (void)setSendCommandResultMessage:(id)arg1;
- (void)setSendHIDEventMessage:(id)arg1;
- (void)setSendHIDReportMessage:(id)arg1;
- (void)setSendVirtualTouchEventMessage:(id)arg1;
- (void)setSendVoiceInputMessage:(id)arg1;
- (void)setSetArtworkMessage:(id)arg1;
- (void)setSetRecordingStateMessage:(id)arg1;
- (void)setSetStateMessage:(id)arg1;
- (id)setStateMessage;
- (void)setTextInputMessage:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(int)arg1;
- (void)setUnregisterGameController:(id)arg1;
- (void)setVolumeControlAvailabilityMessage:(id)arg1;
- (id)textInputMessage;
- (double)timestamp;
- (int)type;
- (id)unregisterGameController;
- (id)volumeControlAvailabilityMessage;
- (void)writeTo:(id)arg1;

@end
