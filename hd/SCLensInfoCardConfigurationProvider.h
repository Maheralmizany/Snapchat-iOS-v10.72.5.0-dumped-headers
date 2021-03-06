//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensInfoCardConfigurationProviding.h"

@class NSString, SCLensInfoCardConfigurationProviderData;

@interface SCLensInfoCardConfigurationProvider : NSObject <SCLensInfoCardConfigurationProviding>
{
    SCLensInfoCardConfigurationProviderData *_configurationData;
}

- (void).cxx_destruct;
- (id)logger;
- (id)presentationDelegate;
- (CDUnknownBlockType)reportViewControllerConfigurationBlock;
- (CDUnknownBlockType)deepLinkSharingInstatiationBlock;
- (id)lensCreatorProfilePresenter;
- (id)requestManager;
- (id)lensCarouselFeature;
- (id)lensFeedFeature;
- (id)alertViewCoordinator;
- (id)fromViewController;
- (id)imageDownloader;
- (id)subscriptionProvider;
- (id)lensCreatorBlacklistManager;
- (id)lensRemover;
- (id)lens;
- (_Bool)isSourceLensCreatorPage;
- (id)applicationLifeCycleEvents;
- (_Bool)isLiveLensPreview;
- (id)unlockableDataStore;
- (id)lensRetrievable;
- (id)initWithConfigurationData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

