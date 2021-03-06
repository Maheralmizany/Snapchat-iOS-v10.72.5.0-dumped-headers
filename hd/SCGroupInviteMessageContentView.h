//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCGroupInviteJoinContextDelegate.h"
#import "SCGroupInviteViewerContext.h"

@class NSString, SCGroupInviteJoinContext, SCGroupInviteStickerViewer, SCGroupInviteUIDependencies;

@interface SCGroupInviteMessageContentView : UIView <SCGroupInviteViewerContext, SCGroupInviteJoinContextDelegate>
{
    SCGroupInviteStickerViewer *_stickerView;
    SCGroupInviteJoinContext *_joinContext;
    SCGroupInviteUIDependencies *_dependencies;
    id <SCComposerNetworkingClientProtocol> _networkingClient;
    CDUnknownBlockType _openDetailsView;
    id <SCGroupInviteJoinContextDelegate> _joinContextDelegate;
}

@property(nonatomic) __weak id <SCGroupInviteJoinContextDelegate> joinContextDelegate; // @synthesize joinContextDelegate=_joinContextDelegate;
@property(copy, nonatomic) CDUnknownBlockType openDetailsView; // @synthesize openDetailsView=_openDetailsView;
@property(retain, nonatomic) id <SCComposerNetworkingClientProtocol> networkingClient; // @synthesize networkingClient=_networkingClient;
- (void).cxx_destruct;
- (id)parentViewControllerForJoinContext:(id)arg1;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
@property(retain, nonatomic) id <SCGroupInviteJoinContext> joinContext; // @synthesize joinContext=_joinContext;
- (void)openInviteDetailsWithGroupId:(id)arg1 inviteId:(id)arg2;
- (void)layoutSubviews;
- (id)stickerView;
- (id)initWithDependencies:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

