/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface _AFBluetoothDeviceInfoMutation : NSObject <AFBluetoothDeviceInfoMutating> {
    NSString * _address;
    AFBluetoothDeviceInfo * _baseModel;
    NSUUID * _deviceUID;
    bool  _isAdvancedAppleAudioDevice;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasAddress : 1; 
        unsigned int hasDeviceUID : 1; 
        unsigned int hasVendorID : 1; 
        unsigned int hasProductID : 1; 
        unsigned int hasIsAdvancedAppleAudioDevice : 1; 
        unsigned int hasSupportsInEarDetection : 1; 
        unsigned int hasSupportsVoiceTrigger : 1; 
        unsigned int hasSupportsSpokenNotification : 1; 
        unsigned int hasSupportsListeningModeANC : 1; 
        unsigned int hasSupportsListeningModeTransparency : 1; 
    }  _mutationFlags;
    unsigned int  _productID;
    bool  _supportsInEarDetection;
    bool  _supportsListeningModeANC;
    bool  _supportsListeningModeTransparency;
    bool  _supportsSpokenNotification;
    bool  _supportsVoiceTrigger;
    unsigned int  _vendorID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)generate;
- (id)init;
- (id)initWithBaseModel:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setDeviceUID:(id)arg1;
- (void)setIsAdvancedAppleAudioDevice:(bool)arg1;
- (void)setProductID:(unsigned int)arg1;
- (void)setSupportsInEarDetection:(bool)arg1;
- (void)setSupportsListeningModeANC:(bool)arg1;
- (void)setSupportsListeningModeTransparency:(bool)arg1;
- (void)setSupportsSpokenNotification:(bool)arg1;
- (void)setSupportsVoiceTrigger:(bool)arg1;
- (void)setVendorID:(unsigned int)arg1;

@end
