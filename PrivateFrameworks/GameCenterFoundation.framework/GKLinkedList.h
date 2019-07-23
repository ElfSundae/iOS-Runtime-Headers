/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLinkedList : NSObject {
    GKListNode * _headNode;
    GKListNode * _tailNode;
}

@property (nonatomic) GKListNode *headNode;
@property (nonatomic) GKListNode *tailNode;

- (void)dealloc;
- (id)description;
- (BOOL)hasCycle;
- (id)headNode;
- (id)init;
- (void)insertNode:(id)arg1 before:(id)arg2;
- (void)insertNodeAtBeginning:(id)arg1;
- (id)insertNodeAtBeginningWithValue:(id)arg1 forKey:(id)arg2;
- (BOOL)isConsistent;
- (id)nodeForInsertionWithValue:(id)arg1;
- (void)removeAllNodes;
- (void)removeNode:(id)arg1;
- (void)setHeadNode:(id)arg1;
- (void)setTailNode:(id)arg1;
- (id)tailNode;

@end
