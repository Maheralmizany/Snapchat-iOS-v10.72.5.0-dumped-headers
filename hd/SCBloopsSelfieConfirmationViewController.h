//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBloopsFullscreenPlayerViewController.h"

#import "SCBloopsSelfieConfirmationControlViewDelegate.h"

@class NSString, SCBloopsSelfieConfirmationControlView;

@interface SCBloopsSelfieConfirmationViewController : SCBloopsFullscreenPlayerViewController <SCBloopsSelfieConfirmationControlViewDelegate>
{
    _Bool _controlEnable;
    id <SCBloopsSelfieConfirmationViewControllerDelegate> _controlViewDelegate;
    SCBloopsSelfieConfirmationControlView *_controlView;
}

@property(retain, nonatomic) SCBloopsSelfieConfirmationControlView *controlView; // @synthesize controlView=_controlView;
@property(nonatomic) _Bool controlEnable; // @synthesize controlEnable=_controlEnable;
@property(nonatomic) __weak id <SCBloopsSelfieConfirmationViewControllerDelegate> controlViewDelegate; // @synthesize controlViewDelegate=_controlViewDelegate;
- (void).cxx_destruct;
- (void)initialSetup;
- (void)selfieConfirmationControlViewDidTapRetakeSelfie:(id)arg1;
- (void)selfieConfirmationControlViewDidTapUseSelfie:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

