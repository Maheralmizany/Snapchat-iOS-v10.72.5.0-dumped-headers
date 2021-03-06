//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "SPDataLoaderServiceOutput.h"
#import "SPRemoteSettingsProviderOutput.h"

@class NSError, NSMutableArray, NSObject<OS_dispatch_queue>, NSOperationQueue, NSString, SPAiModelsCache;

@interface SPAIModelObtainigOperation : NSOperation <SPRemoteSettingsProviderOutput, SPDataLoaderServiceOutput>
{
    _Bool _inProgress;
    _Bool _isOperationDone;
    NSString *_modelName;
    id <SPDataLoaderService> _dataLoaderService;
    id <SPRemoteSettingsProvider> _remoteSettingsProvider;
    id <SPSettings> _settings;
    id <SPResourcesPostProcessing> _postProcessor;
    SPAiModelsCache *_cache;
    NSOperationQueue *_processingQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_fullRemotePath;
    NSError *_obtainConfigError;
    NSMutableArray *_compeletions;
}

@property(retain, nonatomic) NSMutableArray *compeletions; // @synthesize compeletions=_compeletions;
@property(retain, nonatomic) NSError *obtainConfigError; // @synthesize obtainConfigError=_obtainConfigError;
@property(retain, nonatomic) NSString *fullRemotePath; // @synthesize fullRemotePath=_fullRemotePath;
@property(nonatomic) _Bool isOperationDone; // @synthesize isOperationDone=_isOperationDone;
@property(nonatomic) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSOperationQueue *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) SPAiModelsCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) id <SPResourcesPostProcessing> postProcessor; // @synthesize postProcessor=_postProcessor;
@property(retain, nonatomic) id <SPSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <SPRemoteSettingsProvider> remoteSettingsProvider; // @synthesize remoteSettingsProvider=_remoteSettingsProvider;
@property(retain, nonatomic) id <SPDataLoaderService> dataLoaderService; // @synthesize dataLoaderService=_dataLoaderService;
@property(readonly, copy, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
- (void).cxx_destruct;
- (_Bool)isResourceCanBeProcessed:(id)arg1;
- (void)dataLoader:(id)arg1 didFinishDownloadingAtRemoteURL:(id)arg2 toLocation:(id)arg3 response:(id)arg4 withError:(id)arg5;
- (void)dataLoader:(id)arg1 didChangeDownloadingProgress:(id)arg2 forObjectAtRemoteURL:(id)arg3 response:(id)arg4;
- (void)didObtainConfigUrlPath:(id)arg1 aiModelsBaseUrlPath:(id)arg2 withError:(id)arg3;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)main;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (id)initWithModelName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

