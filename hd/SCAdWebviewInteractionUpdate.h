//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSNumber, SCSnapAdsIdentifier;

@interface SCAdWebviewInteractionUpdate : NSObject <NSCopying>
{
    _Bool _loadedOnEntry;
    _Bool _loadedOnExit;
    SCSnapAdsIdentifier *_adIdentifier;
    long long _snapIndex;
    double _visiblePageLoadTimeSeconds;
    double _halfOpenViewedSeconds;
    NSNumber *_interactionZoneItemIndex;
    long long _viewedDurationInMillis;
    NSNumber *_initialPageLoadStatusCode;
}

@property(readonly, copy, nonatomic) NSNumber *initialPageLoadStatusCode; // @synthesize initialPageLoadStatusCode=_initialPageLoadStatusCode;
@property(readonly, nonatomic) long long viewedDurationInMillis; // @synthesize viewedDurationInMillis=_viewedDurationInMillis;
@property(readonly, copy, nonatomic) NSNumber *interactionZoneItemIndex; // @synthesize interactionZoneItemIndex=_interactionZoneItemIndex;
@property(readonly, nonatomic) double halfOpenViewedSeconds; // @synthesize halfOpenViewedSeconds=_halfOpenViewedSeconds;
@property(readonly, nonatomic) double visiblePageLoadTimeSeconds; // @synthesize visiblePageLoadTimeSeconds=_visiblePageLoadTimeSeconds;
@property(readonly, nonatomic) _Bool loadedOnExit; // @synthesize loadedOnExit=_loadedOnExit;
@property(readonly, nonatomic) _Bool loadedOnEntry; // @synthesize loadedOnEntry=_loadedOnEntry;
@property(readonly, nonatomic) long long snapIndex; // @synthesize snapIndex=_snapIndex;
@property(readonly, copy, nonatomic) SCSnapAdsIdentifier *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdIdentifier:(id)arg1 snapIndex:(long long)arg2 loadedOnEntry:(_Bool)arg3 loadedOnExit:(_Bool)arg4 visiblePageLoadTimeSeconds:(double)arg5 halfOpenViewedSeconds:(double)arg6 interactionZoneItemIndex:(id)arg7 viewedDurationInMillis:(long long)arg8 initialPageLoadStatusCode:(id)arg9;

@end
