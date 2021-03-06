//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, SCAvailableScope;

@interface SCScopeLifecycleContext : NSObject
{
    SCAvailableScope *_availableScope;
    NSOperationQueue *_operationQueue;
    id <SCScopeLifecycleMonitor> _monitor;
}

@property(retain, nonatomic) id <SCScopeLifecycleMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) SCAvailableScope *availableScope; // @synthesize availableScope=_availableScope;
- (void).cxx_destruct;
- (id)initWithOperationQueue:(id)arg1 availableScope:(id)arg2 monitor:(id)arg3;

@end

