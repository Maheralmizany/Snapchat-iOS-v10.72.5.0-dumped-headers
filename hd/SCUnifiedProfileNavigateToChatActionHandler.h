//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"

@class NSString, SCLazy, SCUnifiedProfileViewController, SCUserSession;

@interface SCUnifiedProfileNavigateToChatActionHandler : NSObject <SCActionHandling>
{
    SCUserSession *_userSession;
    SCLazy *_blockedSnapchatterFetcher;
    SCLazy *_snapchattersDataMutator;
    SCUnifiedProfileViewController *_unifiedProfileViewController;
    id <SCUnifiedProfileNavigateToChatActionHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCUnifiedProfileNavigateToChatActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak SCUnifiedProfileViewController *unifiedProfileViewController; // @synthesize unifiedProfileViewController=_unifiedProfileViewController;
- (void).cxx_destruct;
- (void)_showAlertDialogForBlockedSnapchatter:(id)arg1;
- (void)_navigateToChatForUsername:(id)arg1 deepLinkURL:(id)arg2;
- (void)_navigateToChatForGroupId:(id)arg1 deepLinkURL:(id)arg2;
- (void)_navigateToChat:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 blockedSnapchatterFetcher:(id)arg2 snapchattersDataMutator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

