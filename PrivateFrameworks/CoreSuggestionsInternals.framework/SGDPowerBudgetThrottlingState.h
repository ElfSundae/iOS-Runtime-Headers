/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDPowerBudgetThrottlingState : NSObject {
    unsigned long long  _absTimeAtOpStart;
    bool  _dirty;
    int  _fd;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSObject<OS_os_log> * _log;
    bool  _opInProgress;
    struct { 
        unsigned int magic; 
        int opsLeft; 
        long long nsecLeft; 
    }  _state;
}

- (void).cxx_destruct;
- (void)_readThrottleState;
- (void)_writeThrottleState;
- (void)_writeThrottleStateLocked;
- (bool)canDoDiscretionaryWork;
- (void)dealloc;
- (unsigned long long)discretionaryOpsLeft;
- (void)endWork;
- (id)initWithPath:(id)arg1 log:(id)arg2;
- (void)refill;
- (void)startWork;

@end
