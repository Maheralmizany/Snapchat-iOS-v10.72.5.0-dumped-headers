//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCollectionViewSection.h"
#import "SCEventAnnouncing.h"
#import "SCEventListener.h"
#import "SCMapSearchGenericCellViewModelProviderDelegate.h"
#import "SCSearchCollectionViewCellDelegate.h"
#import "SCSectionKitCollectionViewViewMoreActionableDelegate.h"

@class NSArray, NSString, SCCollectionViewSectionUpdateModel, SCEventListenerAnnouncer, SCMapSearchGenericSectionConfiguration, SCMapSearchSession, SCSearchQueryStateAwareSupplementaryViewProvider, SCSearchThresholdBasedModelContainer;

@interface SCMapSearchGenericSection : NSObject <SCEventListener, SCSearchCollectionViewCellDelegate, SCSectionKitCollectionViewViewMoreActionableDelegate, SCMapSearchGenericCellViewModelProviderDelegate, SCCollectionViewSection, SCEventAnnouncing>
{
    SCMapSearchSession *_mapSearchSession;
    SCEventListenerAnnouncer *_eventAnnouncer;
    SCMapSearchGenericSectionConfiguration *_currentConfig;
    SCSearchThresholdBasedModelContainer *_viewModelContainer;
    NSArray *_viewModelContainerExpandedObjects;
    SCSearchQueryStateAwareSupplementaryViewProvider *_queryStateAwareSupplementaryProvider;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    long long _dataLoadingStatus;
}

+ (id)_reuseIdentifierForViewModel:(id)arg1;
+ (id)announcerIdentifier;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (void)viewMoreCollectionViewCellDidTapViewMore:(id)arg1;
- (void)genericCellViewModelProviderViewModelsDidChange:(id)arg1;
- (id)_poiForPoiRow:(id)arg1;
- (void)_announceSearchAction:(long long)arg1;
- (void)_didLongPressViewModel:(id)arg1;
- (void)_didTapPoiRowViewModel:(id)arg1;
- (void)_didTapPersonViewModel:(id)arg1;
- (void)_didTapViewModel:(id)arg1;
- (void)_playPoiForViewModel:(id)arg1 sourceView:(id)arg2;
- (void)_playFriendStoriesForViewModel:(id)arg1 sourceView:(id)arg2;
- (void)searchCollectionViewCell:(id)arg1 didTriggerActionWithActionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)_viewModelContainerForConfig:(id)arg1;
- (id)_cellForViewMoreOrViewLessCellAtIndex:(unsigned long long)arg1;
- (_Bool)_indexRepresentsViewMoreOrViewLessCell:(unsigned long long)arg1;
- (_Bool)_showsViewMoreOrViewLessCell;
- (void)_expandResults;
- (void)_updateSection;
- (void)_updateWithConfig:(id)arg1;
- (void)_applyInitialConfiguration:(id)arg1;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (double)minimumSectionInteritemSpacing;
- (double)minimumSectionLineSpacing;
- (id)genericCellForItemAtIndexInSection:(unsigned long long)arg1 reuseIdentifier:(id)arg2;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (id)supplementaryViewProvider;
- (id)initWithMapSearchSession:(id)arg1 configuration:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end

