/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDOperationMetrics : NSObject <MMCSOperationMetric, NSCopying, NSSecureCoding> {
    unsigned int  _bytesDownloaded;
    unsigned int  _bytesUploaded;
    unsigned int  _connections;
    unsigned int  _connectionsCreated;
    double  _duration;
    double  _executing;
    double  _queueing;
    NSMutableArray * _ranges;
    unsigned int  _recordsDeleted;
    unsigned int  _recordsDownloaded;
    unsigned int  _recordsUploaded;
    NSMutableSet * _requestUUIDs;
    unsigned int  _retries;
    NSDate * _startDate;
}

@property unsigned int bytesDownloaded;
@property unsigned int bytesUploaded;
@property unsigned int connections;
@property unsigned int connectionsCreated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property double duration;
@property double executing;
@property (readonly) unsigned int hash;
@property double queueing;
@property (nonatomic, retain) NSMutableArray *ranges;
@property (readonly) NSArray *rangesCopy;
@property unsigned int recordsDeleted;
@property unsigned int recordsDownloaded;
@property unsigned int recordsUploaded;
@property (nonatomic, retain) NSMutableSet *requestUUIDs;
@property unsigned int retries;
@property (retain) NSDate *startDate;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)_initWithStartDate:(id)arg1;
- (void)addCKSpecificMetricsFromMetrics:(id)arg1;
- (void)addRange:(id)arg1;
- (unsigned int)bytesDownloaded;
- (unsigned int)bytesUploaded;
- (unsigned int)connections;
- (unsigned int)connectionsCreated;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (double)executing;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)newRangeWithOperationState:(unsigned int)arg1 startDate:(id)arg2 duration:(double)arg3;
- (double)queueing;
- (id)ranges;
- (id)rangesCopy;
- (unsigned int)recordsDeleted;
- (unsigned int)recordsDownloaded;
- (unsigned int)recordsUploaded;
- (id)requestUUIDs;
- (unsigned int)retries;
- (void)setBytesDownloaded:(unsigned int)arg1;
- (void)setBytesUploaded:(unsigned int)arg1;
- (void)setConnections:(unsigned int)arg1;
- (void)setConnectionsCreated:(unsigned int)arg1;
- (void)setDuration:(double)arg1;
- (void)setExecuting:(double)arg1;
- (void)setQueueing:(double)arg1;
- (void)setRanges:(id)arg1;
- (void)setRecordsDeleted:(unsigned int)arg1;
- (void)setRecordsDownloaded:(unsigned int)arg1;
- (void)setRecordsUploaded:(unsigned int)arg1;
- (void)setRequestUUIDs:(id)arg1;
- (void)setRetries:(unsigned int)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
