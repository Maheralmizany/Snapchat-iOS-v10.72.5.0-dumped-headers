//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCMediaOrchestrationCallback;

@interface SCMediaOrchestrationState : NSObject
{
    unsigned long long _status;
    SCMediaOrchestrationCallback *_callback;
}

@property(copy, nonatomic) SCMediaOrchestrationCallback *callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end
