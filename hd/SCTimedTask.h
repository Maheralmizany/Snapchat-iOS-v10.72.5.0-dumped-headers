//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCTimedTask : NSObject
{
    CDUnknownBlockType _task;
    CDStruct_1b6d18a9 _targetTime;
}

@property(copy, nonatomic) CDUnknownBlockType task; // @synthesize task=_task;
@property(nonatomic) CDStruct_1b6d18a9 targetTime; // @synthesize targetTime=_targetTime;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTargetTime:(CDStruct_1b6d18a9)arg1 task:(CDUnknownBlockType)arg2;

@end

