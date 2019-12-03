/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDDaemonInterfaceFactory : NSObject {
    EDCategorySubsystem * _categorySubsystem;
    EDPersistence * _persistence;
}

@property (nonatomic, retain) EDCategorySubsystem *categorySubsystem;
@property (nonatomic, readonly) EDPersistence *persistence;

- (void).cxx_destruct;
- (id)categorySubsystem;
- (id)initWithPersistence:(id)arg1 categorySubsystem:(id)arg2;
- (id)newAccountRepository;
- (id)newActivityRegistry;
- (id)newFetchController;
- (id)newMailboxRepository;
- (id)newMessageRepository;
- (id)newOutgoingMessageRepository;
- (id)newSearchableIndex;
- (id)newVIPManagerInterface;
- (id)persistence;
- (void)setCategorySubsystem:(id)arg1;
- (id)sharedDonationController;
- (id)sharedInteractionLogger;

@end
