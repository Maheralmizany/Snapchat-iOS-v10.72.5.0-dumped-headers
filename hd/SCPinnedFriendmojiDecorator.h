//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCFriendmojiDecorator.h"

@class SCLazy;

@interface SCPinnedFriendmojiDecorator : NSObject <SCFriendmojiDecorator>
{
    SCLazy *_pinnedConversationsDataCoordinator;
}

- (void).cxx_destruct;
- (id)friendmojiCategoryNameForIdentifier:(id)arg1;
- (id)initWithPinnedConversationsDataCoordinator:(id)arg1;

@end

