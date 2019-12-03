/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsRasterizationRateMap : MTLToolsObject <MTLRasterizationRateMapSPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) unsigned long long layerCount;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; } parameterBufferSizeAndAlign;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } physicalGranularity;
@property (readonly) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } screenSize;
@property (readonly) Class superclass;

- (void)acceptVisitor:(id)arg1;
- (void)copyParameterDataToBuffer:(id)arg1 offset:(unsigned long long)arg2;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)label;
- (unsigned long long)layerCount;
- (struct { float x1; float x2; })mapPhysicalToScreenCoordinates:(struct { float x1; float x2; })arg1 forLayer:(unsigned long long)arg2;
- (struct { float x1; float x2; })mapScreenToPhysicalCoordinates:(struct { float x1; float x2; })arg1 forLayer:(unsigned long long)arg2;
- (struct { unsigned long long x1; unsigned long long x2; })parameterBufferSizeAndAlign;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })physicalGranularity;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })physicalSizeForLayer:(unsigned long long)arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })screenSize;

@end