//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SCFriendsFeedMultiRecipientContent : NSObject <NSCopying>
{
    long long _sendingState;
}

@property(readonly, nonatomic) long long sendingState; // @synthesize sendingState=_sendingState;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSendingState:(long long)arg1;

@end

