//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFriendActionButton.h"

@class SCReplyParameters;

@interface SCFriendSnapActionButton : SCFriendActionButton
{
    SCReplyParameters *_replyParameters;
}

- (void).cxx_destruct;
- (void)handleButtonPressed;
- (void)updateWithFriendActionButtonsGroupConfiguration:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2 replyParameters:(id)arg3;

@end

