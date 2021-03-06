//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCService.h"
#import "SCUserSessionScoped.h"

@class NSArray, NSString, SCDataObjectContext, SCGalleryFlashbackSearch, SCGalleryLogger, SCGalleryPeopleSearch, SCGallerySearchQueryResultsCollectorListenerAnnouncer, SCGalleryTagClusterSearch, SCGalleryTakenNearbySearch, SCQueuePerformer, SCSentinel;

@interface SCGallerySearchQueryResultsCollector : NSObject <SCService, SCUserSessionScoped>
{
    struct mutex _mutex;
    SCQueuePerformer *_performer;
    SCGalleryFlashbackSearch *_flashbackSearch;
    SCGalleryTakenNearbySearch *_takenNearbySearch;
    SCGalleryTagClusterSearch *_tagClusteringSearch;
    SCGalleryPeopleSearch *_peopleSearch;
    SCGalleryLogger *_galleryLogger;
    NSArray *_searchQueryResults;
    id <SCObserving> _observeContext;
    SCGallerySearchQueryResultsCollectorListenerAnnouncer *_announcer;
    _Bool _outdated;
    SCSentinel *_invalidateSentinel;
    SCDataObjectContext *_dataObjectContext;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_observeProfileChanges:(id)arg1;
- (void)_unobserveProfileChanges;
- (void)_markSearchQueryResultsOutdated;
- (_Bool)_isInvalidated;
- (void)invalidate;
- (void)runWithServiceTerm:(id)arg1;
- (id)dedicatedQueue;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)setAllSearchQueryResults:(id)arg1;
- (id)allSearchQueryResults;
- (void)markSearchQueryResultsOutdated;
- (void)fetchTopSnapIdsWithResultHandler:(CDUnknownBlockType)arg1;
- (id)initWithGallerySearch:(id)arg1 suggestedQueryUpdater:(id)arg2 userSession:(id)arg3 dataObjectContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

