//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOrderedSet, SCXBitmojiLayer;

@protocol SCXBitmojiLayerInteractionDelegate <NSObject>
- (void)bitmojiLayerDidCancelTouches:(SCXBitmojiLayer *)arg1 didPanOrZoomMap:(_Bool)arg2;
- (void)bitmojiLayer:(SCXBitmojiLayer *)arg1 didLongPressClusters:(NSOrderedSet *)arg2;
- (void)bitmojiLayer:(SCXBitmojiLayer *)arg1 didTouchUpOnClusters:(NSOrderedSet *)arg2;
- (void)bitmojiLayer:(SCXBitmojiLayer *)arg1 didTouchDownOnClusters:(NSOrderedSet *)arg2;
@end

