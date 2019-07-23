/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTimeRange : NSObject <NSCopying> {
    double _categoryValue;
    BOOL _deleted;
    double _end;
    long long _sourceId;
    double _start;
}

@property (nonatomic) double categoryValue;
@property (nonatomic) BOOL deleted;
@property (nonatomic) double end;
@property (nonatomic) long long sourceId;
@property (nonatomic) double start;

- (double)categoryValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)deleted;
- (double)end;
- (void)setCategoryValue:(double)arg1;
- (void)setDeleted:(BOOL)arg1;
- (void)setEnd:(double)arg1;
- (void)setSourceId:(long long)arg1;
- (void)setStart:(double)arg1;
- (long long)sourceId;
- (double)start;

@end
