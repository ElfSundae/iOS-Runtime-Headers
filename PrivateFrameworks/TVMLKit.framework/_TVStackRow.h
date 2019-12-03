/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVStackRow : NSObject {
    bool  _bounded;
    bool  _hosted;
    struct TVRowMetrics { 
        long long rowType; 
        double rowHeight; 
        struct { 
            double top; 
            double bottom; 
        } rowPadding; 
        struct { 
            double top; 
            double bottom; 
        } rowInset; 
        struct { 
            double top; 
            double bottom; 
        } rowInsetAlt; 
        struct { 
            double top; 
            double bottom; 
        } rowMargin; 
    }  _rowMetrics;
    long long  _sectionIndex;
}

@property (getter=isBounded, nonatomic) bool bounded;
@property (getter=isHosted, nonatomic) bool hosted;
@property (nonatomic) struct TVRowMetrics { long long x1; double x2; struct { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; } x5; struct { double x_6_1_1; double x_6_1_2; } x6; } rowMetrics;
@property (nonatomic) long long sectionIndex;

- (unsigned long long)hash;
- (bool)isBounded;
- (bool)isEqual:(id)arg1;
- (bool)isHosted;
- (struct TVRowMetrics { long long x1; double x2; struct { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; } x5; struct { double x_6_1_1; double x_6_1_2; } x6; })rowMetrics;
- (long long)sectionIndex;
- (void)setBounded:(bool)arg1;
- (void)setHosted:(bool)arg1;
- (void)setRowMetrics:(struct TVRowMetrics { long long x1; double x2; struct { double x_3_1_1; double x_3_1_2; } x3; struct { double x_4_1_1; double x_4_1_2; } x4; struct { double x_5_1_1; double x_5_1_2; } x5; struct { double x_6_1_1; double x_6_1_2; } x6; })arg1;
- (void)setSectionIndex:(long long)arg1;

@end
