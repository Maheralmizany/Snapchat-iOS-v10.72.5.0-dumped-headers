//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotificationCenter, NSString, SCAppNotification, SCChatViewHeader, SCTV3PresenceContainer, SCUserSession, UIView;

@protocol SCTV3ClientDependenciesProvider <NSObject>
- (_Bool)isFullScreenPlayerShown;
- (_Bool)isInPreviewMode;
- (void)leavePreviewMode:(_Bool)arg1;
- (_Bool)chatFullyVisibile;
- (id <SCChatViewControllerParentDelegate>)parentDelegate;
- (SCAppNotification *)sourceNotification;
- (void)setSourceNotification:(SCAppNotification *)arg1;
- (void)hideStatusBarFromActionSource:(long long)arg1;
- (void)showStatusBarFromActionSource:(long long)arg1;
- (NSNotificationCenter *)cognacChatDockEventCenter;
- (NSString *)conversationId;
- (SCChatViewHeader *)chatHeader;
- (SCTV3PresenceContainer *)presenceContainer;
- (UIView *)containerView;
- (id <SCTV3TableContentInsetUpdater>)tableInsetUpdater;
- (id <SCTalkClientController>)talkClientController;
- (SCUserSession *)userSession;
@end

