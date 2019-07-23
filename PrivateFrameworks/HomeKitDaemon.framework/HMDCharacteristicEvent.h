/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCharacteristicEvent : HMDEvent <NSSecureCoding> {
    HMDCharacteristic *_characteristic;
    id _eventValue;
}

@property (nonatomic, readonly) HMDCharacteristic *characteristic;
@property (nonatomic, retain) id eventValue;

+ (id)characteristicEventWithDictionary:(id)arg1 home:(id)arg2 error:(id*)arg3;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)characteristic;
- (void)encodeWithCoder:(id)arg1;
- (id)eventValue;
- (id)initWithCharacteristic:(id)arg1 eventValue:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setEventValue:(id)arg1;

@end
