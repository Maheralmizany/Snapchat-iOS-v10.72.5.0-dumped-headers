//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCStackedChatTableViewCell.h"

@interface SCStackedNoteChatTableViewCell : SCStackedChatTableViewCell
{
    id <SCChatCellNoteGestureDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)endDisplayingCell;
- (void)willDisplayCell;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)stopAnimations;
- (void)startAnimations;
- (void)clearContents;
- (id)stackedNoteViewModel;

@end

