//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCBloopsOnboardingResourcesService.h"
#import "SPScenarioResourcesServiceOutput.h"

@class NSMapTable, NSString, SCQueuePerformer, Splendid;

@interface SCBloopsOnboardingResourcesServiceImpl : NSObject <SPScenarioResourcesServiceOutput, SCBloopsOnboardingResourcesService>
{
    NSMapTable *_bloopsDict;
    SCQueuePerformer *_performer;
    Splendid *_splendidInstance;
}

@property(retain, nonatomic) Splendid *splendidInstance; // @synthesize splendidInstance=_splendidInstance;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(copy, nonatomic) NSMapTable *bloopsDict; // @synthesize bloopsDict=_bloopsDict;
- (void).cxx_destruct;
- (void)_completeWithBloops:(id)arg1 error:(id)arg2;
- (void)_processOnboardingBloops:(id)arg1 withError:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scenarioResourcesService:(id)arg1 didFailLoadResourcesForScenarios:(id)arg2 withError:(id)arg3;
- (void)scenarioResourcesService:(id)arg1 didLoadResourcesForScenarios:(id)arg2;
- (void)obtainBloopsFromJSONString:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)initWithSplendid:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

