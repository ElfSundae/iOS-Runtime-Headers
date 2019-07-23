/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDeliveryResult : NSObject {
    int _attributes;
    unsigned int _bytesSent;
    double _duration;
    BOOL _isWifi;
    int _status;
}

@property (nonatomic) int attributes;
@property (nonatomic) unsigned int bytesSent;
@property (nonatomic) double duration;
@property (nonatomic) BOOL isWifi;
@property (nonatomic) int status;

- (int)attributes;
- (unsigned int)bytesSent;
- (id)description;
- (double)duration;
- (id)initWithStatus:(int)arg1;
- (BOOL)isWifi;
- (void)setAttributes:(int)arg1;
- (void)setBytesSent:(unsigned int)arg1;
- (void)setDuration:(double)arg1;
- (void)setIsWifi:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
