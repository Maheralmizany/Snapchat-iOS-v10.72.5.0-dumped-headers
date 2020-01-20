//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPModuleState.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, SPPersonsSource, SPPreviewsModuleUIState, SPPreviewsViewConfiguration;

@interface SPPreviewsModuleState : NSObject <SPModuleState>
{
    _Bool _volumeEnabled;
    _Bool _viewIsAppear;
    _Bool _initialSetupPassed;
    _Bool _partialReload;
    NSString *_searchQuery;
    unsigned long long _searchMode;
    NSArray *_requiredScenariosIds;
    SPPreviewsViewConfiguration *_previewsViewConfiguration;
    SPPersonsSource *_personsSource;
    SPPreviewsModuleUIState *_waitingRestorationUIState;
    NSNumber *_selectedIndex;
    NSArray *_scenarios;
    NSArray *_scenariosIndexesForPrefetching;
    NSMutableArray *_cellModels;
    NSMutableDictionary *_indexesByScenarioId;
    NSMutableDictionary *_reenactmentResultByScenarioId;
}

@property(retain, nonatomic) NSMutableDictionary *reenactmentResultByScenarioId; // @synthesize reenactmentResultByScenarioId=_reenactmentResultByScenarioId;
@property(retain, nonatomic) NSMutableDictionary *indexesByScenarioId; // @synthesize indexesByScenarioId=_indexesByScenarioId;
@property(retain, nonatomic) NSMutableArray *cellModels; // @synthesize cellModels=_cellModels;
@property(retain, nonatomic) NSArray *scenariosIndexesForPrefetching; // @synthesize scenariosIndexesForPrefetching=_scenariosIndexesForPrefetching;
@property(retain, nonatomic) NSArray *scenarios; // @synthesize scenarios=_scenarios;
@property(retain, nonatomic) NSNumber *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) SPPreviewsModuleUIState *waitingRestorationUIState; // @synthesize waitingRestorationUIState=_waitingRestorationUIState;
@property(nonatomic) _Bool partialReload; // @synthesize partialReload=_partialReload;
@property(nonatomic) _Bool initialSetupPassed; // @synthesize initialSetupPassed=_initialSetupPassed;
@property(nonatomic) _Bool viewIsAppear; // @synthesize viewIsAppear=_viewIsAppear;
@property(retain, nonatomic) SPPersonsSource *personsSource; // @synthesize personsSource=_personsSource;
@property(nonatomic) _Bool volumeEnabled; // @synthesize volumeEnabled=_volumeEnabled;
@property(retain, nonatomic) SPPreviewsViewConfiguration *previewsViewConfiguration; // @synthesize previewsViewConfiguration=_previewsViewConfiguration;
@property(retain, nonatomic) NSArray *requiredScenariosIds; // @synthesize requiredScenariosIds=_requiredScenariosIds;
@property(nonatomic) unsigned long long searchMode; // @synthesize searchMode=_searchMode;
@property(copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
- (void).cxx_destruct;
- (void)resetScenariosRelatedProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
