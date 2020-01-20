//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeatureARBarBottomUIContender.h"

@protocol SCFeatureARBar <SCFeatureARBarBottomUIContender>
@property(nonatomic) long long cameraViewType;
@property(readonly, nonatomic) _Bool enabled;
@property(nonatomic) __weak id <SCFeatureARBarDelegate> delegate;
- (void)reloadARBarData;
- (id <SCARBarCompatibleFeature>)activeFeature;
- (void)selectFeature:(id <SCARBarCompatibleFeature>)arg1 animated:(_Bool)arg2 haptics:(_Bool)arg3;
- (void)updateVisibility:(double)arg1;
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)prepareToRestore;
@end

