/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface EKTimeZone : NSObject <NSCopying> {
    void * _internal;
    long long  _lastEnd;
    unsigned int  _lastIndex;
    long long  _lastStart;
    NSString * _name;
    double  _offset;
}

+ (id)timeZoneWithNSTimeZone:(id)arg1;
+ (id)timeZoneWithName:(id)arg1;

- (void).cxx_destruct;
- (id)NSTimeZone;
- (id)_abbreviationForIndex:(unsigned int)arg1;
- (unsigned int)_indexForAbsoluteTime:(double)arg1;
- (id)abbreviation;
- (id)abbreviationForAbsoluteTime:(double)arg1;
- (id)abbreviationForDate:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)initWithName:(id)arg1;
- (id)initWithOffset:(double)arg1 name:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)arg1;
- (double)secondsFromGMT;
- (double)secondsFromGMTForAbsoluteTime:(double)arg1;
- (double)secondsFromGMTForDate:(id)arg1;

@end
