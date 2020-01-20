//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCOperaSerengetiViewControllerProvidingResult.h"
#import "SCSerengetiViewControllerDelegate.h"

@class NSString, SCImpalaSnapInsightsViewController, SCSerengetiViewController;

@interface SCSerengetiViewControllerOperaProviderResult : NSObject <SCSerengetiViewControllerDelegate, SCOperaSerengetiViewControllerProvidingResult>
{
    SCSerengetiViewController *_serengetiViewController;
    SCImpalaSnapInsightsViewController *_snapInsightsViewController;
    id <SCOperaSerengetiViewControllerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCOperaSerengetiViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)serengetiViewController:(id)arg1 didUpdateScrollView:(id)arg2;
- (id)scrollView;
- (id)viewController;
- (id)initWithLink:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
