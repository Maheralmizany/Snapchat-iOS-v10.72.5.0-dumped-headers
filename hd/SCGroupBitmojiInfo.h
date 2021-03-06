//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCGroupBitmojiInfo : NSObject <NSCopying>
{
    NSString *_avatarId;
    NSString *_selfieId;
}

@property(readonly, copy, nonatomic) NSString *selfieId; // @synthesize selfieId=_selfieId;
@property(readonly, copy, nonatomic) NSString *avatarId; // @synthesize avatarId=_avatarId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAvatarId:(id)arg1 selfieId:(id)arg2;

@end

