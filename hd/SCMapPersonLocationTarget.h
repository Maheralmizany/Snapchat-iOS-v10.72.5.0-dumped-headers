//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMapPersonLocationsListener.h"
#import "SCMapViewportTarget.h"

@class NSString, SCMapCamera, SCMapPersonLocation, SCMapViewportTargetListenerAnnouncer, SCMapZoomAwarePersonLocationClustersProvider;

@interface SCMapPersonLocationTarget : NSObject <SCMapPersonLocationsListener, SCMapViewportTarget>
{
    CDUnknownBlockType _bitmojiHeightInterpolator;
    struct CGSize _mapSize;
    struct UIEdgeInsets _edgeInsets;
    NSString *_targetUserId;
    SCMapPersonLocation *_storedLocation;
    id <SCMapViewport> _viewport;
    SCMapZoomAwarePersonLocationClustersProvider *_zoomAwareClustersProvider;
    SCMapViewportTargetListenerAnnouncer *_announcer;
    SCMapCamera *_camera;
}

- (void).cxx_destruct;
- (id)_cameraForClustersProvider:(id)arg1;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (_Bool)shouldBeOverriddenByGestureRecognizer:(id)arg1;
- (id)viewportTargetAnnouncer;
- (id)transition;
- (id)camera;
- (id)initWithBaseClustersProvider:(id)arg1 bitmojiHeightInterpolator:(CDUnknownBlockType)arg2 mapSize:(struct CGSize)arg3 edgeInsets:(struct UIEdgeInsets)arg4 targetUserId:(id)arg5 viewport:(id)arg6 zoomAwareClustersProvider:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

