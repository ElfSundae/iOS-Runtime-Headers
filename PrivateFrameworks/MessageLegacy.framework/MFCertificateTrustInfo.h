/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFCertificateTrustInfo : NSObject {
    unsigned long long  _certificateType;
    NSString * _sender;
    ECSecureMIMETrustEvaluation * _trustEvaluation;
    NSString * _uncommentedSender;
    struct __SecTrust { } * _unevaluatedTrust;
}

@property (nonatomic, readonly) unsigned long long certificateType;
@property (nonatomic, readonly, copy) NSString *sender;
@property (nonatomic, readonly) struct __SecTrust { }*trust;
@property (nonatomic, readonly) ECSecureMIMETrustEvaluation *trustEvaluation;

- (void).cxx_destruct;
- (unsigned long long)certificateType;
- (void)dealloc;
- (id)initWithCertificateType:(unsigned long long)arg1 trust:(struct __SecTrust { }*)arg2 sender:(id)arg3;
- (id)sender;
- (struct __SecTrust { }*)trust;
- (id)trustEvaluation;

@end
