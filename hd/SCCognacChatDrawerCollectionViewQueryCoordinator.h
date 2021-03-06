//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSearchQueryCoordinating.h"

@class NSString, SCCognacDataStorage, SCSearchNavigationCoordinator, SCSearchQuery;

@interface SCCognacChatDrawerCollectionViewQueryCoordinator : NSObject <SCSearchQueryCoordinating>
{
    SCCognacDataStorage *_dataStorage;
    _Bool isLoading;
    SCSearchQuery *currentQuery;
    SCSearchNavigationCoordinator *navigationCoordinator;
}

@property(nonatomic) __weak SCSearchNavigationCoordinator *navigationCoordinator; // @synthesize navigationCoordinator;
@property(copy, nonatomic) SCSearchQuery *currentQuery; // @synthesize currentQuery;
@property(readonly, nonatomic) _Bool isLoading; // @synthesize isLoading;
- (void).cxx_destruct;
- (void)resultsForQuery:(id)arg1 updatingBlock:(CDUnknownBlockType)arg2;
- (_Bool)canPerformQuery:(id)arg1;
- (id)initWithDataStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

