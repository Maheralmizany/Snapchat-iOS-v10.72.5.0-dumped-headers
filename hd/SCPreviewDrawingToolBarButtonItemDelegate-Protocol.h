//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCPreviewDrawingToolBarButtonItem, UIColor;

@protocol SCPreviewDrawingToolBarButtonItemDelegate <NSObject>
- (void)drawingToolBarButtonItemDidDisplayEmojiBrushAnimation:(SCPreviewDrawingToolBarButtonItem *)arg1;
- (void)drawingToolBarButtonItem:(SCPreviewDrawingToolBarButtonItem *)arg1 didPressDrawerEnabled:(_Bool)arg2;
- (void)drawingToolBarButtonItem:(SCPreviewDrawingToolBarButtonItem *)arg1 didChangePaletteType:(unsigned long long)arg2;
- (void)drawingToolBarButtonItem:(SCPreviewDrawingToolBarButtonItem *)arg1 didChangeColor:(UIColor *)arg2;
- (void)drawingToolBarButtonItemDidPressUndo:(SCPreviewDrawingToolBarButtonItem *)arg1;
- (void)drawingToolBarButtonItemDidPressEmojiBrush:(SCPreviewDrawingToolBarButtonItem *)arg1;
- (void)drawingToolBarButtonItem:(SCPreviewDrawingToolBarButtonItem *)arg1 didMoveToPoint:(struct CGPoint)arg2;
- (void)drawingToolBarButtonItemDidFinishPinchResize:(SCPreviewDrawingToolBarButtonItem *)arg1;
- (void)drawingToolBarButtonItemDidStartPinchResize:(SCPreviewDrawingToolBarButtonItem *)arg1;
- (void)drawingToolBarButtonItem:(SCPreviewDrawingToolBarButtonItem *)arg1 didEndDrawingWithStrokeSize:(double)arg2 isResized:(_Bool)arg3;
- (void)drawingToolBarButtonItemDidAlterDrawing:(SCPreviewDrawingToolBarButtonItem *)arg1;
- (void)drawingToolBarButtonItemDidStartDrawing:(SCPreviewDrawingToolBarButtonItem *)arg1;
@end
