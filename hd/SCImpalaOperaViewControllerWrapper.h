//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCImpalaInteractiveDismissalDelegate.h"
#import "SCOperaSilentlyPresentedProtocol.h"
#import "SCShakeToReportDelegate.h"

@class NSString;

@interface SCImpalaOperaViewControllerWrapper : UIViewController <SCImpalaInteractiveDismissalDelegate, SCShakeToReportDelegate, SCOperaSilentlyPresentedProtocol>
{
    UIViewController *_viewController;
    _Bool _pauseOperaWhilePresented;
}

- (void).cxx_destruct;
- (id)defaultProjectNameV2;
- (_Bool)shouldBeginInteractiveDismissal;
- (_Bool)shouldBeSilentlyPresentedAndPauseOpera;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)initWithViewController:(id)arg1 pauseOperaWhilePresented:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
