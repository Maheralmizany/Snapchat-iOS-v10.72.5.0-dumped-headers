//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class SCUnauthenticatedBaseView;

@interface SCPasswordResetSuccessViewController : UIViewController
{
    id <SCPasswordResetSuccessDelegate> _delegate;
    SCUnauthenticatedBaseView *_baseView;
    id <SCUnauthenticatedStyleHelper> _styleHelper;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)_backButtonTapped;
- (void)loadView;
- (id)initWithDelegate:(id)arg1;

@end
