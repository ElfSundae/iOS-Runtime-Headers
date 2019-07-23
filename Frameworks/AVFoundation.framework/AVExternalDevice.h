/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVExternalDevice : NSObject {
    AVExternalDeviceInternal * _externalDevice;
}

@property (nonatomic, readonly) NSString *ID;
@property (nonatomic, readonly) NSData *MFiCertificateSerialNumber;
@property (nonatomic, readonly) NSData *OEMIcon;
@property (nonatomic, readonly) NSString *OEMIconLabel;
@property (nonatomic, readonly) BOOL OEMIconVisible;
@property (nonatomic, readonly) NSArray *OEMIcons;
@property (nonatomic) <AVExternalDeviceDelegate> *delegate;
@property (nonatomic, readonly) int electronicTollCollection;
@property (nonatomic, readonly) NSArray *externalDeviceHIDs;
@property (nonatomic, readonly) BOOL limitedUI;
@property (nonatomic, readonly) NSArray *limitedUIElements;
@property (nonatomic, readonly) NSString *modelName;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) BOOL nightMode;
@property (nonatomic, readonly) BOOL nightModeSupported;
@property (nonatomic, readonly) BOOL ownsScreen;
@property (nonatomic, readonly) BOOL ownsTurnByTurnNavigation;
@property (nonatomic, readonly) BOOL recognizingSpeech;
@property (nonatomic, readonly) BOOL rightHandDrive;
@property (nonatomic, readonly) NSArray *screenIDs;
@property (nonatomic, readonly) NSDictionary *screenInputCapabilities;
@property (nonatomic, readonly) NSDictionary *screenPrimaryInputDevices;
@property (nonatomic, readonly) NSArray *supportedFeatures;
@property (nonatomic, readonly) int transportType;

+ (id)currentCarPlayExternalDevice;
+ (id)currentExternalDevice;
+ (id)sharedLocalDevice;

- (id)ID;
- (id)MFiCertificateSerialNumber;
- (id)OEMIcon;
- (id)OEMIconLabel;
- (BOOL)OEMIconVisible;
- (id)OEMIcons;
- (id)_figEndpointPropertyValueForKey:(struct __CFString { }*)arg1;
- (id)_screenInfo;
- (void)_triggerFakeNotificationNamed:(id)arg1 withPayload:(id)arg2;
- (id)_weakReference;
- (id)borrowScreenForClient:(id)arg1 reason:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (int)electronicTollCollection;
- (id)externalDeviceHIDWithUUID:(id)arg1;
- (id)externalDeviceHIDs;
- (struct OpaqueFigEndpoint { }*)figEndpoint;
- (void)finalize;
- (id)init;
- (id)initWithCurrentCarPlayExternalDevice;
- (id)initWithFigEndpoint:(struct OpaqueFigEndpoint { }*)arg1;
- (BOOL)limitedUI;
- (id)limitedUIElements;
- (id)modelName;
- (id)name;
- (BOOL)nightMode;
- (BOOL)nightModeSupported;
- (BOOL)ownsScreen;
- (BOOL)ownsTurnByTurnNavigation;
- (BOOL)recognizingSpeech;
- (void)requestCarUI;
- (void)requestCarUIForURL:(id)arg1;
- (id)requestTurnByTurnNavigationOwnership;
- (BOOL)rightHandDrive;
- (id)screenIDs;
- (id)screenInputCapabilities;
- (id)screenPrimaryInputDevices;
- (void)setDelegate:(id)arg1;
- (id)supportedFeatures;
- (void)takeScreenForClient:(id)arg1 reason:(id)arg2;
- (void)takeScreenForConnection;
- (int)transportType;

@end
