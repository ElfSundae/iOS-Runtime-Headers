/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSgPTPTime : NSObject {
    void * _gptpTimeImpl;
}

@property (nonatomic) unsigned int nanoseconds;
@property (nonatomic) unsigned long long nanoseconds64Representation;
@property (nonatomic) unsigned long long seconds;

- (void)dealloc;
- (id)init;
- (unsigned int)nanoseconds;
- (unsigned long long)nanoseconds64Representation;
- (unsigned long long)seconds;
- (void)setNanoseconds64Representation:(unsigned long long)arg1;
- (void)setNanoseconds:(unsigned int)arg1;
- (void)setSeconds:(unsigned long long)arg1;

@end
