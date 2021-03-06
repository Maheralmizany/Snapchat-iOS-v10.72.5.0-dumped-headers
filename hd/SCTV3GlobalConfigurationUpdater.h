//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCTV3SessionWrapperListener.h"

@class NSArray, NSString, SCTSingleTaskPerformer;

@interface SCTV3GlobalConfigurationUpdater : NSObject <SCTV3SessionWrapperListener>
{
    NSArray *_configurations;
    SCTSingleTaskPerformer *_performer;
}

- (void).cxx_destruct;
- (void)_refreshStateForWrapper:(id)arg1 state:(id)arg2;
- (void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3;
- (void)deregisterSessionWrapper:(id)arg1;
- (void)registerSessionWrapper:(id)arg1;
- (id)initWithNetworkServices:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

