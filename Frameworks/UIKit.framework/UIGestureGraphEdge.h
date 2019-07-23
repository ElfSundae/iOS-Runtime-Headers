/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGestureGraphEdge : UIGestureGraphElement {
    BOOL  _directed;
    UIGestureGraphNode * _sourceNode;
    UIGestureGraphNode * _targetNode;
}

@property (getter=isDirected, nonatomic, readonly) BOOL directed;
@property (getter=isLoop, nonatomic, readonly) BOOL loop;
@property (nonatomic, readonly) UIGestureGraphNode *sourceNode;
@property (nonatomic, readonly) UIGestureGraphNode *targetNode;

- (void).cxx_destruct;
- (id)commonNode:(id)arg1;
- (id)description;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(BOOL)arg4;
- (BOOL)isDirected;
- (BOOL)isLoop;
- (id)oppositeNode:(id)arg1;
- (id)sourceNode;
- (id)targetNode;

@end
