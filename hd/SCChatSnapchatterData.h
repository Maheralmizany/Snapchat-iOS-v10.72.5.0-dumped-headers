//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSNumber, SCSnapchatter;

@interface SCChatSnapchatterData : NSObject <NSCopying, NSCoding>
{
    SCSnapchatter *_snapchatter;
    NSNumber *_friendStatus;
}

@property(readonly, copy, nonatomic) NSNumber *friendStatus; // @synthesize friendStatus=_friendStatus;
@property(readonly, copy, nonatomic) SCSnapchatter *snapchatter; // @synthesize snapchatter=_snapchatter;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapchatter:(id)arg1 friendStatus:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

