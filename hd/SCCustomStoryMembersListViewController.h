//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "UICollectionViewDelegate.h"

@class NSString, SCSearchQueryResultController, SIGSearchQueryTextFieldHandler, UICollectionView;

@interface SCCustomStoryMembersListViewController : SIGSubscreenViewController <UICollectionViewDelegate>
{
    id <SCSearchSectionCreating> _sectionCreator;
    id <SCCustomStoryMembersListDelegate> _delegate;
    SCSearchQueryResultController *_queryResultController;
    SIGSearchQueryTextFieldHandler *_textFieldHandler;
    UICollectionView *_collectionView;
}

- (void).cxx_destruct;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didSelectDismissalActionWithHeaderItem:(id)arg1;
- (id)loadScrollView;
- (id)initWithPublicationId:(id)arg1 sectionCreator:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

