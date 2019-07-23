/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudServices.framework/CloudServices
 */

@interface SRPInit : NSObject <SRPClientRequest> {
    NSDictionary * _escrowRecord;
    NSString * _recordID;
    NSString * _recordLabel;
    SecureBackup * _sb;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *dsid;
@property (nonatomic, retain) NSDictionary *escrowRecord;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *recordID;
@property (nonatomic, copy) NSString *recordLabel;
@property (nonatomic, readonly, copy) NSString *recoveryPassphrase;
@property (nonatomic, readonly, retain) SecureBackup *sb;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dsid;
- (id)escrowRecord;
- (id)initWithSecureBackup:(id)arg1;
- (id)recordID;
- (id)recordLabel;
- (id)recoveryPassphrase;
- (id)sb;
- (void)setEscrowRecord:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setRecordLabel:(id)arg1;
- (id)validateInput;

@end
