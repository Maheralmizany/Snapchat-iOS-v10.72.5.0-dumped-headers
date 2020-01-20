//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCUnifiedProfileListCollectionViewCell.h"

#import "SCActionHandlingDelegate.h"
#import "SCActionable.h"

@class NSString;

@interface SCUnifiedProfileSnapchatterCollectionViewCell : SCUnifiedProfileListCollectionViewCell <SCActionHandlingDelegate, SCActionable>
{
    id _viewModel;
    id <SCActionHandling> _actionHandler;
}

@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (id)viewModel;
- (void).cxx_destruct;
- (_Bool)handleActionWithActionModel:(id)arg1 fromSourceView:(id)arg2;
- (void)_updateRightIconViewBasedOnViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)setInfoFetcher:(id)arg1;
- (void)setImageDownloader:(id)arg1;
- (struct CGSize)sizeForRightIconView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
