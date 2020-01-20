//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBloopsChangeTargetControllerFactory.h"

@class NSString, SCExperimentManager, SCLazy;

@interface SCBloopsChangeTargetControllerFactoryImpl : NSObject <SCBloopsChangeTargetControllerFactory>
{
    SCLazy *_bloopsAPI;
    SCLazy *_targetsService;
    SCLazy *_previewsResourcesService;
    SCLazy *_remoteSettingsProvider;
    SCLazy *_categoriesProvider;
    SCExperimentManager *_experimentManager;
}

- (void).cxx_destruct;
- (id)createChangeTargetController;
- (id)initWithBloopsAPI:(id)arg1 remoteSettingsProvider:(id)arg2 targetsService:(id)arg3 previewsResourcesService:(id)arg4 categoriesProvider:(id)arg5 experimentManager:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
