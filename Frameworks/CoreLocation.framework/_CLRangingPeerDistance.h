/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface _CLRangingPeerDistance : NSObject <NSCopying, NSSecureCoding> {
    bool  _initiator;
    id  _internal;
}

@property (nonatomic, readonly, copy) NSNumber *accuracyMeters;
@property (nonatomic, readonly, copy) NSDate *date;
@property (nonatomic, readonly, copy) NSNumber *distanceMeters;
@property (getter=isInitiator, nonatomic, readonly) bool initiator;
@property (nonatomic, readonly, copy) _CLRangingPeer *peer;
@property (nonatomic, readonly) bool shouldUnlock;
@property (nonatomic, readonly, copy) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (id)accuracyMeters;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (void)dealloc;
- (id)description;
- (id)distanceMeters;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(bool)arg5;
- (id)initWithPeer:(id)arg1 date:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(bool)arg5 shouldUnlock:(bool)arg6;
- (id)initWithPeer:(id)arg1 timestamp:(id)arg2 distanceMeters:(id)arg3 accuracyMeters:(id)arg4 initiator:(bool)arg5;
- (bool)initiator;
- (bool)isInitiator;
- (id)peer;
- (bool)shouldUnlock;
- (id)timestamp;

@end
