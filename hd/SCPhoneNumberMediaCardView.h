//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseMediaCardView.h"

#import "CNContactViewControllerDelegate.h"
#import "SCActionMenuCustomButtonsCell.h"
#import "SCActionMenuRenderableCellContentView.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, SCStatusView, SCUserSession, UITapGestureRecognizer, UIViewController<SCActionSheetDelegate>;

@interface SCPhoneNumberMediaCardView : SCBaseMediaCardView <CNContactViewControllerDelegate, UIGestureRecognizerDelegate, SCActionMenuRenderableCellContentView, SCActionMenuCustomButtonsCell>
{
    SCStatusView *_phoneNumberStatusView;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController<SCActionSheetDelegate> *_parentVC;
    id <SCChatMediaCardViewModel><SCChatPhoneMediaCardViewModel> _viewModel;
    SCUserSession *_userSession;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dismissButtonPressed;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)resetWithOriginalSettings;
- (void)rerenderForActionMenuWithBoundingSize:(struct CGSize)arg1;
- (void)_addToContacts:(id)arg1 formattedPhoneNumber:(id)arg2;
- (id)extraActionMenuButtons;
- (void)onTap:(id)arg1;
- (double)height;
- (void)updateWithViewModel:(id)arg1 parentVC:(id)arg2;
- (id)initWithViewModel:(id)arg1 parentVC:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
