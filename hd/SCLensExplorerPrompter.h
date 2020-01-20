//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCLensExplorerPrompter.h"

@class NSString, SCAlertViewCoordinator;

@interface SCLensExplorerPrompter : NSObject <SCLensExplorerPrompter>
{
    SCAlertViewCoordinator *_alertViewCoordinator;
}

- (void).cxx_destruct;
- (void)_presentInfoAlertWithAttributedDescription:(id)arg1 dismissButtonTitle:(id)arg2 dismissActionHandler:(CDUnknownBlockType)arg3;
- (void)presentLensChallengesDisclaimerAlert;
- (void)presentErrorPromptWithMessage:(id)arg1;
- (void)presentDefaultErrorMessageWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAlertViewCoordinator:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

