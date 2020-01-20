//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SCContextualStatus : NSObject <NSCopying>
{
    NSString *_contextualId;
    NSString *_name;
    NSArray *_actionmojis;
    NSString *_creatorUserId;
    long long _rank;
}

+ (id)contextualStatusWithCheckinContextualOption:(id)arg1;
@property(readonly, nonatomic) long long rank; // @synthesize rank=_rank;
@property(readonly, copy, nonatomic) NSString *creatorUserId; // @synthesize creatorUserId=_creatorUserId;
@property(readonly, copy, nonatomic) NSArray *actionmojis; // @synthesize actionmojis=_actionmojis;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *contextualId; // @synthesize contextualId=_contextualId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithContextualId:(id)arg1 name:(id)arg2 creatorUserId:(id)arg3 actionmojis:(id)arg4 rank:(long long)arg5;

@end

