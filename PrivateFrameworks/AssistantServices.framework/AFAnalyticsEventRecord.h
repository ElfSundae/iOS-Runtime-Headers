/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalyticsEventRecord : NSObject <NSSecureCoding, SiriCoreSQLiteRecord> {
    NSDate * _dateCreated;
    AFAnalyticsEvent * _event;
    NSString * _streamUID;
}

@property (nonatomic, readonly, copy) NSDate *dateCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) AFAnalyticsEvent *event;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *streamUID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dateCreated;
- (void)encodeWithCoder:(id)arg1;
- (id)event;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(id)arg1 streamUID:(id)arg2 dateCreated:(id)arg3;
- (void)siriCoreSQLiteRecord_enumerateStorageKeysAndValuesUsingBlock:(id /* block */)arg1;
- (id)streamUID;

@end
