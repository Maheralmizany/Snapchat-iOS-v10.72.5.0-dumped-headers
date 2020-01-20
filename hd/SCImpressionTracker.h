//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface SCImpressionTracker : NSObject
{
    NSMutableDictionary *_items;
    float _minimumVisibleFraction;
    double _minimumImpressionTime;
    _Bool _logImpressionsImmediately;
    _Bool _logImpressionsOnce;
    NSMutableSet *_loggedImpressions;
    NSObject<OS_dispatch_queue> *_queue;
    id <SCImpressionTrackingDelegate> _delegate;
}

+ (id)impressionTrackerWithConfiguration:(id)arg1 queue:(id)arg2;
@property(nonatomic) __weak id <SCImpressionTrackingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_clearLoggedImpressions;
- (void)clearLoggedImpressions;
- (_Bool)_presentLongEnough:(id)arg1 timestamp:(id)arg2;
- (_Bool)_significantlyVisible:(struct CGRect)arg1 viewPort:(struct CGRect)arg2;
- (_Bool)_canLogImpression:(id)arg1;
- (id)_getItemsToLogFromItemsNoLongerTracked:(id)arg1 date:(id)arg2;
- (id)_updateSeenViewItems:(id)arg1 date:(id)arg2 viewPort:(struct CGRect)arg3;
- (id)_trackUnseenViewItemsIfNecessary:(id)arg1 viewPort:(struct CGRect)arg2;
- (id)_getItemsNoLongerTracked:(id)arg1;
- (id)_getTrackedViewItems:(id)arg1;
- (id)_getUntrackedViewItems:(id)arg1;
- (void)_updateWithViewItems:(id)arg1 date:(id)arg2 viewPort:(struct CGRect)arg3;
- (void)updateWithViewItems:(id)arg1 date:(id)arg2 viewPort:(struct CGRect)arg3;
- (id)initWithMinimumVisibleFraction:(float)arg1 minimumImpressionTimeInterval:(double)arg2 logImpressionsImmediately:(_Bool)arg3 logImpressionsOnce:(_Bool)arg4 queue:(id)arg5;

@end
