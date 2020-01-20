//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaViewModelFactoryProtocol.h"

@class NSString, SCExperimentManager, SCLens;

@interface SCOperaViewModelFactory : NSObject <SCOperaViewModelFactoryProtocol>
{
    SCLens *_lens;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)_ctaCacheDirectory;
- (id)_viewModelWithAppId:(id)arg1;
- (id)_ctaViewModelWithVideoId:(id)arg1;
- (id)_adWebViewPagePropertiesWithWebUrl:(id)arg1 shouldAutoFill:(_Bool)arg2 disableSwipeDownToDismiss:(_Bool)arg3;
- (id)_viewModelWithWebUrl:(id)arg1 shouldAutoFill:(_Bool)arg2 disableSwipeDownToDismiss:(_Bool)arg3;
- (id)viewModelWithWebUrl:(id)arg1;
- (id)ctaViewModel;
- (id)initWithLens:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
