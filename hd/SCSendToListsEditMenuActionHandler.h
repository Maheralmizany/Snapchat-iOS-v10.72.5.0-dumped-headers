//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCSendToListEditMenuContext.h"

@class NSString, SCSearchView, SCSendToListEditMenuView, SCSendToListsRecipientPickerPresenter, UIViewController;

@interface SCSendToListsEditMenuActionHandler : NSObject <SCSendToListEditMenuContext>
{
    UIViewController *_presentingViewController;
    SCSendToListEditMenuView *_listEditMenuView;
    SCSendToListsRecipientPickerPresenter *_recipientPickerPresenter;
    SCSearchView *_searchView;
}

- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (void)onEditListWithIdentifier:(id)arg1;
- (void)onCreateNewList;
- (void)onTapOverlay;
- (void)onDismiss;
- (void)setListEditMenuView:(id)arg1;
- (id)initWithPresentingViewController:(id)arg1 recipientPickerPresenter:(id)arg2 searchView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

