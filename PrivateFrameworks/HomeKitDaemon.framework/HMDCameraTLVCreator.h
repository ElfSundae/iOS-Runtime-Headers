/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCameraTLVCreator : NSObject {
    BOOL  _addHasFailed;
    struct { 
        char *ptr; 
        unsigned int len; 
        unsigned int maxLen; 
        char *mallocedPtr; 
        unsigned char inlineBuffer[300]; 
    }  _tlv;
}

+ (id)creator;
+ (id)creatorWithBufferSize:(unsigned int)arg1;

- (BOOL)addTLV:(unsigned int)arg1 data:(id)arg2;
- (BOOL)addTLV:(unsigned int)arg1 length:(unsigned int)arg2 floatNumber:(id)arg3;
- (BOOL)addTLV:(unsigned int)arg1 length:(unsigned int)arg2 number:(id)arg3;
- (BOOL)addTLV:(unsigned int)arg1 number:(id)arg2;
- (BOOL)addTLV:(unsigned int)arg1 string:(id)arg2;
- (BOOL)addTLV:(unsigned int)arg1 uuid:(id)arg2;
- (void)dealloc;
- (id)initWithBufferSize:(unsigned int)arg1;
- (id)serialize;

@end
