//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionable.h"
#import "SCCollectionViewSection.h"
#import "SCSectionKitCollectionViewViewMoreActionableDelegate.h"
#import "SCUnifiedProfileStoriesSectionDataProvidingDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class NSArray, NSString, NSValue, SCCollectionViewSectionUpdateModel, SCUnifiedProfileCollectionViewStoriesCell, SCUnifiedProfileListCellViewModel, UICollectionView;

@interface SCUnifiedProfileStoriesSection : NSObject <SCUnifiedProfileStoriesSectionDataProvidingDelegate, UICollectionViewDataSource, UICollectionViewDelegate, SCSectionKitCollectionViewViewMoreActionableDelegate, SCCollectionViewSection, SCActionable>
{
    SCUnifiedProfileListCellViewModel *_storiesCellViewModel;
    NSArray *_storiesCollectionCellViewModels;
    SCUnifiedProfileCollectionViewStoriesCell *_storiesCellView;
    UICollectionView *_carouselCollectionView;
    id <SCCollectionViewSectionSupplementaryViewProviding><SCCollectionViewSupplementaryViewModelsConfigurable> _supplementaryViewProvider;
    id <SCPerforming> _sectionDataUpdatePerformer;
    NSValue *_storiesSectionEdgeInsets;
    NSString *_storiesCellUniqueReuseIdentifier;
    NSString *_storiesCarouselCellUniqueReuseIdentifer;
    _Bool _expanded;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    long long _dataLoadingStatus;
    id <SCActionHandling> _actionHandler;
    id <SCUnifiedProfileStoriesSectionDataProviding> _sectionDataProvider;
}

@property(retain, nonatomic) id <SCUnifiedProfileStoriesSectionDataProviding> sectionDataProvider; // @synthesize sectionDataProvider=_sectionDataProvider;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void).cxx_destruct;
- (_Bool)_updateStoriesCollectionViewModelsWithContainerViewModel:(id)arg1;
- (_Bool)_updateStoriesCellViewModelWithViewModel:(id)arg1 carouselViewModels:(id)arg2;
- (void)_updateSection;
- (id)_prepareAndReturnStoriesCarouselContainerCell:(unsigned long long)arg1;
- (id)_prepareAndReturnStoriesCell:(unsigned long long)arg1;
- (void)viewMoreCollectionViewCellDidTapViewMore:(id)arg1;
- (void)storiesSectionDataProviderDidUpdateViewModels:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)supplementaryViewProvider;
- (double)minimumSectionLineSpacing;
- (id)sectionInsets;
- (void)applyConfiguration:(id)arg1;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
- (id)initWithSupplementaryViewProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end
