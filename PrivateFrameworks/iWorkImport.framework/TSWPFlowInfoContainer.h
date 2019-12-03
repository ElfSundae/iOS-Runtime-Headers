/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPFlowInfoContainer : TSPObject <TSWPFlowInfoContainer> {
    NSMutableArray * _flowInfos;
    unsigned long long  _nextUserInterfaceIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *flowInfos;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long nextUserInterfaceIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFlowInfo:(id)arg1;
- (void)addFlowInfo:(id)arg1 dolcContext:(id)arg2;
- (bool)containsFlowInfo:(id)arg1;
- (id)debugDescription;
- (id)flowInfos;
- (id)initWithContext:(id)arg1;
- (void)loadFromArchive:(const struct FlowInfoContainerArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned int x6; }*)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (unsigned long long)nextUserInterfaceIdentifier;
- (void)removeFlowInfo:(id)arg1;
- (void)saveToArchive:(struct FlowInfoContainerArchive { int (**x1)(); struct InternalMetadataWithArena { void *x_2_1_1; } x2; struct HasBits<1> { unsigned int x_3_1_1[1]; } x3; struct CachedSize { struct atomic<int> { _Atomic int x_1_2_1; } x_4_1_1; } x4; struct RepeatedPtrField<TSP::Reference> { struct Arena {} *x_5_1_1; int x_5_1_2; int x_5_1_3; struct Rep {} *x_5_1_4; } x5; unsigned int x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setFlowInfos:(id)arg1;
- (void)setNextUserInterfaceIdentifier:(unsigned long long)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
