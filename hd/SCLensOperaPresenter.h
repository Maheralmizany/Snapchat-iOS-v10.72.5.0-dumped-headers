//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensOperaPresenterProtocol.h"
#import "SCOperaEventListener.h"

@class NSString, SCOperaPerformanceTrackingPlugin, SCOperaPlaybackIntentToNextTrackingPlugin, SCOperaViewController, SCOperaViewModel, SCUserSession, UIViewController<SCPageNameLogging>;

@interface SCLensOperaPresenter : NSObject <SCOperaEventListener, SCLensOperaPresenterProtocol>
{
    SCOperaViewModel *_operaViewModel;
    UIViewController<SCPageNameLogging> *_fromViewController;
    SCUserSession *_userSession;
    id <SCOperaConfigurationFactoryProtocol> _operaConfigurationFactory;
    id <SCLensOperaViewingSessionFactoryProtocol> _lensOperaViewingSessionFactory;
    id <SCLensOperaPresenterDelegateProtocol> _delegate;
    SCOperaViewController *_operaViewController;
    id <SCLensOperaViewingSessionProtocol> _operaViewingSession;
    SCOperaPerformanceTrackingPlugin *_performanceTrackingPlugin;
    SCOperaPlaybackIntentToNextTrackingPlugin *_playbackIntentToNextTrackingPlugin;
}

- (void).cxx_destruct;
- (void)_cleanupOperaVC;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (id)registeredEventsForOperaSession;
- (_Bool)isPresenting;
- (void)dismissWithDidBackground:(_Bool)arg1;
- (void)present;
- (id)initWithOperaViewModel:(id)arg1 fromViewController:(id)arg2 operaConfigurationFactory:(id)arg3 lensOperaViewingSessionFactory:(id)arg4 delegate:(id)arg5 userSession:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

