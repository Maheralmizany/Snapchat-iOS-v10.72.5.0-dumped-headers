//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy, SCOperaEventListenerAnnouncer, SCOperaSharedResourceManager, UIView<SCSnappablesContextCardLayerViewProtocol>;

@interface SCSnappablesContextCardLayerDependencies : NSObject
{
    SCOperaEventListenerAnnouncer *_eventAnnouncer;
    SCOperaSharedResourceManager *_sharedResourceManager;
    UIView<SCSnappablesContextCardLayerViewProtocol> *_view;
    id <SCSnappablesAnalyticsEventController> _analyticsController;
    id <SCSnappablesContextCardAppearanceEventHandler> _appearanceEventHandler;
    SCLazy *_snappablesPresenter;
    CDUnknownBlockType _layerLensControllerBuildBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType layerLensControllerBuildBlock; // @synthesize layerLensControllerBuildBlock=_layerLensControllerBuildBlock;
@property(readonly, nonatomic) SCLazy *snappablesPresenter; // @synthesize snappablesPresenter=_snappablesPresenter;
@property(readonly, nonatomic) id <SCSnappablesContextCardAppearanceEventHandler> appearanceEventHandler; // @synthesize appearanceEventHandler=_appearanceEventHandler;
@property(readonly, nonatomic) id <SCSnappablesAnalyticsEventController> analyticsController; // @synthesize analyticsController=_analyticsController;
@property(readonly, nonatomic) UIView<SCSnappablesContextCardLayerViewProtocol> *view; // @synthesize view=_view;
@property(readonly, nonatomic) SCOperaSharedResourceManager *sharedResourceManager; // @synthesize sharedResourceManager=_sharedResourceManager;
@property(readonly, nonatomic) SCOperaEventListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
- (void).cxx_destruct;
- (id)initWithEventAnnouncer:(id)arg1 sharedResourceManager:(id)arg2 view:(id)arg3 analyticsController:(id)arg4 appearanceEventHandler:(id)arg5 snappablesPresenter:(id)arg6 layerLensControllerBuildBlock:(CDUnknownBlockType)arg7;
- (id)initWithOperaConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3 userSession:(id)arg4 appearanceEventHandler:(id)arg5;

@end

