//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "LSAEffectComponentListener.h"
#import "SCLensCarouselPresenterDelegate.h"
#import "SCLensCustomServiceProtocol.h"
#import "SCLensUserSessionLifeCycleListener.h"
#import "SCTraceEnabled.h"

@class NSString, SCLazy, SCLensCarouselPresenter, SCLensHintPresenter, SCLensLayoutProvider, SCLensUIUpdateListenerAnnouncer, SCLensUserSessionLifeCycleNotifier, SCPreferences, UICollectionView, UILabel;

@interface SCLensCustomService : NSObject <SCTraceEnabled, SCLensCarouselPresenterDelegate, SCLensUserSessionLifeCycleListener, LSAEffectComponentListener, SCLensCustomServiceProtocol>
{
    _Bool _processingEnabled;
    NSString *_lensDataProviderToken;
    SCLazy *_lensProcessingCore;
    SCLensUIUpdateListenerAnnouncer *_uiUpdateAnnouncer;
    SCLensCarouselPresenter *_carouselPresenter;
    SCLensHintPresenter *_hintPresenter;
    SCLensLayoutProvider *_layoutProvider;
    SCLensUserSessionLifeCycleNotifier *_userSessionLifeCycleNotifier;
    SCPreferences *_userPreferences;
    UICollectionView *_lensCollectionView;
    UILabel *_lensHintLabel;
    NSString *_lensActivatorId;
    id <SCLensCameraScreenDataProviderProtocol> _lensDataProvider;
    id <SCLensCustomServiceDelegate> _delegate;
    id <SCLensHintPresenterDelegate> _lensHintPresenterDelegate;
}

@property(nonatomic) __weak id <SCLensHintPresenterDelegate> lensHintPresenterDelegate; // @synthesize lensHintPresenterDelegate=_lensHintPresenterDelegate;
@property(nonatomic) __weak id <SCLensCustomServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <SCLensCameraScreenDataProviderProtocol> lensDataProvider; // @synthesize lensDataProvider=_lensDataProvider;
- (void).cxx_destruct;
- (void)lensUserSession:(id)arg1 didChangeIsValidState:(_Bool)arg2;
- (void)downloadCurrentLensIfNecessary;
- (_Bool)_isUserSessionValid;
- (_Bool)isRegressorNeeded;
- (void)initHintPresenter;
- (void)initCarouselPresenter;
- (void)initLayoutProvider;
- (void)lensCarouselPresenter:(id)arg1 didEndScrolling:(id)arg2 atLens:(id)arg3;
- (void)lensCarouselPresenter:(id)arg1 didScroll:(id)arg2 selectedCellDistance:(double)arg3 selectedLens:(id)arg4;
- (_Bool)lensCarouselPresenter:(id)arg1 isLensBeingApplied:(id)arg2;
- (void)lensCarouselPresenter:(id)arg1 didUpdateLensesList:(id)arg2;
- (void)lensCarouselPresenter:(id)arg1 didEndDisplayingLens:(id)arg2;
- (void)lensCarouselPresenter:(id)arg1 willDisplayLens:(id)arg2;
- (void)lensCarouselPresenter:(id)arg1 didSelectLens:(id)arg2 index:(unsigned long long)arg3 originalLensIndex:(unsigned long long)arg4 totalLensesCount:(unsigned long long)arg5;
- (void)effectComponent:(id)arg1 effectId:(id)arg2 savePersistentStore:(id)arg3;
- (void)effectComponent:(id)arg1 loadPersistentStoreForEffectWithId:(id)arg2;
- (id)lensHintLabel;
- (void)setupPropertiesForLensCollectionView:(id)arg1;
@property(readonly, nonatomic) UICollectionView *lensCollectionView;
- (void)willDisplayLensCarousel;
- (void)setLensIdToRestore:(id)arg1;
- (void)setLensesProcessingEnabled:(_Bool)arg1;
- (_Bool)lensesProcessingEnabled;
- (id)lensesLabelContainer;
- (id)lensesCarouselContainer;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 lensHintPresenterDelegate:(id)arg2 lensDataProvider:(id)arg3 lensProcessingCore:(id)arg4 uiUpdateAnnouncer:(id)arg5 userPreferences:(id)arg6 userSessionLifeCycleNotifier:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
