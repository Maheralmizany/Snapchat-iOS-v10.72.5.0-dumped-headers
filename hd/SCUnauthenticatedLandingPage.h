//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCPageNameLogging.h"

@class NSString, SCBehaviorSubject, SCObservable;

@interface SCUnauthenticatedLandingPage : UIViewController <SCPageNameLogging>
{
    SCBehaviorSubject *_userActionsSubject;
}

- (void).cxx_destruct;
- (void)_addGhost;
- (void)signUpTapped;
- (void)logInTapped;
- (id)_createSignUpButton;
- (id)_createLogInButton;
- (void)loadView;
- (void)viewDidAppear:(_Bool)arg1;
- (id)init;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (id)pageViewName;
@property(readonly, nonatomic) SCObservable *userActions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

