/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface MIDINetworkSession : NSObject {
    void *_imp;
}

@property (nonatomic) unsigned int connectionPolicy;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (nonatomic, readonly) NSString *localName;
@property (nonatomic, readonly) NSString *networkName;
@property (nonatomic, readonly) unsigned int networkPort;

+ (id)defaultSession;

- (BOOL)addConnection:(id)arg1;
- (BOOL)addContact:(id)arg1;
- (BOOL)addOrRemoveConnection:(id)arg1 add:(BOOL)arg2;
- (unsigned int)connectionPolicy;
- (id)connections;
- (id)contacts;
- (void)contactsChanged;
- (void)dealloc;
- (unsigned long)destinationEndpoint;
- (id)init;
- (BOOL)isEnabled;
- (id)localName;
- (id)networkName;
- (unsigned int)networkPort;
- (void)refreshBonjourName;
- (BOOL)removeConnection:(id)arg1;
- (BOOL)removeContact:(id)arg1;
- (void)sessionChanged;
- (void)setConnectionPolicy:(unsigned int)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setStateToEntity;
- (unsigned long)sourceEndpoint;
- (void)updateFromEntity;

@end
