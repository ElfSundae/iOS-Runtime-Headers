/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKPhotoIndexGenerator : NSObject {
    long long  _count;
    long long  _n;
    long long  _prevIndex;
    long long  _step;
    NSArray * _stepSizes;
}

- (void).cxx_destruct;
- (id)initWithSize:(long long)arg1;
- (long long)nextRandom;
- (long long)nextSequential;
- (void)reset;
- (void)setIndex:(long long)arg1;

@end
