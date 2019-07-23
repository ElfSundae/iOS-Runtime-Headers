/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCodeFunctionInvokeRequest : PBRequest <NSCopying> {
    NSString * _functionName;
    NSData * _serializedParameters;
    NSString * _serviceName;
}

@property (nonatomic, retain) NSString *functionName;
@property (nonatomic, readonly) BOOL hasFunctionName;
@property (nonatomic, readonly) BOOL hasSerializedParameters;
@property (nonatomic, readonly) BOOL hasServiceName;
@property (nonatomic, retain) NSData *serializedParameters;
@property (nonatomic, retain) NSString *serviceName;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)functionName;
- (BOOL)hasFunctionName;
- (BOOL)hasSerializedParameters;
- (BOOL)hasServiceName;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)serializedParameters;
- (id)serviceName;
- (void)setFunctionName:(id)arg1;
- (void)setSerializedParameters:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
