//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCChatMessageRenderer.h"
#import "SCGroupInviteJoinContextDelegate.h"

@class NSString, SCChatSDKActionContext, SCGroupInvite;

@interface SCGroupInviteMessageRenderer : NSObject <SCGroupInviteJoinContextDelegate, SCChatMessageRenderer>
{
    SCGroupInvite *_groupInvite;
    SCChatSDKActionContext *_actionContext;
}

@property(nonatomic) __weak SCChatSDKActionContext *actionContext; // @synthesize actionContext=_actionContext;
- (void).cxx_destruct;
- (id)parentViewControllerForJoinContext:(id)arg1;
- (void)didEndDisplayingContentView:(id)arg1;
- (void)willDisplayContentView:(id)arg1;
- (void)didTap:(struct CGPoint)arg1;
- (void)prepareContentViewForReuse:(id)arg1;
- (void)_showInviteDetailsView;
- (id)_groupInviteUIDependencies;
- (void)setupContentView:(id)arg1;
- (id)createContentView;
- (id)reuseIdentifier;
- (struct CGSize)sizeThatFits:(double)arg1;
- (id)initWithGroupInvite:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

