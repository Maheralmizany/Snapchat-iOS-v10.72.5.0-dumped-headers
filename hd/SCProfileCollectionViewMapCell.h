//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCUnifiedProfileBaseCollectionViewCell.h"

#import "SCActionable.h"

@class NSString, SCProfileEmbeddedMapViewContainer, SCProfileMapView, SCUserSession;

@interface SCProfileCollectionViewMapCell : SCUnifiedProfileBaseCollectionViewCell <SCActionable>
{
    SCUserSession *_userSession;
    SCProfileMapView *_profileMapView;
    id _viewModel;
    id <SCActionHandling> _actionHandler;
    SCProfileEmbeddedMapViewContainer *_embeddedMapViewContainer;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) SCProfileEmbeddedMapViewContainer *embeddedMapViewContainer; // @synthesize embeddedMapViewContainer=_embeddedMapViewContainer;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)viewModel;
- (void).cxx_destruct;
- (void)handleTapAction;
- (id)_mapCellViewModel;
- (void)_setupProfileMapView;
- (void)setViewModel:(id)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

