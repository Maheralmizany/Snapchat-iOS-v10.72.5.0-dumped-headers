//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLens;

@protocol SCFeatureLensSideButton <NSObject>
@property(nonatomic) long long cameraViewType;
@property(nonatomic) __weak id <SCFeatureLensSideButtonDelegate> delegate;
@property(readonly, nonatomic) SCLens *lens;
- (void)resetButtonFrame;
- (void)showLensButtonIfNeeded;
- (void)updateLensButtonVisibility:(double)arg1;
@end

