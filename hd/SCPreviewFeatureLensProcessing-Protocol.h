//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SCImageProcessLensCommand, SCLens, UIGestureRecognizer;

@protocol SCPreviewFeatureLensProcessing
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> gestureRecognizerDelegate;
- (_Bool)isLensTouchProcessingGestureRecognizer:(UIGestureRecognizer *)arg1;
- (_Bool)shouldBlockTouchesForGestureRecognizer:(UIGestureRecognizer *)arg1;
- (_Bool)isAnyLensTouchProcessingGestureRecognizer:(UIGestureRecognizer *)arg1;
- (void)setLens:(SCLens *)arg1 withCommand:(SCImageProcessLensCommand *)arg2;
- (_Bool)isLensActive;
@end

