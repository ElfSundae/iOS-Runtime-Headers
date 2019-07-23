/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRSendVirtualTouchEventMessage : MRProtocolMessage

@property (nonatomic, readonly) struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; float x_1_1_2[2]; } x1; unsigned int x2; } event;
@property (nonatomic, readonly) unsigned long long virtualDeviceID;

- (struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; float x_1_1_2[2]; } x1; unsigned int x2; })event;
- (id)initWithTouchEvent:(struct _MRHIDTouchEvent { union _MRHIDPoint { struct { float x_1_2_1; float x_1_2_2; } x_1_1_1; float x_1_1_2[2]; } x1; unsigned int x2; })arg1 virtualDeviceID:(unsigned long long)arg2;
- (unsigned int)priority;
- (BOOL)requiresAuthentication;
- (double)timestamp;
- (unsigned int)type;
- (unsigned long long)virtualDeviceID;

@end
