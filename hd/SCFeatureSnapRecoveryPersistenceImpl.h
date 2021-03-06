//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureSnapRecoveryPersistence.h"

@class NSString, SCManagedURL, SCPreviewConfiguration, SCQueuePerformer, SCUserSession;

@interface SCFeatureSnapRecoveryPersistenceImpl : SCFeature <SCFeatureSnapRecoveryPersistence>
{
    SCUserSession *_userSession;
    SCPreviewConfiguration *_configuration;
    SCManagedURL *_imageURL;
    _Bool _cancelled;
    SCQueuePerformer *_performer;
}

- (void).cxx_destruct;
- (void)activate;
- (void)removePersistenceData;
- (void)cancelDeferredImageRecoveryPersistence;
- (id)initWithUserSession:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

