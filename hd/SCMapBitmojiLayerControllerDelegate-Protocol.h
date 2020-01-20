//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, NSString, SCMapBitmojiLayerController;

@protocol SCMapBitmojiLayerControllerDelegate <NSObject>
- (void)mapBitmojiLayerController:(SCMapBitmojiLayerController *)arg1 didLongPressUserId:(NSString *)arg2;
- (void)mapBitmojiLayerController:(SCMapBitmojiLayerController *)arg1 didPanOrZoomToDeselectUserId:(NSString *)arg2;
- (void)mapBitmojiLayerController:(SCMapBitmojiLayerController *)arg1 didTapToDeselectUserId:(NSString *)arg2;
- (void)mapBitmojiLayerController:(SCMapBitmojiLayerController *)arg1 wantsToSelectUserId:(NSString *)arg2;
- (void)mapBitmojiLayerController:(SCMapBitmojiLayerController *)arg1 didTapPersonLocationClusters:(NSSet *)arg2;
- (_Bool)isMapBitmojiLayerControllerAtMaximumZoomLevel:(SCMapBitmojiLayerController *)arg1;
@end

