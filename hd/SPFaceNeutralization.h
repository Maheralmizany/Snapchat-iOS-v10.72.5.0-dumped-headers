//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPExternalModelsConsumer.h"

@class FaceNeutrality, NSDictionary, NSError, NSObject<OS_dispatch_queue>, NSString, ProtectedCoreML, SPAIModelsServiceResult;

@interface SPFaceNeutralization : NSObject <SPExternalModelsConsumer>
{
    NSDictionary *_externalResourcesPath;
    id <SPAIModelsService> _modelsService;
    id <SPSettings> _settings;
    id <SPStringsProvider> _stringsProvider;
    FaceNeutrality *_faceNeutrality;
    NSError *_initializationError;
    NSObject<OS_dispatch_queue> *_queue;
    SPAIModelsServiceResult *_aiModelsServiceResult;
    ProtectedCoreML *_protectedCoreML;
}

@property(retain, nonatomic) ProtectedCoreML *protectedCoreML; // @synthesize protectedCoreML=_protectedCoreML;
@property(retain, nonatomic) SPAIModelsServiceResult *aiModelsServiceResult; // @synthesize aiModelsServiceResult=_aiModelsServiceResult;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSError *initializationError; // @synthesize initializationError=_initializationError;
@property(retain, nonatomic) FaceNeutrality *faceNeutrality; // @synthesize faceNeutrality=_faceNeutrality;
@property(retain, nonatomic) id <SPStringsProvider> stringsProvider; // @synthesize stringsProvider=_stringsProvider;
@property(retain, nonatomic) id <SPSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <SPAIModelsService> modelsService; // @synthesize modelsService=_modelsService;
@property(copy, nonatomic) NSDictionary *externalResourcesPath; // @synthesize externalResourcesPath=_externalResourcesPath;
- (void).cxx_destruct;
- (void)getNeutralizedFace:(id)arg1 landmarks:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)releaseModels;
- (void)obtainResourcesPaths;
- (void)initializeModels;
- (_Bool)isExternalResourcesBundled;
- (id)externalResourcesURLs;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

