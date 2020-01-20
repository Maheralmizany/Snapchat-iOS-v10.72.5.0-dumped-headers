//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSString, SCDrawingMetadata, UIColor, UIImage;

@protocol SCDrawingViewCommon
@property(nonatomic) double defaultStrokeWidth;
@property(readonly, nonatomic) long long updateVersion;
@property(nonatomic) __weak id <SCDrawingViewMultiSnapDelegate> multiSnapDelegate;
@property(nonatomic) __weak id <SCDrawingViewCommonDelegate> delegate;
- (UIImage *)imageFromDrawingView;
- (void)drawScreenshotImageInCurrentContextWithRect:(struct CGRect)arg1;
- (void)replaceDrawingStrokeHistory:(NSArray *)arg1 forSegmentIndex:(long long)arg2;
- (SCDrawingMetadata *)drawingMetadata;
- (void)updateWithDrawingMetadata:(SCDrawingMetadata *)arg1;
- (long long)pointCount;
- (long long)strokeCount;
- (void)undoStroke;
- (void)updateEmoji:(NSString *)arg1;
- (void)updateColor:(UIColor *)arg1;
@end
