//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"

@class NSString, SCChatAnimationDataCoordinator, SCChatLogger, SCLazy, SCSnapLogger;

@interface SCChatSnapActionHandler : NSObject <SCActionHandling>
{
    id <SCChatMessageActionHandling> _messageActionHandler;
    id <SCChatFullscreenMediaChatTableCellDelegate> _delegate;
    SCLazy *_replayController;
    SCChatAnimationDataCoordinator *_animationDataCoordinator;
    SCChatLogger *_chatLogger;
    SCSnapLogger *_snapLogger;
    SCLazy *_loadMessageLogger;
}

- (void).cxx_destruct;
- (void)_performLoadingLoggingAction:(id)arg1;
- (void)_performSnapPressToReplayAction:(id)arg1;
- (void)_performSnapTapToViewAction:(id)arg1 sourceView:(id)arg2;
- (void)_performSnapTapToLoadAction:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithMessageActionHandler:(id)arg1 delegate:(id)arg2 replayController:(id)arg3 animationDataCoordinator:(id)arg4 chatLogger:(id)arg5 snapLogger:(id)arg6 loadMessageLogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

