//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCChatConversationV3;

@interface SOJUMessageAndConversationContainer : NSObject
{
    id _sojuMessage;
    SCChatConversationV3 *_conversation;
}

@property(readonly, nonatomic) SCChatConversationV3 *conversation; // @synthesize conversation=_conversation;
@property(readonly, nonatomic) id sojuMessage; // @synthesize sojuMessage=_sojuMessage;
- (void).cxx_destruct;
- (id)initWithSojuMessage:(id)arg1 conversation:(id)arg2;

@end

