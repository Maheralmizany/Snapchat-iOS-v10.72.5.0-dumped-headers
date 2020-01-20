//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class SCNMessagingUUID;

@interface SCNativeQueryFeedParameters : NSObject <NSCopying>
{
    long long _paginationTimestamp;
    SCNMessagingUUID *_conversationId;
}

@property(readonly, copy, nonatomic) SCNMessagingUUID *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, nonatomic) long long paginationTimestamp; // @synthesize paginationTimestamp=_paginationTimestamp;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPaginationTimestamp:(long long)arg1 conversationId:(id)arg2;

@end
