/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKIdentityServiceFetchMyCertificatesTaskResultObject : CATTaskResultObject {
    CRKIdentityMarkedCertificate * _activeMarkedCertificate;
    CRKIdentityMarkedCertificate * _stagedMarkedCertificate;
}

@property (nonatomic, copy) CRKIdentityMarkedCertificate *activeMarkedCertificate;
@property (nonatomic, copy) CRKIdentityMarkedCertificate *stagedMarkedCertificate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeMarkedCertificate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setActiveMarkedCertificate:(id)arg1;
- (void)setStagedMarkedCertificate:(id)arg1;
- (id)stagedMarkedCertificate;

@end