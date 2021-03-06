//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCMomentsOptInViewDelegate.h"

@class NSString, SCMomentsOptInDataProvider, SCMomentsOptInManager, SCMomentsOptInView, SCUserSession;

@interface SCMomentsOptInViewController : SCOperaLayerViewController <SCMomentsOptInViewDelegate>
{
    SCUserSession *_userSession;
    SCMomentsOptInDataProvider *_dataProvider;
    SCMomentsOptInManager *_optInManager;
    SCMomentsOptInView *_optInView;
    long long _source;
    _Bool _error;
    _Bool _previousStatusBarHidden;
    id <SCImageDownloading> _imageDownloader;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) id <SCImageDownloading> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
- (void).cxx_destruct;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)_announceNotificationOptInSettingsPageView;
- (void)_setError:(id)arg1;
- (void)dismissMomentsOptIn;
- (void)_handleSubscriptionFailure:(_Bool)arg1;
- (void)didUpdateSubscription:(_Bool)arg1 optInEvent:(id)arg2 failure:(CDUnknownBlockType)arg3;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidFullyDisappear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_updateModel:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 source:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

