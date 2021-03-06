//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCDocObject.h"

#import "NSCopying.h"

@class NSString, SCSnapchattersIdentitySummary;

@interface SCSnapchattersFriendFeedSummary : SCDocObject <NSCopying>
{
    NSString *_feedId;
    SCSnapchattersIdentitySummary *_summary;
}

+ (struct SCDocObjectClassFunctionPointer)objectClassFunctionPointer;
+ (id)immutableObjectParse:(const void *)arg1 bufferSize:(unsigned long long)arg2;
+ (const char *)table;
@property(readonly, copy, nonatomic) SCSnapchattersIdentitySummary *summary; // @synthesize summary=_summary;
@property(readonly, copy, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFeedId:(id)arg1 summary:(id)arg2;

@end

