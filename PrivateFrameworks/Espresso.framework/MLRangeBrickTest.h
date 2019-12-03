/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

@interface MLRangeBrickTest : NSObject <EspressoBrick> {
    int  _size;
    int  _start;
    int  _stepSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int size;
@property (nonatomic, readonly) int start;
@property (nonatomic, readonly) int stepSize;
@property (readonly) Class superclass;

- (id)computeDynamicOutputShape:(id)arg1;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (bool)hasDynamicOutputShape:(unsigned long long)arg1;
- (bool)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
- (int)size;
- (int)start;
- (int)stepSize;

@end
