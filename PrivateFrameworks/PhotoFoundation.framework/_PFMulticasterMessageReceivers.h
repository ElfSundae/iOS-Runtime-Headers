/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface _PFMulticasterMessageReceivers : NSObject <PFMulticasterDistributionList> {
    _PFMulticasterReceiverList * _strongReceivers;
    _PFMulticasterReceiverList * _weakReceivers;
}

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)enumerateReceiversWithBlock:(id /* block */)arg1;
- (id)initWithStrongReceivers:(id)arg1 weakReceivers:(id)arg2;

@end
