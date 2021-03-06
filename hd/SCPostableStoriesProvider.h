//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCPostableStoriesProviding.h"

@class NSArray, NSString, SCBehaviorSubject, SCDocObjectContext, SCExperimentManager, SCObservable, SCPostableStoriesUpdateListenerAnnouncer, SCQueuePerformer;

@interface SCPostableStoriesProvider : NSObject <SCPostableStoriesProviding>
{
    SCQueuePerformer *_performer;
    SCDocObjectContext *_docObjectContext;
    SCExperimentManager *_experimentManager;
    SCBehaviorSubject *_postableOurStoriesPublisher;
    SCBehaviorSubject *_postableCustomStoriesPublisher;
    id <SCDocObjectObservationToken> _postableCustomStoriesToken;
    id <SCDocObjectObservationToken> _postableOurStoriesToken;
    NSArray *_postableCustomStories;
    NSArray *_postableOurStories;
    SCPostableStoriesUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_announcePerformer;
}

- (void).cxx_destruct;
- (void)_announcePostableStoriesDidChangeOnPerformer;
- (void)_announcePostableStoriesDidChange;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_updateCustomStoriesFetchedResult:(id)arg1;
- (id)_fetchAndObserveCustomStories;
- (void)_updateOurStoriesFetchedResult:(id)arg1;
- (id)_fetchAndObserveOurStories;
- (void)_warmUpCache;
- (void)warmUpCache;
- (void)postableCustomStoriesWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)postableOurStoriesWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SCObservable *postableCustomStoriesObservable;
@property(readonly, nonatomic) SCObservable *postableOurStoriesObserverable;
- (id)initWithDocObjectContext:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

