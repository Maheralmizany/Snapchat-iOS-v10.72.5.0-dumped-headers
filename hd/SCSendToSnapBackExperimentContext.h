//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCSendToSnapBackExperimentContext : SCExperimentContext
{
    _Bool _enabled;
    _Bool _useReplyAsSectionTitle;
    _Bool _aboveBestFriends;
    long long _timeDeltaInMinutes;
    long long _sectionLength;
}

@property(readonly, nonatomic) _Bool aboveBestFriends; // @synthesize aboveBestFriends=_aboveBestFriends;
@property(readonly, nonatomic) _Bool useReplyAsSectionTitle; // @synthesize useReplyAsSectionTitle=_useReplyAsSectionTitle;
@property(readonly, nonatomic) long long sectionLength; // @synthesize sectionLength=_sectionLength;
@property(readonly, nonatomic) long long timeDeltaInMinutes; // @synthesize timeDeltaInMinutes=_timeDeltaInMinutes;
@property(readonly, nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void)setupParameters;
- (id)experimentName;

@end

