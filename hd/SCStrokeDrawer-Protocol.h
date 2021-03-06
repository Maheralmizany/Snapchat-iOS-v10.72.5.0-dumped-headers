//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, SCStrokeDrawerPoint, UIColor;

@protocol SCStrokeDrawer
@property(nonatomic) double defaultStrokeWidth;
@property(nonatomic) __weak id <SCStrokeDrawerDelegate> delegate;
- (struct CGPoint)scaleRange;
- (_Bool)isPointEligibleForAdding:(SCStrokeDrawerPoint *)arg1 previousPoint:(SCStrokeDrawerPoint *)arg2 scale:(double)arg3;
- (void)drawRect:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)redrawPoints:(NSArray *)arg1;
- (void)drawPoint:(SCStrokeDrawerPoint *)arg1 pointSet:(NSArray *)arg2;
- (void)clearDrawing;
- (void)updateDrawerMetadata:(UIColor *)arg1 emoji:(NSString *)arg2 contentSize:(double)arg3;
@end

