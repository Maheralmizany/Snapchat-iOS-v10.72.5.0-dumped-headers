//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureWidenedFOV.h"

@interface SCFeatureWidenedFOVImpl : SCFeature <SCFeatureWidenedFOV>
{
    long long _cameraViewType;
}

- (struct UIEdgeInsets)safeAreaInsetsWithExistingInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
@property(readonly, nonatomic) double previewVerticalOffset;
- (struct CGRect)maxMediaAreaFrame;
- (_Bool)isFeatureEnabledAndSupported;
- (id)initWithCameraViewType:(long long)arg1;

@end

