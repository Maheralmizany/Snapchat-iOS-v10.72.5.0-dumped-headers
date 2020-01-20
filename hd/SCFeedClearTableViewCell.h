//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "SCActionable.h"

@class NSString, SCClearFeedCellViewModel, SCScopedAccess, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface SCFeedClearTableViewCell : UITableViewCell <SCActionable>
{
    UIButton *_clearButton;
    UIView *_textContainerView;
    UILabel *_textLabel;
    UILabel *_detailTextLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    SCScopedAccess *_clearFeedDataAccess;
    id <SCActionHandling> _actionHandler;
    SCClearFeedCellViewModel *_viewModel;
}

@property(retain, nonatomic) SCClearFeedCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)clearConversation;
- (void)clearButtonPressed;
- (void)updateViews;
- (id)activityIndicatorView;
- (double)_clearButtonRightMarginLength;
- (double)_clearButtonInsetsLength;
- (id)_clearButtonImage;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

