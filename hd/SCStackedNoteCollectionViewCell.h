//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCStackedCollectionViewCell.h"

@class SCStackedBaseNoteCollectionViewModel;

@interface SCStackedNoteCollectionViewCell : SCStackedCollectionViewCell
{
    id <SCStackedCollectionViewCellActionDelegate> _delegate;
    SCStackedBaseNoteCollectionViewModel *_viewModel;
}

+ (id)cellReuseIdentifier;
- (void).cxx_destruct;
- (void)setNoteViewCellActionDelegate:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)onTap;
- (void)play;
- (_Bool)representsMessageWithId:(id)arg1;

@end

