/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMContentRepresentation : NSObject <EFLoggable, EFPubliclyDescribable, NSSecureCoding, _EMDistantContentRepresentation> {
    bool  _claimedScopedResource;
    <EMContentItem> * _contentItem;
    EMMessage * _contentMessage;
    <_EMDistantContentRepresentation> * _distantContentRepresentation;
    bool  _hasMoreContent;
    EFInvocationToken * _invocable;
    NSURL * _publicMessageURL;
    NSArray * _relatedContentItems;
    long long  _remainingByteCount;
    NSArray * _replyToList;
    id /* block */  _requestMoreContentBlock;
    CSSearchableItem * _searchableItem;
    EMSecurityInformation * _securityInformation;
    long long  _transportType;
    EMListUnsubscribeCommand * _unsubscribeCommand;
    EFSandboxedURLWrapper * _urlWrapper;
}

@property (nonatomic) <EMContentItem> *contentItem;
@property (nonatomic, retain) EMMessage *contentMessage;
@property (nonatomic, readonly) NSURL *contentURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <_EMDistantContentRepresentation> *distantContentRepresentation;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic) bool hasMoreContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSURL *publicMessageURL;
@property (nonatomic, copy) NSArray *relatedContentItems;
@property (nonatomic) long long remainingByteCount;
@property (nonatomic, copy) NSArray *replyToList;
@property (nonatomic, copy) id /* block */ requestMoreContentBlock;
@property (nonatomic, retain) CSSearchableItem *searchableItem;
@property (nonatomic, retain) EMSecurityInformation *securityInformation;
@property (readonly) Class superclass;
@property (nonatomic) long long transportType;
@property (nonatomic, retain) EMListUnsubscribeCommand *unsubscribeCommand;
@property (nonatomic, retain) EFSandboxedURLWrapper *urlWrapper;

// Image: /System/Library/PrivateFrameworks/Email.framework/Email

+ (id)contentRequestDelegateInterface;
+ (id)distantContentRepresentationInterface;
+ (id)log;
+ (bool)supportsSecureCoding;
+ (id)temporaryURLWithData:(id)arg1 clientIdentifier:(id)arg2 preferredFilename:(id)arg3 pathExtension:(id)arg4 cleanupInvocable:(id*)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (id /* block */)_distantLoaderBlockForContentItem:(id)arg1;
- (id)_initWithRelatedItems:(id)arg1 securityInformation:(id)arg2;
- (id)_initWithSandboxedURLWrapper:(id)arg1 relatedItems:(id)arg2 securityInformation:(id)arg3;
- (void)addInvalidationHandler:(id /* block */)arg1;
- (id)contentItem;
- (id)contentMessage;
- (id)contentURL;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)distantContentRepresentation;
- (id)ef_publicDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMoreContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentMessage:(id)arg1 data:(id)arg2 clientIdentifier:(id)arg3 preferredFilename:(id)arg4 extension:(id)arg5;
- (id)initWithContentURL:(id)arg1 relatedItems:(id)arg2 securityInformation:(id)arg3;
- (id)initWithData:(id)arg1 clientIdentifier:(id)arg2 extension:(id)arg3 relatedItems:(id)arg4 securityInformation:(id)arg5;
- (id)initWithData:(id)arg1 clientIdentifier:(id)arg2 preferredFilename:(id)arg3 extension:(id)arg4 relatedItems:(id)arg5 securityInformation:(id)arg6;
- (void)invalidate;
- (void)mergeUpdatedRepresentation:(id)arg1;
- (id)publicMessageURL;
- (id)relatedContentItems;
- (long long)remainingByteCount;
- (id)replyToList;
- (id)requestAdditionalContentWithCompletion:(id /* block */)arg1;
- (id /* block */)requestMoreContentBlock;
- (id)searchableItem;
- (id)securityInformation;
- (void)setContentItem:(id)arg1;
- (void)setContentMessage:(id)arg1;
- (void)setDistantContentRepresentation:(id)arg1;
- (void)setHasMoreContent:(bool)arg1;
- (void)setPublicMessageURL:(id)arg1;
- (void)setRelatedContentItems:(id)arg1;
- (void)setRemainingByteCount:(long long)arg1;
- (void)setReplyToList:(id)arg1;
- (void)setRequestMoreContentBlock:(id /* block */)arg1;
- (void)setSearchableItem:(id)arg1;
- (void)setSecurityInformation:(id)arg1;
- (void)setTransportType:(long long)arg1;
- (void)setUnsubscribeCommand:(id)arg1;
- (void)setUrlWrapper:(id)arg1;
- (long long)transportType;
- (id)unsubscribeCommand;
- (id)urlWrapper;

// Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon

- (id)requestRepresentationForItemWithObjectID:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)requestUpdatedRepresentationWithCompletion:(id /* block */)arg1;

@end
