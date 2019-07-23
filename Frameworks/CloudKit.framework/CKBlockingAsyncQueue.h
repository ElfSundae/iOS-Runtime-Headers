/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKBlockingAsyncQueue : NSObject {
    unsigned int  _qosClass;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_semaphore> * _queueSema;
    unsigned int  _width;
}

@property (nonatomic) unsigned int qosClass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *queueSema;
@property (nonatomic) unsigned int width;

- (void).cxx_destruct;
- (id)initWithWidth:(unsigned int)arg1;
- (id)initWithWidth:(unsigned int)arg1 qosClass:(unsigned int)arg2;
- (void)performBarrierBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1;
- (unsigned int)qosClass;
- (id)queue;
- (id)queueSema;
- (void)setQosClass:(unsigned int)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueueSema:(id)arg1;
- (void)setWidth:(unsigned int)arg1;
- (unsigned int)width;

@end
