/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

@interface ADSerialWorkQueue : NSObject

+ (id /* block */)addDelayedOperation:(double)arg1 block:(id /* block */)arg2;
+ (void)addOperation:(id /* block */)arg1;
+ (void)cancelDelayedOperation:(id /* block */)arg1;
+ (void)initialize;
+ (id)primaryQueue;

@end
