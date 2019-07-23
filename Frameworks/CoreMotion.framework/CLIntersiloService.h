/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CLIntersiloService : NSObject <CLIntersiloServiceProtocol> {
    CLIntersiloInterface * _inboundInterface;
    CLIntersiloInterface * _outboundInterface;
    CLSilo * _silo;
    BOOL  _valid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) CLIntersiloInterface *inboundInterface;
@property (nonatomic, readonly) CLIntersiloInterface *outboundInterface;
@property (nonatomic, readonly) CLSilo *silo;
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;

+ (void)becameFatallyBlocked:(id)arg1;
+ (id)getSilo;
+ (BOOL)isSupported;
+ (void)performSyncOnSilo:(id)arg1 invoker:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)inboundInterface;
- (id)init;
- (id)initInSilo:(id)arg1;
- (id)initWithInboundProtocol:(id)arg1 outboundProtocol:(id)arg2 andSilo:(id)arg3;
- (BOOL)isHydrated;
- (id)outboundInterface;
- (void)setValid:(BOOL)arg1;
- (id)silo;
- (BOOL)valid;

@end
