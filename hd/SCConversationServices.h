//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCConversationServices : NSObject
{
    id <SCChatConversationManager> _conversationManager;
    SCLazy *_clearConversationActionHandler;
}

@property(readonly, nonatomic) SCLazy *clearConversationActionHandler; // @synthesize clearConversationActionHandler=_clearConversationActionHandler;
@property(readonly, nonatomic) id <SCChatConversationManager> conversationManager; // @synthesize conversationManager=_conversationManager;
- (void).cxx_destruct;
- (id)initWithConversationManager:(id)arg1 clearConversationActionHandler:(id)arg2;

@end
