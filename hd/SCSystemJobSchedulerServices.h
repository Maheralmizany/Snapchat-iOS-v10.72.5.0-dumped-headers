//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCLazy;

@interface SCSystemJobSchedulerServices : NSObject
{
    SCLazy *_jobScheduler;
}

@property(readonly, nonatomic) SCLazy *jobScheduler; // @synthesize jobScheduler=_jobScheduler;
- (void).cxx_destruct;
- (id)initWithJobScheduler:(id)arg1;

@end
