//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCChatBaseTableView, SCCheetahNewChatsAffordanceView;

@interface SCChatTableContainerViewV3 : UIView
{
    SCCheetahNewChatsAffordanceView *_newChatsAffordanceView;
    id <SCNewChatsAffordanceDelegate> _newChatsAffordanceDelegate;
    SCChatBaseTableView *_tableView;
}

- (void).cxx_destruct;
- (void)setMaskViewVisible:(_Bool)arg1;
- (void)hideChatAffordanceAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideChatAffordanceIfNecessaryAnimated:(_Bool)arg1;
- (void)_fadeInNewChatsAffordance;
- (void)showChatAffordanceOnBottomIfNecessary;
- (void)showChatAffordanceOnTopIfNecessary;
- (id)newChatsAffordanceView;
- (void)layoutSubviews;
- (id)initWithTableView:(id)arg1 newChatsAffordanceDelegate:(id)arg2;

@end

