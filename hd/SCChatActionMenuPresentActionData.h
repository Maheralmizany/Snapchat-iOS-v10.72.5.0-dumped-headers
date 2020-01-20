//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSSet, NSString;

@interface SCChatActionMenuPresentActionData : NSObject <NSCopying>
{
    NSString *_primaryMessageId;
    NSSet *_allMessageIds;
    NSString *_senderHeaderCellIdentifier;
}

@property(readonly, copy, nonatomic) NSString *senderHeaderCellIdentifier; // @synthesize senderHeaderCellIdentifier=_senderHeaderCellIdentifier;
@property(readonly, copy, nonatomic) NSSet *allMessageIds; // @synthesize allMessageIds=_allMessageIds;
@property(readonly, copy, nonatomic) NSString *primaryMessageId; // @synthesize primaryMessageId=_primaryMessageId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrimaryMessageId:(id)arg1 allMessageIds:(id)arg2 senderHeaderCellIdentifier:(id)arg3;

@end

