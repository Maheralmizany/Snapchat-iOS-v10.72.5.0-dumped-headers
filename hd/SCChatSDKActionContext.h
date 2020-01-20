//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatSDKActionContextProtocol.h"

@class UIViewController<SCChatCellBaseGestureDelegate><SCPageNameLogging>;

@interface SCChatSDKActionContext : NSObject <SCChatSDKActionContextProtocol>
{
    UIViewController<SCChatCellBaseGestureDelegate><SCPageNameLogging> *_parentViewController;
    id <NavigationDelegate> _navigationDelegate;
}

@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak UIViewController<SCChatCellBaseGestureDelegate><SCPageNameLogging> *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (id)userSession;
- (void)operaWillAppear;
- (void)operaDidDisappear;
- (id)presentingViewController;
- (void)followDeepLinkWithUrl:(id)arg1 additionalInfo:(id)arg2;
- (void)preserveMessageForMessageId:(id)arg1 conversationId:(id)arg2;

@end

