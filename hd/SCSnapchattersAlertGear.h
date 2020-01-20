//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCBlockSnapchatterActionHandler, SCDeleteSnapchatterActionHandler, SCEditSnapchatterDisplayNameActionHandler, SCIgnoreSnapchatterActionHandler, SCMuteSnapchatterStoryActionHandler, SCSnapchatter, SCUnblockSnapchatterActionHandler, SCUnmuteSnapchatterStoryActionHandler;

@interface SCSnapchattersAlertGear : NSObject
{
    SCSnapchatter *_snapchatter;
    long long _placement;
    SCDeleteSnapchatterActionHandler *_deleteSnapchatterActionHandler;
    SCBlockSnapchatterActionHandler *_blockSnapchatterActionHandler;
    SCUnblockSnapchatterActionHandler *_unblockSnapchatterActionHandler;
    SCIgnoreSnapchatterActionHandler *_ignoreSnapchatterActionHandler;
    SCMuteSnapchatterStoryActionHandler *_muteSnapchatterStoryActionHandler;
    SCUnmuteSnapchatterStoryActionHandler *_unmuteSnapchatterStoryActionHandler;
    SCEditSnapchatterDisplayNameActionHandler *_editSnapchatterDisplayNameActionHandler;
    id <SCActionHandling> _reportActionHander;
}

- (void).cxx_destruct;
- (id)reportActionButton;
- (id)unblockActionButton;
- (id)blockActionButtonHeavyStyle;
- (id)blockActionButtonLightStyle;
- (id)removeFriendActionButtonHeavyStyle;
- (id)removeFriendActionButtonLightStyle;
- (id)unmuteStoryActionButton;
- (id)muteStoryActionButton;
- (id)ignoreActionButton;
- (id)editDisplayNameActionButton;
- (id)initWithSnapchatter:(id)arg1 snapchattersDataMutator:(id)arg2 placement:(long long)arg3 reportActionHander:(id)arg4;

@end

