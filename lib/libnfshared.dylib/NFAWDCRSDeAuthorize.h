/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDCRSDeAuthorize : NSObject <NFAWDEventProtocol> {
    AWDNFCSECRSAuthorize *_metric;
    unsigned int status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) AWDNFCSECRSAuthorize *metric;
@property (nonatomic) unsigned int status;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)getMetric;
- (unsigned long)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned int)updateTransactionStateInfoWithPreviousState:(unsigned int)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end
