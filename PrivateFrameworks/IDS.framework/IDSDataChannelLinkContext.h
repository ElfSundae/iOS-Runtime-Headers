/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSDataChannelLinkContext : NSObject {
    _IDSDataChannelLinkContext * _internal;
    unsigned int  _maxBitrate;
}

@property (readonly) unsigned int RATType;
@property (readonly) int connectionType;
@property (readonly) unsigned char flags;
@property (readonly) BOOL linkID;
@property (readonly) unsigned int maxBitrate;
@property (readonly) unsigned short maxMTU;
@property (readonly) unsigned char networkType;
@property (readonly) int remoteConnectionType;
@property (readonly) unsigned char remoteNetworkType;
@property (readonly) unsigned int remoteRATType;

- (unsigned int)RATType;
- (int)connectionType;
- (id)description;
- (unsigned char)flags;
- (id)initWithDummyInformation;
- (id)initWithLinkID:(BOOL)arg1 flags:(unsigned char)arg2 networkType:(unsigned char)arg3 connectionType:(int)arg4 RATType:(unsigned int)arg5 MTU:(unsigned short)arg6 remoteNetworkType:(unsigned char)arg7 remoteConnectionType:(int)arg8 remoteRATType:(unsigned int)arg9 maxBitrate:(unsigned int)arg10;
- (BOOL)linkID;
- (unsigned int)maxBitrate;
- (unsigned short)maxMTU;
- (unsigned char)networkType;
- (int)remoteConnectionType;
- (unsigned char)remoteNetworkType;
- (unsigned int)remoteRATType;
- (void)setMTU:(unsigned short)arg1;
- (void)setMaxBitrate:(unsigned int)arg1;
- (void)setRATType:(unsigned int)arg1;

@end
