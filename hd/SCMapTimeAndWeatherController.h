//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMapViewportListener.h"
#import "SCMapViewportMetadataUpdatesListener.h"
#import "SCMapWorldEffectManagerDelegate.h"

@class NSDateFormatter, NSMutableDictionary, NSString, SCExperimentManager, SCMSGetViewportInfoResponse, SCMapWorldEffectManager, SCXRenderLayer, SCXWeather, UIView<SCMapTimeAndWeatherView>;

@interface SCMapTimeAndWeatherController : NSObject <SCMapViewportListener, SCMapWorldEffectManagerDelegate, SCMapViewportMetadataUpdatesListener>
{
    UIView<SCMapTimeAndWeatherView> *_timeAndWeatherView;
    id <SCMapViewport> _mapViewport;
    SCXRenderLayer *_mapRenderLayer;
    _Bool _usesMetricSystem;
    id <SCMapTimeAndWeatherControllerDelegate> _delegate;
    id <SCMapViewportMetadataProvider> _viewportDataProvider;
    NSDateFormatter *_dateFormatter;
    NSMutableDictionary *_worldEffectsBySource;
    NSString *_currentWorldEffectId;
    SCXWeather *_currentWorldEffect;
    SCMSGetViewportInfoResponse *_cachedResponse;
    SCExperimentManager *_experimentManager;
    SCMapWorldEffectManager *_worldEffectManager;
}

@property(readonly, nonatomic) SCMapWorldEffectManager *worldEffectManager; // @synthesize worldEffectManager=_worldEffectManager;
- (void).cxx_destruct;
- (void)mapViewport:(id)arg1 willFlyToCoordinate:(struct CLLocationCoordinate2D)arg2;
- (void)_systemClockMinuteDidChange;
- (void)_scheduleRepeatingSystemClockMinuteChangeUpdates;
- (_Bool)worldEffectManagerShouldShowEffects:(id)arg1;
- (void)_updateTimeAndWeatherViewWithViewportInfo:(id)arg1;
- (void)viewportMetadataDidUpdateWithData:(id)arg1 error:(id)arg2;
- (id)initWithTimeAndWeatherView:(id)arg1 mapViewport:(id)arg2 mapRenderLayer:(id)arg3 experimentManager:(id)arg4 viewportDataProvider:(id)arg5 usesMetricSystem:(_Bool)arg6 downloadableContentManager:(id)arg7 delegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

