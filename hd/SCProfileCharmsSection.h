//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCActionHandling.h"
#import "SCActionable.h"
#import "SCCollectionViewSection.h"
#import "SCSectionDataProvidingDelegate.h"
#import "UICollectionViewDataSource.h"

@class NSArray, NSDictionary, NSString, SCCharmsBlizzardLogger, SCCollectionViewCarouselSectionConfiguration, SCCollectionViewSectionUpdateModel, SCContainerCellViewModel, SCProfileCharmsCollectionViewCell;

@interface SCProfileCharmsSection : NSObject <SCActionHandling, SCSectionDataProvidingDelegate, UICollectionViewDataSource, SCCollectionViewSection, SCActionable>
{
    NSString *_profileSessionId;
    SCCollectionViewCarouselSectionConfiguration *_charmsSectionConfiguration;
    SCContainerCellViewModel *_emptyStateCellViewModel;
    NSArray *_containerCellViewModels;
    NSDictionary *_reuseCellClassesByIdentifiers;
    NSDictionary *_configurationBlockByIdentifiers;
    id <SCCollectionViewSectionSupplementaryViewProviding><SCCollectionViewSupplementaryViewModelsConfigurable> _supplementaryViewProvider;
    id <SCPerforming> _sectionDataUpdatePerformer;
    SCProfileCharmsCollectionViewCell *_collectionViewCell;
    SCCollectionViewSectionUpdateModel *_sectionUpdateModel;
    id <SCCollectionViewSectionDelegate> _delegate;
    id <SCSearchIntentHandler> _intentHandler_DEPRECATED;
    long long _dataLoadingStatus;
    id <SCActionHandling> _actionHandler;
    id <SCSectionDataProviding> _charmsDataProvider;
    id <SCSectionDataProviding> _emptyStateDataProvider;
    SCCharmsBlizzardLogger *_charmsBlizzardLogger;
}

@property(nonatomic) __weak SCCharmsBlizzardLogger *charmsBlizzardLogger; // @synthesize charmsBlizzardLogger=_charmsBlizzardLogger;
@property(retain, nonatomic) id <SCSectionDataProviding> emptyStateDataProvider; // @synthesize emptyStateDataProvider=_emptyStateDataProvider;
@property(retain, nonatomic) id <SCSectionDataProviding> charmsDataProvider; // @synthesize charmsDataProvider=_charmsDataProvider;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) long long dataLoadingStatus; // @synthesize dataLoadingStatus=_dataLoadingStatus;
@property(nonatomic) __weak id <SCSearchIntentHandler> intentHandler_DEPRECATED; // @synthesize intentHandler_DEPRECATED=_intentHandler_DEPRECATED;
@property(nonatomic) __weak id <SCCollectionViewSectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) SCCollectionViewSectionUpdateModel *sectionUpdateModel; // @synthesize sectionUpdateModel=_sectionUpdateModel;
- (void).cxx_destruct;
- (void)_logCharmsDisplayNamesWithContainerCellViewModels:(id)arg1 description:(id)arg2;
- (void)_logIndexPaths:(id)arg1 description:(id)arg2;
- (id)_configuration;
- (void)_performBatchUpdatesContainerCellViewModels:(id)arg1;
- (void)_updateWithEmptyStateDataProvider;
- (void)_updateWithContainerCellViewModels:(id)arg1 supplementaryViewModels:(id)arg2;
- (void)_updateWithCharmsDataProvider;
- (void)_reloadSection;
- (void)_reloadSupplementaryViewModels;
- (void)_updateWithConfiguration;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)sectionDataProviderDidUpdateViewModels:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)supplementaryViewProvider;
- (struct CGSize)sizeForItemAtIndexInSection:(unsigned long long)arg1 withWidth:(double)arg2;
- (id)cellForItemAtIndexInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfCellsInSection;
- (id)reuseCellClassesByIdentifiers;
- (void)applyConfiguration:(id)arg1;
- (void)tearDown;
- (void)setUp;
- (id)initWithProfileSessionId:(id)arg1 supplementaryViewProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <SCCollectionViewSectionLayoutProviding> layoutCalculator;
@property(readonly) Class superclass;

@end

