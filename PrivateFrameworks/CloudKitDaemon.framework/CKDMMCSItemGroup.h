/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDMMCSItemGroup : NSObject {
    BOOL _complete;
    NSError *_error;
    NSMutableArray *_items;
    <MMCSOperationMetric> *_metrics;
    NSArray *_tuple;
}

@property (nonatomic) BOOL complete;
@property (nonatomic, readonly) NSURL *contentBaseURL;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, retain) <MMCSOperationMetric> *metrics;
@property (nonatomic, readonly) NSString *owner;
@property (nonatomic, readonly) NSString *requestor;
@property (nonatomic, retain) NSArray *tuple;
@property (nonatomic, readonly) BOOL useAuthRequests;

+ (id)tupleForItem:(id)arg1;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addItem:(id)arg1;
- (BOOL)complete;
- (id)contentBaseURL;
- (id)description;
- (id)error;
- (id)initWithTuple:(id)arg1;
- (id)items;
- (id)metrics;
- (id)owner;
- (id)requestor;
- (void)setComplete:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setMetrics:(id)arg1;
- (void)setTuple:(id)arg1;
- (id)tuple;
- (BOOL)useAuthRequests;

@end
