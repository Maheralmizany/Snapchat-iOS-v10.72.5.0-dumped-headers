//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaWebAppChatPreviewViewDelegate.h"

@class NSString, NSTimer, SCOperaWebAppChatPreviewView, UIView;

@interface SCOperaWebAppChatPreviewController : NSObject <SCOperaWebAppChatPreviewViewDelegate>
{
    id <SCOperaWebAppPresenceFrameProvider> _presenceFramePrivider;
    struct CGRect _presenceFrame;
    UIView *_containerView;
    NSTimer *_fadeOutTimer;
    NSString *_currentUsername;
    SCOperaWebAppChatPreviewView *_chatPreviewView;
    id <SCOperaWebAppChatPreviewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCOperaWebAppChatPreviewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearUnreadChats;
- (void)_fadeOutTimerDidFire;
- (void)_updatePreviewWithPresenceFrame:(struct CGRect)arg1;
- (void)_updatePreview:(id)arg1 animated:(_Bool)arg2;
- (struct CGRect)_presenceFrame;
- (void)didTapChatPreviewView:(id)arg1;
- (void)updatePreviewFrame;
- (void)updateWithChatModel:(id)arg1;
- (id)initWithPresenceFrameProvider:(id)arg1 containerView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
