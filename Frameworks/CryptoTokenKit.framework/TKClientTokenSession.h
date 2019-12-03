/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKClientTokenSession : NSObject {
    LAContext * _LAContext;
    bool  __testing_AuthenticateInternally;
    NSArray * _advertisedItems;
    bool  _authenticateWhenNeeded;
    long long  _connectionIdentifier;
    NSDictionary * _parameters;
    NSNumber * _sessionID;
    NSString * _slotName;
    TKClientToken * _token;
}

@property (nonatomic, readonly) LAContext *LAContext;
@property (nonatomic) bool _testing_AuthenticateInternally;
@property (nonatomic) bool authenticateWhenNeeded;
@property (nonatomic, readonly) NSArray *certificates;
@property (nonatomic, readonly) NSArray *identities;
@property (nonatomic, readonly) NSArray *keys;
@property (nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) NSNumber *sessionID;
@property (nonatomic, readonly) NSString *slotName;
@property (nonatomic, readonly) TKClientToken *token;

- (void).cxx_destruct;
- (id)LAContext;
- (bool)_testing_AuthenticateInternally;
- (id)advertisedItems;
- (bool)authenticateWhenNeeded;
- (id)certificates;
- (id)createObjectWithAttributes:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (bool)deleteObject:(id)arg1 error:(id*)arg2;
- (bool)ensureSessionWithClient:(id)arg1 connectionIdentifier:(long long)arg2 error:(id*)arg3;
- (bool)evaluateAccessControl:(id)arg1 forOperation:(id)arg2 error:(id*)arg3;
- (id)identities;
- (id)initWithToken:(id)arg1 LAContext:(id)arg2 parameters:(id)arg3 error:(id*)arg4;
- (id)initWithTokenID:(id)arg1 LAContext:(id)arg2 error:(id*)arg3;
- (id)itemsOfClass:(id)arg1;
- (id)keys;
- (id)objectForObjectID:(id)arg1 error:(id*)arg2;
- (id)parameters;
- (id)sessionID;
- (void)setAuthenticateWhenNeeded:(bool)arg1;
- (void)set_testing_AuthenticateInternally:(bool)arg1;
- (id)slotName;
- (void)terminate;
- (id)token;
- (id)withError:(id*)arg1 accessControl:(struct __SecAccessControl { }*)arg2 invoke:(id /* block */)arg3;

@end
