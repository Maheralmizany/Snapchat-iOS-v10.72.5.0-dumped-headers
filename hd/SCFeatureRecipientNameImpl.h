//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCaptureWorkflowTransitionAnimatableFeature.h"
#import "SCFeatureRecipientName.h"

@class SCLazy, UIView<SCFeatureContainerView>;

@interface SCFeatureRecipientNameImpl : SCFeature <SCFeatureRecipientName, SCCaptureWorkflowTransitionAnimatableFeature>
{
    SCLazy *_recipientNameView;
    UIView<SCFeatureContainerView> *_containerView;
}

- (void).cxx_destruct;
- (void)startAnimation:(CDUnknownBlockType)arg1;
- (id)recipientNameView;
- (void)setReplyParameters:(id)arg1;
- (void)configureWithView:(id)arg1;
- (void)dealloc;
- (id)init;

@end

