//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface SCSnapchattersFriendmoji : NSObject <NSCopying>
{
    NSString *_categoryName;
    double _expirationTimestamp;
}

@property(readonly, nonatomic) double expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(readonly, copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCategoryName:(id)arg1 expirationTimestamp:(double)arg2;
- (id)initWithSCCFriendmoji:(id)arg1;

@end

