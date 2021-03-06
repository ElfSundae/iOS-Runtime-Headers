/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface _CNABPredicateObservable : CNObservable <ABPredicateDelegate> {
    void * _addressBook;
    CNCancelationToken * _cancelationToken;
    CNContactsEnvironment * _environment;
    <CNObserver> * _observer;
    unsigned long long  _options;
    ABPredicate * _predicate;
    unsigned int  _sortOrdering;
}

@property (nonatomic, readonly) void*addressBook;
@property (nonatomic, readonly) CNCancelationToken *cancelationToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNContactsEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CNObserver> *observer;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) ABPredicate *predicate;
@property (nonatomic, readonly) unsigned int sortOrdering;
@property (readonly) Class superclass;

+ (id)makeSerialFetchSchedulerUsingSchedulerProvider:(id)arg1;
+ (id)observableWithPredicates:(id)arg1 sortOrdering:(unsigned int)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 environment:(id)arg5;
+ (id)schedulerForIdentifier:(id)arg1 provider:(id)arg2;

- (void).cxx_destruct;
- (void*)addressBook;
- (id)cancelationToken;
- (void)dealloc;
- (id)environment;
- (id)initWithPredicate:(id)arg1 sortOrdering:(unsigned int)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 environment:(id)arg5;
- (id)observer;
- (unsigned long long)options;
- (id)predicate;
- (bool)predicateShouldContinue:(id)arg1;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3;
- (bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(bool)arg3;
- (void)setObserver:(id)arg1;
- (unsigned int)sortOrdering;
- (id)subscribe:(id)arg1;

@end
