//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SCBloopsUserIdsModel : NSObject <NSCopying>
{
    NSArray *_userIds;
    NSString *_conversationId;
}

@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSArray *userIds; // @synthesize userIds=_userIds;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserIds:(id)arg1 conversationId:(id)arg2;

@end
