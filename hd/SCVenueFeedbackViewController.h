//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCComposerViewOwner.h"
#import "SCVenueFeedbackViewActionHandler.h"

@class CLLocation, NSArray, NSString, SCMapSnapTokenService, SCVenueFeedbackView;

@interface SCVenueFeedbackViewController : UIViewController <SCComposerViewOwner, SCVenueFeedbackViewActionHandler>
{
    SCVenueFeedbackView *_venueFeedbackView;
    SCMapSnapTokenService *_snapTokenService;
    id <SCVenueFeedbackViewControllerDelegate> _delegate;
    NSArray *_venueModels;
    NSString *_venueId;
    NSString *_venueName;
    CLLocation *_location;
}

- (void).cxx_destruct;
- (void)didSubmitFeedback:(id)arg1;
- (void)didTapBack:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 venueId:(id)arg2 venueName:(id)arg3 location:(id)arg4 venues:(id)arg5 snapTokenService:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

