//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureLensInfoButton.h"

@class NSArray, NSString, NSTimer, SCDisposableObserver, SCFeatureReference, SCLazy, SCLens, SCLensInfoButton, SCReplyParameters, SCShapeView, UIView;

@interface SCFeatureLensInfoButtonImpl : SCFeature <SCFeatureLensInfoButton>
{
    UIView *_view;
    SCLensInfoButton *_infoButton;
    SCLens *_selectedLens;
    NSArray *_positionConstraints;
    SCFeatureReference *_lensCarouselRef;
    SCLazy *_experimentManager;
    SCReplyParameters *_replyParameters;
    SCDisposableObserver *_activationStateObserver;
    SCDisposableObserver *_selectedLensObserver;
    SCShapeView *_attributionSlugView;
    NSTimer *_attributionSlugTimer;
    id <SCFeatureLensInfoButtonDelegate> delegate;
    id <SCFeatureLensInfoButtonPositioningDelegate> positioningDelegate;
}

@property(nonatomic) __weak id <SCFeatureLensInfoButtonPositioningDelegate> positioningDelegate; // @synthesize positioningDelegate;
@property(nonatomic) __weak id <SCFeatureLensInfoButtonDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (long long)_lensInfoButtonType;
- (void)_setInfoButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_positionConstraintsForTopLeftLayout;
- (id)_positionConstraintsForBottomLayout;
- (id)_hidableViewContainer;
- (void)_updateConstraints;
- (void)_runAttributionSlugTimerIfNeeded;
- (void)_stopAttributionSlugTimer;
- (void)_updateAttributionIfNeeded;
- (void)_recreateInfoButtonIfNeeded;
- (void)_createinfoButtonHidden;
- (void)setReplyParameters:(id)arg1;
- (void)updateState;
- (_Bool)pointInsideLensInfoButton:(struct CGPoint)arg1;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (void)dealloc;
- (id)initWithLensCarousel:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
