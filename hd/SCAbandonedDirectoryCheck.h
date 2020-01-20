//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCManagedDatastore.h"

@class NSDictionary, NSString, NSURL;

@interface SCAbandonedDirectoryCheck : NSObject <SCManagedDatastore>
{
    NSURL *_rootDirectory;
    double _maxTimeUnmodified;
    NSDictionary *_metrics;
}

+ (_Bool)markDirectory:(id)arg1;
- (void).cxx_destruct;
- (id)reportMetrics;
- (void)handleEmergencyDiskConditionWithDispatchGroup:(id)arg1;
- (void)removeAllUserSessionDataAsync:(id)arg1;
- (void)removeExpiredContentAsync:(id)arg1 reason:(unsigned long long)arg2 dispatchGroup:(id)arg3;
- (id)kindName;
- (void)sweepDirectoriesWhileIgnoring:(id)arg1 dispatchGroup:(id)arg2;
- (_Bool)_shouldIgnoreDirectory:(id)arg1 toIgnore:(id)arg2;
- (id)initWithDirectory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
