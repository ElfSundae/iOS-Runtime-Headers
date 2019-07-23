/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Security.framework/Security
 */

@interface SecKeyProxyTarget : NSObject <SecKeyProxyProtocol> {
    NSData * _certificate;
    id  _key;
    SecKeyProxy * _publicKeyProxy;
}

@property (nonatomic, readonly) struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*key;

- (void).cxx_destruct;
- (void)getAlgorithmIDWithReply:(id /* block */)arg1;
- (void)getAttributesWithReply:(id /* block */)arg1;
- (void)getBlockSizeWithReply:(id /* block */)arg1;
- (void)getDescriptionWithReply:(id /* block */)arg1;
- (void)getExternalRepresentationWithReply:(id /* block */)arg1;
- (void)getPublicKey:(id /* block */)arg1;
- (id)initWithKey:(id)arg1 certificate:(id)arg2;
- (void)initializeWithReply:(id /* block */)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)key;
- (void)performOperation:(long long)arg1 algorithm:(id)arg2 parameters:(id)arg3 reply:(id /* block */)arg4;

@end
