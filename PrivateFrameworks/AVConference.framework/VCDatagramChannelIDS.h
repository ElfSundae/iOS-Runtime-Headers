/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCDatagramChannelIDS : VCObject {
    NSString * _destination;
    int  _driverSocket;
    id /* block */  _eventHandler;
    IDSDatagramChannel * _idsChannel;
    unsigned int  _token;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) IDSDataChannelLinkContext *defaultLink;
@property (readonly) NSString *destination;
@property (readonly) unsigned int token;

- (id)connectedLinks;
- (id)datagramChannelWithDestination:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)defaultLink;
- (id)destination;
- (id)initWithDestination:(id)arg1 token:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithSocketDescriptor:(int)arg1 token:(unsigned int)arg2 error:(id*)arg3;
- (void)invalidate;
- (void)optInStreamIDs:(id)arg1;
- (void)optOutStreamIDs:(id)arg1;
- (void)osChannelInfoLog;
- (void)readyToRead;
- (void)requestSessionInfoWithOptions:(id)arg1;
- (void)setChannelPreferences:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setReadHandler:(id /* block */)arg1;
- (int)setupDriverSocket;
- (id)sharedIDSService;
- (int)start;
- (unsigned int)token;
- (void)writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; })arg3 options:(struct { unsigned int x1; unsigned long long x2; unsigned short x3; unsigned char x4; BOOL x5; unsigned short x6[12]; unsigned char x7; unsigned short x8; struct { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; unsigned short x_9_1_5; } x9; double x10; }*)arg4 completionHandler:(id /* block */)arg5;
- (void)writeDatagrams:(const void**)arg1 datagramsSize:(unsigned int*)arg2 datagramsInfo:(struct { BOOL x1; unsigned short x2; unsigned short x3; unsigned char x4; }*)arg3 datagramsCount:(int)arg4 options:(struct { /* ? */ }**)arg5 completionHandler:(id /* block */)arg6;

@end
