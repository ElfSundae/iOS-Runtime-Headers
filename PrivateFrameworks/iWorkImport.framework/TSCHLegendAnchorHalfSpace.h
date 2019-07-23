/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendAnchorHalfSpace : NSObject {
    struct TSCHLegendAnchorLine { 
        struct CGPoint { 
            double x; 
            double y; 
        } normal; 
        double distance; 
    }  mLine;
}

@property (nonatomic, readonly) struct TSCHLegendAnchorLine { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; } line;

+ (id)halfSpaceWithLine:(struct TSCHLegendAnchorLine { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;

- (id)description;
- (id)initWithLine:(struct TSCHLegendAnchorLine { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })arg1;
- (struct TSCHLegendAnchorLine { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; double x2; })line;

@end
