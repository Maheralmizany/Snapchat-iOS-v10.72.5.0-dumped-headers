//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCUserStoriesAdMediaPrepExperimentContext : SCExperimentContext
{
    _Bool _enableUserStoryAdMediaPrepUponInsertion;
    long long _userStoryPreWarmedAdCount;
}

@property(readonly, nonatomic) long long userStoryPreWarmedAdCount; // @synthesize userStoryPreWarmedAdCount=_userStoryPreWarmedAdCount;
@property(readonly, nonatomic) _Bool enableUserStoryAdMediaPrepUponInsertion; // @synthesize enableUserStoryAdMediaPrepUponInsertion=_enableUserStoryAdMediaPrepUponInsertion;
- (void)setupParameters;
- (id)experimentName;

@end

