/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeClassifier : NSObject {
    CHStrokeClassificationResult * _strokeClassificationLastResult;
    <CHStrokeProvider> * _strokeProvider;
    bool  _textOnly;
}

@property (nonatomic, readonly, retain) CHStrokeClassificationResult *strokeClassificationLastResult;
@property (nonatomic, readonly, retain) <CHStrokeProvider> *strokeProvider;
@property (nonatomic, readonly) bool textOnly;

+ (double)containerSupportForPoints:(const struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; }*)arg1 withBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)nonTextCandidateForStroke:(id)arg1 withSubstrokes:(id)arg2;

- (void)dealloc;
- (id)initWithStrokeProvider:(id)arg1 strokeClassificationLastResult:(id)arg2 textOnly:(bool)arg3;
- (id)strokeClassificationLastResult;
- (id)strokeProvider;
- (bool)textOnly;
- (id)updatedStrokeClassificationResultByAddingStrokes:(id)arg1 removingStrokeIdentifiers:(id)arg2 clutterFilter:(id)arg3 affectedClutterStrokeIDs:(id)arg4 cancellationBlock:(id /* block */)arg5;

@end
