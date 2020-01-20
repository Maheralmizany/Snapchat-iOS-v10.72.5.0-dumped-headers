//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCEventListener.h"
#import "SCPreviewFeatureCommerceAttachment.h"

@class NSString, SCCommerceAttachmentProvider, SCLazy, SCPreviewConfiguration, SCUserSession;

@interface SCPreviewFeatureCommerceAttachmentImpl : SCFeature <SCEventListener, SCPreviewFeatureCommerceAttachment>
{
    SCUserSession *_userSession;
    SCPreviewConfiguration *_configuration;
    id <SCCommerceMerchantInfoProviding> _merchantInfoProvider;
    SCCommerceAttachmentProvider *_attachmentProvider;
    SCLazy *_lazyAttachmentWorkflow;
    id <SCPreviewFeatureParentViewControllerAccessing> _presentingDelegate;
    id <SCPreviewFeatureCommerceAttachmentAttachingDelegate> _attachingDelegate;
}

@property(nonatomic) __weak id <SCPreviewFeatureCommerceAttachmentAttachingDelegate> attachingDelegate; // @synthesize attachingDelegate=_attachingDelegate;
@property(nonatomic) __weak id <SCPreviewFeatureParentViewControllerAccessing> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
- (void).cxx_destruct;
- (_Bool)isFeatureEnabled;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)trackAttachmentPostedToStory:(_Bool)arg1 toGroup:(_Bool)arg2 toFriend:(_Bool)arg3;
- (_Bool)hasAttachment;
- (void)clearAttachments;
- (void)presentAttachmentTool;
- (void)_setupMerchantInfo;
- (void)prepareStoreInfoWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldShowStoreButton;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 lazyAttachmentWorkflow:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
