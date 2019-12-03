/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHBErrorBar : NSObject

+ (int)edErrorBarDirectionFrom:(int)arg1;
+ (int)edErrorBarTypeFrom:(int)arg1;
+ (id)readErrorBarGraphicProperties:(const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; unsigned short x12; unsigned short x13; int x14; bool x15; bool x16; bool x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; }*)arg1 forStyleIndex:(unsigned long long)arg2 state:(id)arg3;
+ (void)readFrom:(struct XlChartErrorBar { int (**x1)(); struct XlChartSeries {} *x2; unsigned short x3; unsigned short x4; unsigned short x5; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat {} **x_6_1_1; struct XlChartSeriesFormat {} **x_6_1_2; struct __compressed_pair<XlChartSeriesFormat **, ChAllocator<XlChartSeriesFormat *> > { struct XlChartSeriesFormat {} **x_3_2_1; } x_6_1_3; } x6; struct ChVector<XlChartSeriesFormat *> { struct XlChartSeriesFormat {} **x_7_1_1; struct XlChartSeriesFormat {} **x_7_1_2; struct __compressed_pair<XlChartSeriesFormat **, ChAllocator<XlChartSeriesFormat *> > { struct XlChartSeriesFormat {} **x_3_2_1; } x_7_1_3; } x7; struct ChVector<XlChartCustomLabelText *> { struct XlChartCustomLabelText {} **x_8_1_1; struct XlChartCustomLabelText {} **x_8_1_2; struct __compressed_pair<XlChartCustomLabelText **, ChAllocator<XlChartCustomLabelText *> > { struct XlChartCustomLabelText {} **x_3_2_1; } x_8_1_3; } x8; struct ChVector<unsigned int> { unsigned int *x_9_1_1; unsigned int *x_9_1_2; struct __compressed_pair<unsigned int *, ChAllocator<unsigned int> > { unsigned int *x_3_2_1; } x_9_1_3; } x9; }*)arg1 toSeries:(id)arg2 state:(id)arg3;
+ (int)xlErrorBarSourceFrom:(int)arg1;
+ (int)xlErrorBarTypeFrom:(int)arg1 direction:(int)arg2;

@end
