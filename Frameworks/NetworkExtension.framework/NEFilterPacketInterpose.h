/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFilterPacketInterpose : NSObject {
    struct channel_attr { } * _attributes;
    struct channel { } * _channel;
    int  _channel_fd;
    NEFilterPacketContext * _context;
    struct interpose_frame { unsigned char x1; char *x2; unsigned int x3; unsigned long long x4; struct __user_buflet {} *x5; } * _current_frame;
    NSUUID * _flowId;
    struct interpose_frame { 
        unsigned char ring_id; 
        char *buffer; 
        unsigned int bufferLength; 
        unsigned long long packet; 
        struct __user_buflet {} *buflet; 
    }  _frame_buffer;
    void * _input_source;
    bool  _input_suspended;
    NSObject<OS_nw_interface> * _interface;
    void * _key;
    unsigned int  _keyLength;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSUUID * _nexusInstance;
    unsigned int  _nexusPort;
    NEFilterPacketProvider * _provider;
    struct __slot_desc { } * _rx_last_slot;
    struct channel_ring_desc { } * _rx_ring_egress;
    struct channel_ring_desc { } * _rx_ring_ingress;
    unsigned short  _slot_size;
    struct channel_ring_desc { } * _tx_ring_egress;
    struct channel_ring_desc { } * _tx_ring_ingress;
}

@property (retain) NSUUID *flowId;
@property void*input_source;
@property bool input_suspended;
@property void*key;
@property unsigned int keyLength;
@property (retain) NSUUID *nexusInstance;
@property unsigned int nexusPort;

- (void).cxx_destruct;
- (struct interpose_frame { unsigned char x1; char *x2; unsigned int x3; unsigned long long x4; struct __user_buflet {} *x5; }*)allocateFrame:(struct interpose_frame { unsigned char x1; char *x2; unsigned int x3; unsigned long long x4; struct __user_buflet {} *x5; }*)arg1;
- (void)allowPacket:(id)arg1;
- (void)close;
- (void)close:(bool)arg1;
- (bool)createChannel;
- (void)dealloc;
- (void)deallocateFrame:(struct interpose_frame { unsigned char x1; char *x2; unsigned int x3; unsigned long long x4; struct __user_buflet {} *x5; }*)arg1;
- (id)delayCurrentPacket;
- (id)description;
- (id)flowId;
- (void)freePacket:(id)arg1;
- (id)initWithInterface:(id)arg1 flowId:(unsigned char)arg2 nexusInstance:(unsigned char)arg3 nexusPort:(unsigned int)arg4 key:(void*)arg5 keyLength:(unsigned int)arg6 provider:(id)arg7;
- (void*)input_source;
- (bool)input_suspended;
- (void*)key;
- (unsigned int)keyLength;
- (bool)matchFlow:(unsigned char)arg1 flowId:(unsigned char)arg2;
- (id)nexusInstance;
- (unsigned int)nexusPort;
- (void)setFlowId:(id)arg1;
- (void)setInput_source:(void*)arg1;
- (void)setInput_suspended:(bool)arg1;
- (void)setKey:(void*)arg1;
- (void)setKeyLength:(unsigned int)arg1;
- (void)setNexusInstance:(id)arg1;
- (void)setNexusPort:(unsigned int)arg1;

@end
