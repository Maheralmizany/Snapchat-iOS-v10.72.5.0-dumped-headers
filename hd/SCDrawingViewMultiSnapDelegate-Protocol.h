//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCDrawingStroke, UIView<SCDrawingViewCommon>;

@protocol SCDrawingViewMultiSnapDelegate <NSObject>
- (void)drawingView:(UIView<SCDrawingViewCommon> *)arg1 removedStroke:(SCDrawingStroke *)arg2;
- (void)drawingView:(UIView<SCDrawingViewCommon> *)arg1 addedStroke:(SCDrawingStroke *)arg2;
@end

