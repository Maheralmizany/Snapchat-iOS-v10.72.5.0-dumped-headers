//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@interface SCLensLiveLensPreviewCameraPresenterConfiguration : NSObject <NSCopying, NSCoding>
{
    _Bool _isLensChallenges;
    long long _snapSource;
    long long _roleType;
}

@property(readonly, nonatomic) _Bool isLensChallenges; // @synthesize isLensChallenges=_isLensChallenges;
@property(readonly, nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(readonly, nonatomic) long long snapSource; // @synthesize snapSource=_snapSource;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSnapSource:(long long)arg1 roleType:(long long)arg2 isLensChallenges:(_Bool)arg3;
- (id)initWithCoder:(id)arg1;

@end

