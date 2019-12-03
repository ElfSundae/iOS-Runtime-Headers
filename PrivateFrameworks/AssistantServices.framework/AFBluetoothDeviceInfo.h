/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFBluetoothDeviceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _address;
    NSUUID * _deviceUID;
    bool  _isAdvancedAppleAudioDevice;
    unsigned int  _productID;
    bool  _supportsInEarDetection;
    bool  _supportsListeningModeANC;
    bool  _supportsListeningModeTransparency;
    bool  _supportsSpokenNotification;
    bool  _supportsVoiceTrigger;
    unsigned int  _vendorID;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (nonatomic, readonly, copy) NSUUID *deviceUID;
@property (nonatomic, readonly) bool isAdvancedAppleAudioDevice;
@property (nonatomic, readonly) unsigned int productID;
@property (nonatomic, readonly) bool supportsInEarDetection;
@property (nonatomic, readonly) bool supportsListeningModeANC;
@property (nonatomic, readonly) bool supportsListeningModeTransparency;
@property (nonatomic, readonly) bool supportsSpokenNotification;
@property (nonatomic, readonly) bool supportsVoiceTrigger;
@property (nonatomic, readonly) unsigned int vendorID;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)address;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceUID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 deviceUID:(id)arg2 vendorID:(unsigned int)arg3 productID:(unsigned int)arg4 isAdvancedAppleAudioDevice:(bool)arg5 supportsInEarDetection:(bool)arg6 supportsVoiceTrigger:(bool)arg7 supportsSpokenNotification:(bool)arg8 supportsListeningModeANC:(bool)arg9 supportsListeningModeTransparency:(bool)arg10;
- (id)initWithCoder:(id)arg1;
- (bool)isAdvancedAppleAudioDevice;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (unsigned int)productID;
- (bool)supportsInEarDetection;
- (bool)supportsListeningModeANC;
- (bool)supportsListeningModeTransparency;
- (bool)supportsSpokenNotification;
- (bool)supportsVoiceTrigger;
- (unsigned int)vendorID;

@end
