//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIFont, UIPanGestureRecognizer;

@protocol SCMultiCaptionManagerDelegate <NSObject>
- (UIFont *)defaultFontForNewCaption;
- (void)multiCaptionManagerCaptionIsPanning:(UIPanGestureRecognizer *)arg1;
- (void)captionWasTapped;
- (void)captionDidEndEditing;
- (void)captionDidStartEditing;
@end

