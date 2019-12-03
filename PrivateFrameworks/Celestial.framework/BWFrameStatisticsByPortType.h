/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWFrameStatisticsByPortType : NSObject <NSFastEnumeration, NSSecureCoding> {
    unsigned long long  _frameCount;
    struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; double x6; unsigned int x7; unsigned int x8; unsigned int x9; float x10; float x11; float x12; double x13; unsigned int x14; unsigned int x15; bool x16; bool x17; bool x18; int x19; bool x20; float x21; int x22; bool x23; int x24; int x25; int x26; int x27; float x28; float x29; unsigned int x30; float x31; int x32; } * _frameStatisticsStoragesForPortTypes;
    NSDictionary * _portTypeToFrameStatistics;
    NSArray * _portTypes;
}

@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) NSArray *portTypes;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_setFrameCount:(unsigned long long)arg1;
- (void)copyTo:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPortTypes:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)portTypes;
- (void)reset;
- (void)updateWithFrameMetadata:(id)arg1 updateFocusDistance:(bool)arg2;

@end
