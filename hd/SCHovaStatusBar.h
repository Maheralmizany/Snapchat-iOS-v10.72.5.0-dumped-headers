//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCHovaStatusBarSnapshot;

@interface SCHovaStatusBar : NSObject
{
    double _alpha;
    double _scale;
    SCHovaStatusBarSnapshot *_latestSatusBarSnapshot;
}

+ (id)sharedManager;
@property(retain, nonatomic) SCHovaStatusBarSnapshot *latestSatusBarSnapshot; // @synthesize latestSatusBarSnapshot=_latestSatusBarSnapshot;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) double alpha; // @synthesize alpha=_alpha;
- (void).cxx_destruct;
- (id)hovaStatusBarView;
- (id)snapshot;
- (_Bool)applicationIsShowingInCallStatusBar;
- (void)updateInteractiveHorizontalPercentVisible:(double)arg1 position:(long long)arg2;
- (void)updateInteractiveVerticalPercentVisible:(double)arg1;

@end
