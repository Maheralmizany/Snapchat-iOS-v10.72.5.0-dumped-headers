//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSString;

@interface SCCognacUserAppPreferences : NSObject <NSCopying, NSCoding>
{
    _Bool _acceptedContentAlert;
    _Bool _acceptedLeaderboardAlert;
    _Bool _acceptedLeaderboardGameAlert;
    NSString *_appId;
    NSDate *_updateDate;
}

@property(readonly, nonatomic) _Bool acceptedLeaderboardGameAlert; // @synthesize acceptedLeaderboardGameAlert=_acceptedLeaderboardGameAlert;
@property(readonly, nonatomic) _Bool acceptedLeaderboardAlert; // @synthesize acceptedLeaderboardAlert=_acceptedLeaderboardAlert;
@property(readonly, nonatomic) _Bool acceptedContentAlert; // @synthesize acceptedContentAlert=_acceptedContentAlert;
@property(readonly, copy, nonatomic) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAppId:(id)arg1 updateDate:(id)arg2 acceptedContentAlert:(_Bool)arg3 acceptedLeaderboardAlert:(_Bool)arg4 acceptedLeaderboardGameAlert:(_Bool)arg5;

@end

