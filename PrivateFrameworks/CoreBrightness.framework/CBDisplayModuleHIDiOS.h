/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
 */

@interface CBDisplayModuleHIDiOS : CBDisplayModule <CBContainerModuleProtocol> {
    unsigned long long  _PID;
    unsigned long long  _VID;
    unsigned long long  _brighntessUpdateCounter;
    struct __IOHIDElement { } * _brightnessElement;
    NSObject<OS_dispatch_queue> * _brightnessUpdateQueue;
    float  _brightnessUpdateTarget;
    NSUUID * _containerID;
    float  _currentNits;
    struct __IOHIDElement { } * _durationElement;
    NSArray * _elements;
    struct __IOHIDDevice { } * _hidDisplayDevice;
    NSObject<OS_os_log> * _logHandle;
    float  _maxNits;
    float  _minLinearBrightness;
    float  _minNits;
    float  _nitsScaler;
    bool  _noHID;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) unsigned long long PID;
@property (readonly) unsigned long long VID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)PID;
- (unsigned long long)VID;
- (id)copyPropertyForKey:(id)arg1;
- (id)copyPropertyForKey:(id)arg1 withParameter:(id)arg2;
- (void)dealloc;
- (float)getLinearBrightness;
- (bool)getNits:(float*)arg1;
- (float)getNitsForUserBrightness:(float)arg1;
- (float)getUserBrightnessForNits:(float)arg1;
- (bool)handleDisplayBrightnessProperty:(id)arg1;
- (bool)handleDisplayLinearBrightnessProperty:(id)arg1;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithDevice:(unsigned int)arg1 andQueue:(id)arg2;
- (id)newDisplayBrightnessData;
- (void)sendNotificationForKey:(id)arg1 withValue:(id)arg2;
- (bool)setLinearBrightness:(float)arg1;
- (bool)setNits:(float)arg1;
- (bool)setNits:(float)arg1 withPeriod:(float)arg2;
- (bool)setProperty:(id)arg1 forKey:(id)arg2;
- (bool)setSlider:(float)arg1;
- (void)start;
- (void)stop;

@end
