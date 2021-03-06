//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSnapActionsActionHandling.h"

@class NSString, UIViewController;

@interface SCSnapActionsLegacyBridgeActionHandler : NSObject <SCSnapActionsActionHandling>
{
    UIViewController *_viewController;
    id <SCContextActionHandling> _actionHandler;
}

- (void).cxx_destruct;
- (id)handleAction:(id)arg1 source:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)handleActionWithAction:(id)arg1 source:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithTargetViewController:(id)arg1 actionHandler:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

