//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SCDrawingDelegate <NSObject>
- (void)didPinchBrush;
- (void)didEndDrawingWithStrokeSize:(double)arg1 isResized:(_Bool)arg2;
- (void)didStartDrawing;
- (void)didAlterDrawing;
- (void)drawingEnabled:(_Bool)arg1;
@end

