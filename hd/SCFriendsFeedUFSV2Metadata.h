//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"

@class NSString, SCFriendsFeedPaginationMetadata, SCFriendsFeedSyncMetadata;

@interface SCFriendsFeedUFSV2Metadata : SCDocObject <NSCopying>
{
    NSString *_userId;
    SCFriendsFeedSyncMetadata *_syncMetadata;
    SCFriendsFeedPaginationMetadata *_paginationMetadata;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, copy, nonatomic) SCFriendsFeedPaginationMetadata *paginationMetadata; // @synthesize paginationMetadata=_paginationMetadata;
@property(readonly, copy, nonatomic) SCFriendsFeedSyncMetadata *syncMetadata; // @synthesize syncMetadata=_syncMetadata;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUserId:(id)arg1 syncMetadata:(id)arg2 paginationMetadata:(id)arg3;

@end

