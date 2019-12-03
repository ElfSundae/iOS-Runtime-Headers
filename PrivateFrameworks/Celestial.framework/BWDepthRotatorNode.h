/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWDepthRotatorNode : BWNode {
    long long  _bufferSerialNumber;
    bool  _depthProvidedAsAttachedMedia;
    struct { 
        int width; 
        int height; 
    }  _inputDepthDimensions;
    unsigned int  _inputDepthFormat;
    struct opaqueCMFormatDescription { } * _outputDYFormatDescription;
    struct opaqueCMFormatDescription { } * _outputDepthFormatDescription;
    int  _rotationDegrees;
    bool  _separateDepthComponentsEnabled;
}

+ (void)initialize;

- (void)_setupDepthMediaConfigurationForOutput:(id)arg1 attachedMediaKey:(id)arg2;
- (void)_updateDepthOutputFormatRequirementsForInputFormat:(id)arg1 pixelFormat:(unsigned int)arg2 attachedMediaKey:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2 forAttachedMediaKey:(id)arg3;
- (id)initWithRotationDegrees:(int)arg1 separateDepthComponentsEnabled:(bool)arg2 depthProvidedAsAttachedMedia:(bool)arg3;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
