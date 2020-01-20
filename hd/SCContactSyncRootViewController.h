//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCContactsAccessDelegate.h"
#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCLeftSwipeableDismissTransitionControllerDelegate.h"
#import "SCTraceEnabled.h"

@class NSString, SCContactsAccessViewController, SCHeader, SCLeftSwipeableTransitionProvider, SCUserSession;

@interface SCContactSyncRootViewController : UIViewController <SCContactsAccessDelegate, SCHeaderDelegate, SCHeaderDataSource, SCLeftSwipeableDismissTransitionControllerDelegate, SCTraceEnabled>
{
    SCUserSession *_userSession;
    SCHeader *_header;
    SCContactsAccessViewController *_contactsAccessViewController;
    _Bool _skipPhoneVerification;
    _Bool _openingFromSendTo;
    id <SCContactSyncRootViewControllerDelegate> _delegate;
    SCLeftSwipeableTransitionProvider *_transitionProvider;
    NSString *_sourcePageName;
}

@property(copy, nonatomic) NSString *sourcePageName; // @synthesize sourcePageName=_sourcePageName;
@property(nonatomic) _Bool openingFromSendTo; // @synthesize openingFromSendTo=_openingFromSendTo;
@property(nonatomic) _Bool skipPhoneVerification; // @synthesize skipPhoneVerification=_skipPhoneVerification;
@property(retain, nonatomic) SCLeftSwipeableTransitionProvider *transitionProvider; // @synthesize transitionProvider=_transitionProvider;
@property(nonatomic) __weak id <SCContactSyncRootViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (_Bool)shouldShowHeaderLabel:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)leftButtonPressed;
- (id)getSourcePageName;
- (long long)getProfilePageType;
- (void)didGrantAccessSuccessfully;
- (void)initiatePageDismissInteractive:(_Bool)arg1;
- (void)showContactsAccessWorkflow;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

