/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSSecurityTask : NSObject {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    int (* _copySigningIdentifier;
    int (* _copyValueForEntitlement;
    int (* _createFromSelf;
    int (* _createWithAuditToken;
    unsigned int  _kind;
    struct __SecTask { } * _taskRef;
}

@property (nonatomic, readonly, copy) NSString *signingIdentifier;

+ (id)currentSecurityTask;
+ (id)securityTaskForCurrentConnection;
+ (id)securityTaskWithAuditToken:(struct { unsigned int x1[8]; })arg1;
+ (void)setSecurityTaskForCurrentConnection:(id)arg1;

- (int (*)_copySigningIdentifier;
- (struct __SecTask { }*)_taskRef;
- (void)dealloc;
- (BOOL)getValue:(id*)arg1 forEntitlement:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 createWithAuditTokenProc:(int (*)arg2 copyValueForEntitlementProc:(int (*)arg3;
- (id)initWithCreateFromSelfProc:(int (*)arg1 copyValueForEntitlementProc:(int (*)arg2;
- (BOOL)shouldAllowAccessForBooleanEntitlement:(id)arg1;
- (id)signingIdentifier;

@end
