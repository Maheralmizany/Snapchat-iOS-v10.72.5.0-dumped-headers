//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SelectFriendsViewController.h"

@class NSArray;

@interface CustomStoryViewersViewController : SelectFriendsViewController
{
    NSArray *_outgoingSnapchatters;
    NSArray *_sectionedSnapchatters;
    NSArray *_sectionedSnapchatterKeys;
    _Bool _modifiedSettings;
    id <CustomStoryViewersViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool modifiedSettings; // @synthesize modifiedSettings=_modifiedSettings;
@property(nonatomic) __weak id <CustomStoryViewersViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)sectionedSnapchatters;
- (id)sectionedSnapchatterKeys;
- (id)outgoingSnapchatters;
- (void)didSelectCell:(id)arg1;
- (void)leftButtonPressed;
- (unsigned long long)supportedInterfaceOrientations;
- (id)getTitle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithOutgoingSnapchatters:(id)arg1;

@end

