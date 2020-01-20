//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCChatActiveRenderingConversationDataRequest : NSObject <NSCopying>
{
    id <SCChatRenderingConversation> _conversation;
    NSString *_token;
}

@property(readonly, copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) id <SCChatRenderingConversation> conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConversation:(id)arg1 token:(id)arg2;

@end

