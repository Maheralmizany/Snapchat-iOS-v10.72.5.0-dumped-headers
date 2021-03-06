//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSearchSnapZoomLevelProviding.h"

@protocol SCFeatureZooming <SCSearchSnapZoomLevelProviding>
@property(nonatomic) __weak id <SCPreviewPresenter> previewPresenter;
@property(nonatomic) _Bool isZoomingEnabled;
@property(nonatomic) __weak id <SCFeatureZoomingDelegate> delegate;
- (void)resetFlipRecordedCount;
- (void)resetZoomingState;
- (void)restoreZoomingState;
- (void)recordZoomingState;
@end

