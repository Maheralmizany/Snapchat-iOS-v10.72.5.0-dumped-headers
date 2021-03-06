//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCOpenAddFriendsActionData : NSObject <NSCopying>
{
    NSString *_destinationTab;
    long long _placement;
}

@property(readonly, nonatomic) long long placement; // @synthesize placement=_placement;
@property(readonly, copy, nonatomic) NSString *destinationTab; // @synthesize destinationTab=_destinationTab;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDestinationTab:(id)arg1 placement:(long long)arg2;

@end

