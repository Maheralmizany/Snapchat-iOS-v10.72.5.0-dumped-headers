//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray, NSString;

@interface SCActionmojiStatus : NSObject <NSCopying>
{
    NSString *_optionId;
    NSString *_title;
    NSArray *_actionmojis;
    long long _rank;
}

+ (id)actionmojiStatusWithCheckinActionmojiOption:(id)arg1;
@property(readonly, nonatomic) long long rank; // @synthesize rank=_rank;
@property(readonly, copy, nonatomic) NSArray *actionmojis; // @synthesize actionmojis=_actionmojis;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *optionId; // @synthesize optionId=_optionId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithOptionId:(id)arg1 title:(id)arg2 actionmojis:(id)arg3 rank:(long long)arg4;

@end

