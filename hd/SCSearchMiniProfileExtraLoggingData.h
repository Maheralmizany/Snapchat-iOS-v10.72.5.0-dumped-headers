//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCSearchMiniProfileExtraLoggingData : NSObject <NSCopying>
{
    NSString *_searchSessionId;
    NSString *_queryUUID;
    NSString *_sectionType;
    NSString *_resultRankingId;
}

@property(readonly, copy, nonatomic) NSString *resultRankingId; // @synthesize resultRankingId=_resultRankingId;
@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, copy, nonatomic) NSString *queryUUID; // @synthesize queryUUID=_queryUUID;
@property(readonly, copy, nonatomic) NSString *searchSessionId; // @synthesize searchSessionId=_searchSessionId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSearchSessionId:(id)arg1 queryUUID:(id)arg2 sectionType:(id)arg3 resultRankingId:(id)arg4;

@end

